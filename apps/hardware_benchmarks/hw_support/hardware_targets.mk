# Usage:
#  make all:       compiles all code
#       generator: create Halide generator
#       design:    create cpu design
#       run:       run cpu design with image
#       compare:   compare two output images
#       eval:      evaluate runtime
#       golden:    copy design and output image
#       clean:     remove bin directory


# define defulats to environment variables
SHELL = bash
BIN ?= bin
GOLDEN ?= golden
HWSUPPORT ?= ../../hw_support
HALIDE_SRC_PATH ?= ../../../..

# set default to TESTNAME which forces failure
TESTNAME ?= undefined_testname
USE_COREIR_VALID ?= 0

HLS_PROCESS_CXX_FLAGS = -DC_TEST -Wno-unknown-pragmas -Wno-unused-label -Wno-uninitialized -Wno-literal-suffix

THIS_MAKEFILE = $(realpath $(filter %Makefile, $(MAKEFILE_LIST)))
ROOT_DIR = $(strip $(shell dirname $(THIS_MAKEFILE)))

default: all
all: $(BIN)/process

halide compiler:
	$(MAKE) -C $(HALIDE_SRC_PATH) distrib

$(HWSUPPORT)/$(BIN)/hardware_process_helper.o: $(HWSUPPORT)/hardware_process_helper.cpp
	@-mkdir -p $(HWSUPPORT)/$(BIN)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(HWSUPPORT)/$(BIN)/coreir_interpret.o: $(HWSUPPORT)/coreir_interpret.cpp
	@-mkdir -p $(HWSUPPORT)/$(BIN)
	@#env LD_LIBRARY_PATH=$(COREIR_DIR)/lib $(CXX) $(CXXFLAGS) -I$(HWSUPPORT) -c $< -o $@ $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -I$(HWSUPPORT) -c $< -o $@ $(LDFLAGS)

.PHONY: generator
generator $(BIN)/$(TESTNAME).generator: $(TESTNAME)_generator.cpp $(GENERATOR_DEPS)
	@-mkdir -p $(BIN)
	@#env LD_LIBRARY_PATH=$(COREIR_DIR)/lib $(CXX) $(CXXFLAGS) -g -fno-rtti $(filter-out %.h,$^) -o $@ $(LDFLAGS)
	$(CXX) $(CXXFLAGS) -g -fno-rtti $(filter-out %.h,$^) -o $@ $(LDFLAGS)

design design-cpu $(BIN)/$(TESTNAME).a: $(BIN)/$(TESTNAME).generator
	@-mkdir -p $(BIN)
	$^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)

design-coreir $(BIN)/design_top.json $(BIN)/design_top.txt:
	@if [ $(USE_COREIR_VALID) -ne "0" ]; then \
	 $(MAKE) design-coreir-valid; \
	else \
	 $(MAKE) design-coreir-no_valid; \
	fi

design-coreir-no_valid: $(BIN)/$(TESTNAME).generator
	@-mkdir -p $(BIN)
	@#env LD_LIBRARY_PATH=$(COREIR_DIR)/lib $^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)-coreir -e coreir
	$^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)-coreir -e coreir

design-coreir-valid design-coreir_valid: $(BIN)/$(TESTNAME).generator
	@-mkdir -p $(BIN)
	@#env LD_LIBRARY_PATH=$(COREIR_DIR)/lib $^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)-coreir-coreir_valid -e coreir
	$^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)-coreir-coreir_valid -e coreir

design-verilog $(BIN)/top.v: $(BIN)/design_top.json
	@-mkdir -p $(BIN)
	./$(COREIR_DIR)/bin/coreir -i $(ROOT_DIR)/$(BIN)/design_top.json -o $(ROOT_DIR)/$(BIN)/top.v --load_libs $(COREIR_DIR)/lib/libcoreir-commonlib.so
	@echo -e "\033[0;32m coreir verilog generated \033[0m"

design-hls $(BIN)/vhls_target.cpp $(BIN)/$(TESTNAME)_vhls.cpp: $(BIN)/$(TESTNAME).generator
	@-mkdir -p $(BIN)
	$^ -g $(TESTNAME) -o $(BIN) -f $(TESTNAME) target=$(HL_TARGET)-hls-legacy_buffer_wrappers -e vhls

