#include "Halide.h"

namespace {

using namespace Halide;

class UnitTestInoutOnebit : public Halide::Generator<UnitTestInoutOnebit> {
public:
    Input<Buffer<bool>>  input{"input", 2};
    Output<Buffer<bool>> output{"output", 2};

    void generate() {
        /* THE ALGORITHM */

        Var x("x"), y("y");

        Func hw_input("hw_input");
        hw_input(x, y) = cast<bool>(input(x, y));

        Func inv;
        inv(x,y) = !( hw_input(x, y) );

        Func hw_output("hw_output");
        hw_output(x, y) = cast<bool>(inv(x, y));
        output(x, y) = hw_output(x,y);

        /* THE SCHEDULE */
        if (get_target().has_feature(Target::CoreIR)) {
          Var xi,yi, xo,yo;
          
          hw_input.compute_root();
          hw_output.compute_root();
          
          hw_output.tile(x,y, xo,yo, xi,yi, 64-2, 64-2)
            .hw_accelerate(xi, xo);

          hw_input.stream_to_accelerator();
          
        } else {  // schedule to CPU
          output.compute_root();
        }
        
    }
};

}  // namespace

HALIDE_REGISTER_GENERATOR(UnitTestInoutOnebit, inout_onebit)
