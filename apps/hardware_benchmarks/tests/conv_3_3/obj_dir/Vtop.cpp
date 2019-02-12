// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"              // For This
#include "Vtop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    in_arg_0_0_0 = VL_RAND_RESET_I(16);
    out_0_0 = VL_RAND_RESET_I(16);
    reset = VL_RAND_RESET_I(1);
    valid = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin = VL_RAND_RESET_I(3);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__enMux___05Fout = VL_RAND_RESET_I(7);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data[__Vi0] = VL_RAND_RESET_I(16);
    }}
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__enMux___05Fout = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__enMux___05Fout = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__enMux___05Fout = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout = VL_RAND_RESET_I(7);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__enMux___05Fout = VL_RAND_RESET_I(7);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<64; ++__Vi0) {
	    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data[__Vi0] = VL_RAND_RESET_I(16);
    }}
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__enMux___05Fout = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__enMux___05Fout = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__enMux___05Fout = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(6);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__enMux___05Fout = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin = VL_RAND_RESET_I(2);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk = VL_RAND_RESET_I(1);
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vtop::~Vtop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vtop::eval() {
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vtop::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__1\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0,5,0);
    //char	__VpadToAlign25[1];
    VL_SIG16(__Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0,15,0);
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__enMux___05Fout;
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__enMux___05Fout;
    // ALWAYS at bin/top.v:155
    __Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0 
	= vlTOPp->in_arg_0_0_0;
    __Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg;
    // ALWAYSPOST at bin/top.v:157
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data[__Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0] 
	= __Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data__v0;
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__enMux___05Fout;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0,5,0);
    VL_SIG8(__Vdlyvset__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0,0,0);
    VL_SIG16(__Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0,15,0);
    // Body
    __Vdlyvset__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0 = 0U;
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__enMux___05Fout;
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__enMux___05Fout;
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__enMux___05Fout;
    // ALWAYS at bin/top.v:155
    if (vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg) {
	__Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0 
	    = vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata;
	__Vdlyvset__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0 = 1U;
	__Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0 
	    = vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg;
    }
    // ALWAYSPOST at bin/top.v:157
    if (__Vdlyvset__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0) {
	vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data[__Vdlyvdim0__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0] 
	    = __Vdlyvval__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data__v0;
    }
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__enMux___05Fout;
}

void Vtop::_settle__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= (1U | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1__DOT__outReg;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__10(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__10\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__enMux___05Fout;
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((3U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((2U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 2U));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__11(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__11\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__12(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__12\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout;
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((5U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((2U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 1U));
}

void Vtop::_initial__TOP__13(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__13\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg = 0U;
    // INITIAL at bin/top.v:176
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__14(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__14\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))
		     ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))));
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__enMux___05Fout;
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__enMux___05Fout 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg)
		     : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__enMux___05Fout 
	= ((0x40U == (0x7fU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg)))) 
	   | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__15(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__15\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__16(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__16\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg 
	= vlTOPp->in_arg_0_0_0;
}

void Vtop::_settle__TOP__17(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__17\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((3U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((2U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 2U));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & (((0x3fU < (0xffffU & ((IData)(1U) 
					    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)))) 
		       | (IData)(vlTOPp->reset)) ? 0U
		       : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & ((0x3fU < (0xffffU & ((IData)(1U) 
					   + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))))
		       ? (((0x3fU < (0xffffU & ((IData)(1U) 
						+ (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)))) 
			   | (IData)(vlTOPp->reset))
			   ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)))
		       : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((5U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((2U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 1U));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))
		     ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__enMux___05Fout 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg)
		     : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__enMux___05Fout 
	= ((0x40U == (0x7fU & ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__cnt__DOT__reg0__DOT__outReg)))) 
	   | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg) 
		     & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg))
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg) 
		    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data
	[vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg];
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__18(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__18\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:179
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata;
}

