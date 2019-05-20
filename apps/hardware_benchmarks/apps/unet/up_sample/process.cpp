#include <cstdio>

#include "up_sample.h"

#include "hardware_process_helper.h"
#include "coreir_interpret.h"
#include "halide_image_io.h"

using namespace Halide::Tools;
using namespace Halide::Runtime;

int main(int argc, char **argv) {

  OneInOneOut_ProcessController<uint8_t> processor("up_sample",
                                            {
                                              {"cpu",
                                                  [&]() { up_sample(processor.input, processor.output); }
                                              },
                                              {"coreir",
                                                  [&]() { run_coreir_on_interpreter<>("bin/design_top.json", processor.input, processor.output,
                                                                                      "self.in_arg_0_0_0", "self.out_0_0"); }
                                              }

                                            });

  processor.input = Buffer<uint8_t>(64, 64, 4);
  processor.output = Buffer<uint8_t>(128, 128, 4);
  
  processor.process_command(argc, argv);
  
}
