#include <cstdio>

#include "conv_1_1.h"

#include "hardware_process_helper.h"
#include "coreir_interpret.h"
#include "halide_image_io.h"

using namespace Halide::Tools;
using namespace Halide::Runtime;

int main(int argc, char **argv) {

  General_ProcessController<uint8_t> processor("conv_1_1",
                                            {
                                              {"cpu",
                                                  [&]() { conv_1_1(processor.input, processor.kernel, processor.output); }
                                              },
                                              {"coreir",
                                                  [&]() { run_coreir_on_interpreter<>("bin/design_top.json", processor.input, processor.output,
                                                                                      "self.in_arg_0_0_0", "self.out_0_0"); }
                                              }

                                            });

  processor.input = Buffer<uint8_t>(64, 64);
  processor.kernel = Buffer<uint8_t>(64, 64, 4);
  processor.output = Buffer<uint8_t>(64, 64, 4);
  
  processor.process_command(argc, argv);
  
}