VL_INLINE_OPT void Vtop::_combo__TOP__19(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__19\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & (((0x3fU < (0xffffU & ((IData)(1U) 
					    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)))) 
		       | (IData)(vlTOPp->reset)) ? 0U
		       : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & ((0x3fU < (0xffffU & ((IData)(1U) 
					   + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))))
		       ? (((0x3fU < (0xffffU & ((IData)(1U) 
						+ (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)))) 
			   | (IData)(vlTOPp->reset))
			   ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)))
		       : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count__DOT__reg0__DOT__outReg)));
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__20(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_multiclk__TOP__20\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg)
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__waddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__enMux___05Fout 
	= (0x3fU & (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg) 
		     & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg))
		     ? ((0x3fU == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg))
			 ? 0U : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)))
		     : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout 
	= (0x7fU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__state__DOT__reg0__DOT__outReg) 
		    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__enMux___05Fout 
	= ((0x40U == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout)) 
	   | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__enMux___05Fout 
	= ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg)
	    ? (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg)
	    : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__21(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__21\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem__DOT__data
	[vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg];
}

VL_INLINE_OPT void Vtop::_multiclk__TOP__22(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_multiclk__TOP__22\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
    vlTOPp->valid = (1U & (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			    & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			       >> 1U)) & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin) 
					  >> 2U)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__23(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__23\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data
	[vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg];
}

void Vtop::_settle__TOP__24(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__24\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem__DOT__data
	[vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__raddr__DOT__r__DOT__reg0__DOT__outReg];
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__enMux___05Fout 
	= ((0x40U == (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout)) 
	   | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__enMux___05Fout 
	= ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__state__DOT__reg0__DOT__outReg)
	    ? (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__cnt__DOT__reg0__DOT__outReg)
	    : (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__add_wen___05Fout));
    vlTOPp->valid = (1U & (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			    & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			       >> 1U)) & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin) 
					  >> 2U)));
    vlTOPp->out_0_0 = (0xffffU & (((((((((IData)(0xbU) 
					 * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg)) 
					+ ((IData)(0xeU) 
					   * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg))) 
				       + ((IData)(0x11U) 
					  * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata))) 
				      + ((IData)(0xcU) 
					 * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg))) 
				     + ((IData)(0x12U) 
					* (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata))) 
				    + ((IData)(0xdU) 
				       * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg))) 
				   + ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg) 
				      << 4U)) + ((IData)(0x13U) 
						 * (IData)(vlTOPp->in_arg_0_0_0))));
}

VL_INLINE_OPT void Vtop::_combo__TOP__25(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__25\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_0_0 = (0xffffU & (((((((((IData)(0xbU) 
					 * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2__DOT__outReg)) 
					+ ((IData)(0xeU) 
					   * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1__DOT__outReg))) 
				       + ((IData)(0x11U) 
					  * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0__DOT__mem___05Frdata))) 
				      + ((IData)(0xcU) 
					 * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2__DOT__outReg))) 
				     + ((IData)(0x12U) 
					* (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0__DOT__mem___05Frdata))) 
				    + ((IData)(0xdU) 
				       * (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2__DOT__outReg))) 
				   + ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg) 
				      << 4U)) + ((IData)(0x13U) 
						 * (IData)(vlTOPp->in_arg_0_0_0))));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk)))) {
	vlTOPp->_sequent__TOP__9(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk)))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk)))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk)))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk)))) {
	vlTOPp->_sequent__TOP__14(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk)))) {
	vlTOPp->_sequent__TOP__15(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk)))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk)))) {
	vlTOPp->_sequent__TOP__18(vlSymsp);
    }
    vlTOPp->_combo__TOP__19(vlSymsp);
    if ((((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk))) 
	 | ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk))))) {
	vlTOPp->_multiclk__TOP__20(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk)))) {
	vlTOPp->_sequent__TOP__21(vlSymsp);
    }
    if ((((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk))) 
	 | ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk))))) {
	vlTOPp->_multiclk__TOP__22(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk)))) {
	vlTOPp->_sequent__TOP__23(vlSymsp);
    }
    vlTOPp->_combo__TOP__25(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_1_0___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lbmem_2_0___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_1___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_1___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_1__DOT__reg_2___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_2___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_2__DOT__reg_2___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->_initial__TOP__13(vlSymsp);
}

void Vtop::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_settle\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__6(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
    vlTOPp->_settle__TOP__24(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
