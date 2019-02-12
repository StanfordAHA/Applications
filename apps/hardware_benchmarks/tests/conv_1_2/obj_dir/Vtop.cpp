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
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin = VL_RAND_RESET_I(3);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg = VL_RAND_RESET_I(16);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin = VL_RAND_RESET_I(2);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk = VL_RAND_RESET_I(1);
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

void Vtop::_initial__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_initial__TOP__2\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at bin/top.v:25
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg = 0U;
    // INITIAL at bin/top.v:25
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg = 0U;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__3\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:28
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg 
	= vlTOPp->in_arg_0_0_0;
}

void Vtop::_settle__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__4\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= (1U | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= (4U | (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin));
    vlTOPp->out_0_0 = (0xffffU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg) 
				  + ((IData)(3U) * (IData)(vlTOPp->in_arg_0_0_0))));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__5(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__5\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at bin/top.v:28
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout;
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((5U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((1U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 1U));
}

VL_INLINE_OPT void Vtop::_combo__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_combo__TOP__6\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->out_0_0 = (0xffffU & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1__DOT__outReg) 
				  + ((IData)(3U) * (IData)(vlTOPp->in_arg_0_0_0))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & (((0x3fU < (0xffffU & ((IData)(1U) 
					    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)))) 
		       | (IData)(vlTOPp->reset)) ? 0U
		       : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))));
}

void Vtop::_settle__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__7\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__enMux___05Fout 
	= (0xffffU & (((0x3fU < (0xffffU & ((IData)(1U) 
					    + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)))) 
		       | (IData)(vlTOPp->reset)) ? 0U
		       : ((IData)(1U) + (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg))));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin 
	= ((5U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)) 
	   | ((1U <= (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count__DOT__reg0__DOT__outReg)) 
	      << 1U));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
    vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin 
	= ((1U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin)) 
	   | (2U & (IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin)));
}

VL_INLINE_OPT void Vtop::_sequent__TOP__8(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_sequent__TOP__8\n"); );
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

void Vtop::_settle__TOP__9(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_settle__TOP__9\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->valid = (1U & (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			    & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr__DOT__opN_0___05Fin) 
			       >> 1U)) & ((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valid_andr___05Fin) 
					  >> 2U)));
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk)))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    if (((IData)(vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk)))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_1__DOT__count___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__lb1d_0__DOT__reg_1___05Fclk;
    vlTOPp->__Vclklast__TOP__v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk 
	= vlTOPp->v__DOT__lb_hw_input_stencil_update_stream__DOT__lb_recurse__DOT__valcounter_0__DOT__count___05Fclk;
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_eval_initial\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__2(vlSymsp);
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
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vtop::_change_request\n"); );
    Vtop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
