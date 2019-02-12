// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vtop_H_
#define _Vtop_H_

#include "verilated.h"
class Vtop__Syms;

//----------

VL_MODULE(Vtop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(reset,0,0);
    VL_OUT8(valid,0,0);
    VL_IN8(clk,0,0);
    //char	__VpadToAlign3[1];
    VL_IN16(in_arg_0_0_0,15,0);
    VL_OUT16(out_0_0,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin,2,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin,1,0);
    //char	__VpadToAlign17[1];
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg,15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk,0,0);
    //char	__VpadToAlign31[1];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign36[4];
    Vtop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    Vtop& operator= (const Vtop&);	///< Copying not allowed
    Vtop(const Vtop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    Vtop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtop();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtop__Syms* symsp, bool first);
  private:
    static QData	_change_request(Vtop__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__6(Vtop__Syms* __restrict vlSymsp);
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
