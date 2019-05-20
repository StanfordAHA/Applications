#include "Halide.h"

namespace {

using namespace Halide;

class ConvolutionKernel : public Halide::Generator<ConvolutionKernel> {
public:
    Input<Buffer<uint8_t>>  input{"input", 3};
    Input<Buffer<uint8_t>>  kernel{"kernel", 4};
    Output<Buffer<uint8_t>> output{"output", 3};

    void generate() {
        /* THE ALGORITHM */

        Var x("x"), y("y"), z("z"), w("w");

        Expr height = input.dim(0).extent();
        Expr width = input.dim(1).extent();
        Expr k_x = kernel.dim(0).extent();
        Expr k_y = kernel.dim(1).extent();
        Expr k_z = kernel.dim(2).extent();

        Func conv("conv");
        RDom r(0, k_x,
               0, k_y,
               0, k_z);

        conv(x, y, w) = 0;

        Func hw_input("hw_input");
        Func clamp_input("clamp_input");
        clamp_input(x, y, z) = input(clamp(x, 0, width - 1), clamp(y, 0, height - 1), z);
        hw_input(x, y, z) = cast<uint16_t>(clamp_input(x, y, z));
        conv(x, y, w)  += kernel(r.x, r.y, r.z, w)  * hw_input(x + r.x - 1, y + r.y - 1, r.z);

        Func hw_output("hw_output");
        hw_output(x, y, w) = cast<uint8_t>(conv(x, y, w));
        output(x, y, w) = max(0, hw_output(x, y, w));

        /* THE SCHEDULE */
        if (get_target().has_feature(Target::CoreIR)) {
          Var xi,yi, xo,yo;
          
          hw_input.compute_root();
          hw_output.compute_root();
          
          hw_output.tile(x,y, xo,yo, xi,yi, width-k_x+1, height-k_y+1)
            .hw_accelerate(xi, xo);

          conv.update()
            .unroll(r.x, 3)
            .unroll(r.y, 3);

          conv.linebuffer();

          hw_input.stream_to_accelerator();
          
        } else {  // schedule to CPU
          conv.compute_root();
          conv.update()
            .unroll(r.x, 3)
            .unroll(r.y, 3);
        }
        
    }
};

}  // namespace

HALIDE_REGISTER_GENERATOR(ConvolutionKernel, conv)
