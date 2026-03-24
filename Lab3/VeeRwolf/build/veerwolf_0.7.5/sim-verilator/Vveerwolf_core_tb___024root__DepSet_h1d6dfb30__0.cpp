// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb___024root.h"

void Vveerwolf_core_tb___024root___eval_triggers__ico(Vveerwolf_core_tb___024root* vlSelf);
void Vveerwolf_core_tb___024root___eval_ico(Vveerwolf_core_tb___024root* vlSelf);

bool Vveerwolf_core_tb___024root___eval_phase__ico(Vveerwolf_core_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vveerwolf_core_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vveerwolf_core_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vveerwolf_core_tb___024root___eval_triggers__act(Vveerwolf_core_tb___024root* vlSelf);
void Vveerwolf_core_tb___024root___eval_act(Vveerwolf_core_tb___024root* vlSelf);

bool Vveerwolf_core_tb___024root___eval_phase__act(Vveerwolf_core_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<112> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vveerwolf_core_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vveerwolf_core_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vveerwolf_core_tb___024root___eval_nba(Vveerwolf_core_tb___024root* vlSelf);

bool Vveerwolf_core_tb___024root___eval_phase__nba(Vveerwolf_core_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vveerwolf_core_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vveerwolf_core_tb___024root___dump_triggers__ico(Vveerwolf_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vveerwolf_core_tb___024root___dump_triggers__nba(Vveerwolf_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vveerwolf_core_tb___024root___dump_triggers__act(Vveerwolf_core_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vveerwolf_core_tb___024root___eval(Vveerwolf_core_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vveerwolf_core_tb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/veerwolf_0.7.5/tb/veerwolf_core_tb.v", 25, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vveerwolf_core_tb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vveerwolf_core_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/veerwolf_0.7.5/tb/veerwolf_core_tb.v", 25, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vveerwolf_core_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/veerwolf_0.7.5/tb/veerwolf_core_tb.v", 25, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vveerwolf_core_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vveerwolf_core_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vveerwolf_core_tb___024root___eval_debug_assertions(Vveerwolf_core_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vveerwolf_core_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tck & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tck");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tms & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tms");}
    if (VL_UNLIKELY((vlSelf->i_jtag_tdi & 0xfeU))) {
        Verilated::overWidthError("i_jtag_tdi");}
    if (VL_UNLIKELY((vlSelf->i_jtag_trst_n & 0xfeU))) {
        Verilated::overWidthError("i_jtag_trst_n");}
}
#endif  // VL_DEBUG