$(BIN)/process: process.cpp $(BIN)/$(TESTNAME).a $(BIN)/vhls_target.cpp $(BIN)/$(TESTNAME)_vhls.cpp $(HWSUPPORT)/$(BIN)/hardware_process_helper.o $(HWSUPPORT)/$(BIN)/coreir_interpret.o
	@-mkdir -p $(BIN)
	@#env LD_LIBRARY_PATH=$(COREIR_DIR)/lib $(CXX) $(CXXFLAGS) -I$(BIN) -I$(HWSUPPORT) -I$(HWSUPPORT)/xilinx_hls_lib_2015_4 -Wall $(HLS_PROCESS_CXX_FLAGS)  -O3 $^ -o $@ $(LDFLAGS) $(IMAGE_IO_FLAGS)
	$(CXX) $(CXXFLAGS) -I$(BIN) -I$(HWSUPPORT) -I$(HWSUPPORT)/xilinx_hls_lib_2015_4 -Wall $(HLS_PROCESS_CXX_FLAGS)  -O3 $^ -o $@ $(LDFLAGS) $(IMAGE_IO_FLAGS)

image image-cpu: $(BIN)/process
	@-mkdir -p $(BIN)
	$(BIN)/process image

$(BIN)/input.raw: input.png
	@-mkdir -p $(BIN)
	$(HWSUPPORT)/steveconvert.csh input.png $(BIN)/input.raw

$(BIN)/%.raw: $(BIN)/%.png
	$(HWSUPPORT)/steveconvert.csh $(BIN)/$*.png $(BIN)/$*.raw

run run-cpu $(BIN)/output_cpu.png: $(BIN)/process
	@-mkdir -p $(BIN)
	$(BIN)/process run cpu input.png

run-coreir $(BIN)/output_coreir.png: $(BIN)/process $(BIN)/design_top.json
	@-mkdir -p $(BIN)
	$(BIN)/process run coreir input.png

run-verilog: $(BIN)/top.v $(BIN)/input.raw
	@-mkdir -p $(BIN)
	verilator --cc $(BIN)/top.v --exe $(COREIR_DIR)/tools/verilator/tb.cpp
	cd obj_dir && \
	make -f Vtop.mk CXXFLAGS="-std=c++11 -Wall -fPIC -I/nobackup/setter/h2h/coreir/include" CXX=g++-4.9 LINK=g++-4.9 && \
	./Vtop -i ../$(BIN)/input.raw -o ../$(BIN)/output_verilog.raw

run-vhls: $(BIN)/process
	@-mkdir -p $(BIN)
	$(BIN)/process run vhls input.png

compare compare-cpu-coreir compare-coreir-cpu: $(BIN)/output_coreir.png $(BIN)/output_cpu.png
	$(BIN)/process compare $(BIN)/output_coreir.png $(BIN)/output_cpu.png

eval eval-cpu: $(BIN)/process
	@-mkdir -p $(BIN)
	$(BIN)/process eval cpu input.png

eval-coreir: $(BIN)/process
	@-mkdir -p $(BIN)
	$(BIN)/process eval coreir input.png

update_golden updategolden golden: $(BIN)/output_cpu.png
	@-mkdir -p $(GOLDEN)
	cp $(BIN)/output_cpu.png $(GOLDEN)/golden_output.png

check:
	@printf "%-15s" $(TESTNAME);
	@if [ -f "$(BIN)/design_prepass.json" ]; then \
	  printf "  \033[0;32m%s\033[0m" " coreir"; \
	else \
	  printf "  \033[0;31m%s\033[0m" "!coreir"; \
	fi
	@if [ -f "$(BIN)/process" ]; then \
	  printf "  \033[0;32m%s\033[0m" " process"; \
	else \
	  printf "  \033[0;31m%s\033[0m" "!process"; \
	fi
	@if [ -f "$(BIN)/output.png" ]; then \
	  printf "  \033[0;32m%s\033[0m" " output.png"; \
	else \
	  printf "  \033[0;31m%s\033[0m" "!output.png"; \
	fi
	@if [ -f "passed.md5" ]; then \
	  printf "  \033[0;32m%s\033[0m" "passed.md5"; \
	fi
	@if [ -f "failed.md5" ]; then \
	  printf "  \033[0;31m%s\033[0m" "failed.md5"; \
	fi
	@printf "\n"

$(BIN)/graph.png: $(BIN)/design_top.txt
	dot -Tpng $(BIN)/design_top.txt > $(BIN)/graph.png
graph graph.png: $(BIN)/graph.png

clean:
	rm -rf $(BIN)

test: run
