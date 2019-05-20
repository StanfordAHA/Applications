#include <cstdio>

#include "conv.h"

#include "hardware_process_helper.h"
#include "coreir_interpret.h"
#include "halide_image_io.h"

using namespace Halide::Tools;
using namespace Halide::Runtime;

int main(int argc, char **argv) {
  int x = 128;
  int y = 128;
  int k_x = 3;
  int k_y = 3;
  int z = 2;
  int w = 4;

  std::vector<Buffer<uint8_t>> inputs;
  std::vector<Buffer<uint8_t>> outputs;

  inputs.push_back(Buffer<uint8_t>(x, y, z));
  inputs.push_back(Buffer<uint8_t>(k_x, k_y, z, w)); // kernel
  outputs.push_back(Buffer<uint8_t>(x - k_x + 1, y - k_y + 1, w));

  General_ProcessController<uint8_t> processor("conv",
                                            {
                                              {"cpu",
                                                  [&]() { conv(inputs[0], inputs[1], outputs[0]); }
                                              },
                                              {"coreir",
                                                  [&]() { run_coreir_on_interpreter<>("bin/design_top.json", inputs[0], outputs[0],
                                                                                      "self.in_arg_0_0_0", "self.out_0_0"); }
                                              }

                                            }, &inputs, &outputs);
 
  processor.process_command(argc, argv);
  
}