#include "Halide.h"

namespace {

using namespace Halide;

class ConvolutionKernel : public Halide::Generator<ConvolutionKernel> {
public:
    Input<Buffer<uint8_t>>  input{"input", 2};
    Input<Buffer<uint8_t>>  kernel{"kernel", 3};
    Output<Buffer<uint8_t>> output{"output", 3};

    void generate() {
        /* THE ALGORITHM */

        int height = 64;
        int width = 64;

        Var x("x"), y("y"), z("z");

        Func conv("conv");
        RDom r(0, 1,
               0, 1);

        conv(x, y, z) = 0;

        Func hw_input("hw_input");
        hw_input(x, y) = cast<uint16_t>(input(x, y));
        conv(x, y, z)  += kernel(r.x, r.y, z) * hw_input(x + r.x, y + r.y);

        Func hw_output("hw_output");
        hw_output(x, y, z) = cast<uint8_t>(conv(x, y, z));
        output(x, y, z) = hw_output(x, y, z);

        /* THE SCHEDULE */
        if (get_target().has_feature(Target::CoreIR)) {
          Var xi,yi, xo,yo;
          
          hw_input.compute_root();
          hw_output.compute_root();
          
          hw_output.tile(x,y, xo,yo, xi,yi, width, height)
            .hw_accelerate(xi, xo);

          conv.update()
            .unroll(r.x, 1)
            .unroll(r.y, 1);

          conv.linebuffer();

          hw_input.stream_to_accelerator();
          
        } else {  // schedule to CPU
          conv.compute_root();
          conv.update()
            .unroll(r.x, 1)
            .unroll(r.y, 1);
        }
        
    }
};

}  // namespace

HALIDE_REGISTER_GENERATOR(ConvolutionKernel, conv_1_1)
