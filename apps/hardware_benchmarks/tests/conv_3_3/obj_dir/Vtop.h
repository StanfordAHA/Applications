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
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin,2,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__enMux___05Fout,6,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg,6,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__enMux___05Fout,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__enMux___05Fout,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__enMux___05Fout,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout,6,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__enMux___05Fout,6,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg,6,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__enMux___05Fout,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__enMux___05Fout,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg,0,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__enMux___05Fout,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg,5,0);
    VL_SIG8(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin,1,0);
    //char	__VpadToAlign41[1];
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__enMux___05Fout,15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg,15,0);
    //char	__VpadToAlign66[6];
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data[64],15,0);
    VL_SIG16(v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data[64],15,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk,0,0);
    VL_SIG8(__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk,0,0);
    //char	__VpadToAlign342[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign348[4];
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
    static void	_combo__TOP__19(Vtop__Syms* __restrict vlSymsp);
    static void	_combo__TOP__25(Vtop__Syms* __restrict vlSymsp);
    static void	_eval(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_initial(Vtop__Syms* __restrict vlSymsp);
    static void	_eval_settle(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(Vtop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__13(Vtop__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__20(Vtop__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__22(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__15(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__16(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__18(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__21(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__23(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__9(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__17(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__24(Vtop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__6(Vtop__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
