// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

extern const VlWide<8>/*255:0*/ Vveerwolf_core_tb__ConstPool__CONST_h4e9f510d_0;

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__24(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__24\n"); );
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha06e3fa0__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha06e3fa0__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h3a496f70__0;
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h3a496f70__0 = 0;
    CData/*1:0*/ __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid = 0;
    VlWide<8>/*255:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_13;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[3U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[3U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[4U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[4U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[5U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[5U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[6U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[6U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr0[7U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__0__KET____DOT__wr1[7U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__0__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__0__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[0U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[0U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__1__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__2__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[1U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[1U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__3__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__4__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[2U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[2U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__5__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__6__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[3U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[3U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__7__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__8__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[4U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[4U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__9__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__10__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[5U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[5U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__11__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__12__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[6U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[6U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__13__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((1U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((2U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((2U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((4U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((4U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((8U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                        | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((8U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                           | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x80U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x100U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x400U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                            | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x800U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x1000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x2000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x4000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                             | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x8000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__14__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__0__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__1__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__2__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x80000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                              | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x80000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__3__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x100000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x100000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__4__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x200000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x200000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__5__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x400000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x400000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__6__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x800000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                               | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x800000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__7__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x1000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x1000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__8__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x2000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x2000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__9__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x4000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x4000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__10__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x8000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x8000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__11__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x10000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x10000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__12__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x20000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x20000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__13__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & ((0x40000000U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                 | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]))
                  ? ((0x40000000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U])
                      ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                      : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                 >> 0x32U))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__14__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__DOT__genblock__DOT__dffs__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                   | vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr0[7U]) 
                  >> 0x1fU) ? ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__BANKS__BRA__1__KET____DOT__wr1[7U] 
                                >> 0x1fU) ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__dec_tlu_br0_hist_wb)
                                : (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                           >> 0x32U)))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__BANKS__BRA__1__KET____DOT__BHT_CLK_GROUP__BRA__15__KET____DOT__BHT_FLOPS__BRA__15__KET____DOT__bht_bank__dout)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h59a1601e__0 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h46d25be7__0)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hae09c894__0 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h41141732__0)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_p1_f));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5d7b6ede__0 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h8fe2569b__0)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1582e1db__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h8fe2569b__0));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hc63d058a__0 
        = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hc537a83f__0)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_f));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h44fc1a00__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_f) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hc537a83f__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h44fc1a00__0) 
            << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hc63d058a__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0o_rd_data_f 
        = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1582e1db__0))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f) 
           | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h44fc1a00__0))) 
              & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__wayhit_f 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h1582e1db__0) 
             << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5d7b6ede__0)) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
        = (((- (IData)((1U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0o_rd_data_f) 
           | ((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
              & (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h59a1601e__0))) 
                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_p1_f) 
                 | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hae09c894__0))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_p1_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
        = (((- (IData)((1U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
            & (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h5d7b6ede__0))) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way0_f) 
               | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hc63d058a__0))) 
                  & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0_rd_data_way1_f))) 
           | ((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
              & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_bank0o_rd_data_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f 
        = ((((- (IData)((1U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__wayhit_f)) 
            | ((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
               & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h59a1601e__0) 
                    | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hae09c894__0)) 
                   << 1U) | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__wayhit_f) 
                                   >> 1U))))) & (1U 
                                                 | (2U 
                                                    & (((~ (IData)(
                                                                   (7U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                                                        >> 2U))))) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
                                                       << 1U))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h98fb996d__0 
        = (IData)((0U != (6U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h283caf2c__0 
        = (IData)((0U != (6U & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f)));
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid 
        = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f;
    __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout 
        = (3U & ((1U & ((IData)(__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid) 
                        >> 1U)) + (1U & (IData)(__Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__valid))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__num_valids 
        = __Vfunc_rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__countones__1__Vfuncout;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_valid_f 
        = ((~ (- (IData)((1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                >> 3U))))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f 
        = ((IData)((0U != (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f))) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hf1df4b1c__0));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_1, Vveerwolf_core_tb__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__way_raw 
        = (3U & ((((- (IData)((1U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way1_expanded_f)) 
                  | ((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
                     & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_hae09c894__0) 
                         << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h44fc1a00__0)))) 
                 | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f)) 
                    & (((- (IData)((1U & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_rd_f)))) 
                       | ((- (IData)((1U & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
                          & ((2U & (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_wr_tag) 
                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_rd_tag_p1_f)) 
                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid) 
                                         & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                             >> 7U) 
                                            & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f) 
                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_addr)))))
                                      ? ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                                         >> 9U) : (0U 
                                                   != 
                                                   ((((((((__Vtemp_1[0U] 
                                                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U]) 
                                                          | (__Vtemp_1[1U] 
                                                             & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U])) 
                                                         | (__Vtemp_1[2U] 
                                                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U])) 
                                                        | (__Vtemp_1[3U] 
                                                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U])) 
                                                       | (__Vtemp_1[4U] 
                                                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U])) 
                                                      | (__Vtemp_1[5U] 
                                                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U])) 
                                                     | (__Vtemp_1[6U] 
                                                        & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U])) 
                                                    | (__Vtemp_1[7U] 
                                                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U])))) 
                                    << 1U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_rd_f)))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h98fb996d__0) 
             << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h283caf2c__0)) 
           | ((2U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f)) 
              | (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                       >> 1U))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h283caf2c__0) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank0_rd_data_f) 
                     >> 1U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f)));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_3, Vveerwolf_core_tb__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_f));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U] 
        = (__Vtemp_3[0U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U] 
        = (__Vtemp_3[1U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U] 
        = (__Vtemp_3[2U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U] 
        = (__Vtemp_3[3U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U] 
        = (__Vtemp_3[4U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U] 
        = (__Vtemp_3[5U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U] 
        = (__Vtemp_3[6U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U] 
        = (__Vtemp_3[7U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f 
        = ((0U != ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__hist1_raw))) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
               >> 7U) & ((~ ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__fetchghr__dout) 
                             >> 8U)) & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                                           >> 3U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__final_h 
        = (0U != ((2U & (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0)) 
                          & (IData)((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__vwayhit_f) 
                                      >> 1U) & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h98fb996d__0) 
                                                | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bht_vbank1_rd_data_f) 
                                                   >> 1U))))) 
                         << 1U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f 
        = (0xffffU & (((- (IData)((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0))))) 
                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank1_rd_data_f 
                          >> 1U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0))) 
                                     & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_vbank0_rd_data_f 
                                        >> 1U))));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_13, Vveerwolf_core_tb__ConstPool__CONST_h4e9f510d_0, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_rd_addr_p1_f));
    if ((1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                >> 7U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__exu_mp_valid)))) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[0U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[0U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[0U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[0U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[1U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[1U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[1U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[1U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[2U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[2U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[2U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[2U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[3U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[3U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[3U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[3U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[4U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[4U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[4U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[4U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[5U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[5U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[5U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[5U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[5U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[6U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[6U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[6U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[6U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[6U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[7U] 
            = ((((~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[7U]) 
                 & (~ vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U])) 
                & vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U]) 
               | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__mp_wrlru_b0[7U] 
                   & (- (IData)((1U & (~ (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_mp_pkt 
                                                  >> 0x20U))))))) 
                  | ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__fetch_wrlru_b0[7U] 
                      & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_f)))) 
                     | ((__Vtemp_13[7U] & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__lru_update_valid_f)))) 
                        & (- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__tag_match_way0_p1_f)))))));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[0U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[0U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[1U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[1U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[2U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[2U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[3U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[3U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[4U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[4U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[5U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[5U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[6U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[6U];
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__genblk1__DOT__btb_lru_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din[7U] 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_lru_b0_f[7U];
    }
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en 
        = (IData)(((2U == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f))) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h3a496f70__0 
        = (IData)((1U == (3U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f 
        = (1U & (((vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0)) 
                  | ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0)) 
                     & (~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout))) 
                 ^ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                    >> 3U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus 
        = (1U & ((~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                     >> 3U)) & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0)) 
                                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f 
        = ((~ vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha07c0970__0) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                 >> 3U)));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__7__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en)
            ? vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__6__KET____DOT__rets_ff__dout
            : vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__7__KET____DOT__rets_ff__dout);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h3a496f70__0) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f));
    rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha06e3fa0__0 
        = ((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_h3a496f70__0) 
           & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
        = (0x3fffffffU & (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus))) 
                           & ((IData)(1U) + (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                             >> 1U))) 
                          | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f))) 
                              & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__faddrf_ff__dout) 
                             | ((- (IData)((1U & (~ 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_fg_crossing_f) 
                                                   | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__use_fa_plus)))))) 
                                & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout 
                                   >> 1U)))));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0 
        = ((0xffeU & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                      << 1U)) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__bp_total_branch_offset_f));
    if (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__1__KET____DOT__rets_ff__en) {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__4__KET____DOT__rets_ff__dout));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__4__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__5__KET____DOT__rets_ff__dout));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__5__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__4__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__6__KET____DOT__rets_ff__dout));
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__6__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__5__KET____DOT__rets_ff__dout) 
               | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                  & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__7__KET____DOT__rets_ff__dout));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__4__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__4__KET____DOT__rets_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__5__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__5__KET____DOT__rets_ff__dout;
        vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__6__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__6__KET____DOT__rets_ff__dout;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                  + (1U & (~ ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                              >> 3U)))) >> 0xcU));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                  + (0xfffU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                               >> 4U))) >> 0xcU));
    vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en)) 
                  & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))))
            ? vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout
            : (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellinp__retstack__BRA__7__KET____DOT__rets_ff__en))) 
                & (1U | ((0xffffe000U & ((0xffffe000U 
                                          & (((- (IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))))) 
                                              << 0xdU) 
                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                                                << 2U))) 
                                         | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_addr__DOT__cout))) 
                                             & ((IData)(1U) 
                                                + (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                                                   >> 0xbU))) 
                                            << 0xdU))) 
                         | (0x1ffeU & (((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                                        + (1U & (~ 
                                                 ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                  >> 3U)))) 
                                       << 1U))))) | 
               ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__rs_pop))) 
                & vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_btb_target_f 
        = (0x7fffffffU & (((- (IData)(((IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha06e3fa0__0) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                           & (vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout 
                              >> 1U)) | ((- (IData)(
                                                    ((~ (IData)(rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT____VdfgTmp_ha06e3fa0__0)) 
                                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__ifu_bp_hit_taken_f)))) 
                                         & ((0x7ffff000U 
                                             & ((0xfffff000U 
                                                 & (((- (IData)(
                                                                (1U 
                                                                 & (~ 
                                                                    (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                      >> 0xfU) 
                                                                     ^ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))))) 
                                                     << 0xcU) 
                                                    & (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                                                       << 1U))) 
                                                | ((((- (IData)(
                                                                ((~ 
                                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                   >> 0xfU)) 
                                                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)))) 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                                                         >> 0xbU))) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT__cout)) 
                                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                                      >> 0xfU)))) 
                                                       & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__adder_pc_in_f 
                                                           >> 0xbU) 
                                                          - (IData)(1U)))) 
                                                   << 0xcU))) 
                                            | (0xfffU 
                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__predtgt_addr__DOT____VdfgTmp_h04098182__0) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__ifu__DOT__bpred__DOT__bp__DOT__btb_sel_data_f) 
                                                   >> 4U)))))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__30(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__30\n"); );
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0 = 0;
    CData/*0:0*/ rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0;
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0 = 0;
    // Body
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hb43a7631__0 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_stbuf_reqvld_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_pmu_bus_misaligned 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_commit_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_merge_en));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
        = ((0U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                  & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 1U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x38U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 2U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0x1c0U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m = 3U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr0 
            = (IData)(((0U == (0xe00U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
        = ((0U == (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
           & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                   & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                    & ((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                       | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                          & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r))))))));
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 1U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x38U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 2U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0x1c0U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1)))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_m = 3U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__found_wrptr1 
            = (IData)(((0U == (0xe00U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
                       & (~ ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
                               & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
                              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                                 & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_m)))) 
                             | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                                & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)) 
                                   | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
                                      & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)))))))));
    }
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vldrff__dout) 
           & (IData)(((0x20U == (0x28U & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout))) 
                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h112dc658__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_stbuf_reqvld_r) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__dual_stbuf_write_r));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen_out 
        = ((8U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                    ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                        | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                       >> 3U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                 >> 3U)) << 3U)) | 
           ((4U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                     ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                         | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                        >> 2U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                  >> 2U)) << 2U)) | 
            ((2U & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                      ? (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0)) 
                         >> 1U) : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                                   >> 1U)) << 1U)) 
             | (1U & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                       ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                          | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h39b0aba9__0))
                       : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data_out 
        = ((((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8346d48b__0)
              : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                 >> 0x18U)) << 0x18U) | ((0xff0000U 
                                          & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                               ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbc226eea__0)
                                               : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                                  ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1fe9562c__0)
                                                  : 
                                                 (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data 
                                                  >> 8U)) 
                                                << 8U)) 
                                            | (0xffU 
                                               & ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h85e56ae3__0)
                                                   ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5f0c309__0)
                                                   : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m)) 
              | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                 >> 6U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)) 
              & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                  >> 6U) | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h8ee0916a__0) 
                            & ((~ ((~ ((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                                        ^ vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_m) 
                                       >> 2U)) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__addr_match_dw_lo_r_m))) 
                               | ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_mff__dout) 
                                  >> 6U))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6a0b589b__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 7U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 3U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h97f76bbc__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 6U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h900baa1a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 5U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h456537d4__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_lo) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 4U) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdc74b056__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp)) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd758139__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h77221d4e__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h383fe5c4__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h6a0b589b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc1945c92__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h46e15dcb__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h97f76bbc__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h7d43dcc3__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h1cda9961__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h900baa1a__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb33421e7__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9bd02636__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h456537d4__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 7U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 6U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_lo) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 4U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4473a500__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4456756d__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h447a7b06__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ab6fc9e__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4bd5eb94__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf8d0ad7a__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r)));
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in = 0U;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_samedw_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__no_dword_merge_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_r;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 4U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_rff__dout) 
                     >> 5U));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz_in;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                ? vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r
                : vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r);
        if (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
                           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r)));
        } else if (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r) {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr1_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h225fce16__0) 
                           >> 4U));
        } else {
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r;
            vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
                = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_r));
        }
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                  ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8346d48b__0)
                  : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                      ? (IData)((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                 >> 0x38U)) : (IData)(
                                                      (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                       >> 0x18U)))) 
                << 0x18U) | ((0xff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbc226eea__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                 ? (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x30U))
                                                 : (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x10U)))) 
                                           << 0x10U)) 
                             | ((0xff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1fe9562c__0)
                                              : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                  ? (IData)(
                                                            (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                             >> 0x28U))
                                                  : (IData)(
                                                            (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                             >> 8U)))) 
                                            << 8U)) 
                                | (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he5f0c309__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r)
                                                 ? (IData)(
                                                           (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbf77235f__0 
                                                            >> 0x20U))
                                                 : (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h01dc62ea__0)))))));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer_in 
            = (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer) 
                     + (7U > (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer))));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualtag;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dualff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dual;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedwff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_samedw;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomergeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_nomerge;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffectff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsignff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_unsign));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_writeff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_szff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sz;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addrff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tagff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag;
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteenff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (0xfU & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen));
        vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_dataff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data;
    }
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid) 
           & (((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbe90cb15__0)) 
               & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
                  | (7U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_timer)))) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_force_drain) 
                    | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_sideeffect) 
                       | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_write)) 
                          | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mfdc_int) 
                             >> 2U)))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6aeecd0__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha68d3d27__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha7c3cdf6__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h60f4c6f9__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid_ff__DOT__din_new 
        = ((~ (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en)) 
                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld)) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout))) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_wr_en) 
              | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h47a729b3__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h518a9297__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5076afb6__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h50523d1d__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_drain_vld) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byp) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0 
        = ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3e1ea4b6__0) 
           & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hed81d86f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h41cc99ea__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3ae99536__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h241aa5c8__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_heedbc364__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0661482c__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ebe85b0__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5eadc0__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h96689762__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hfd886501__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee4f928b__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h068c9849__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9ee2d23f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h916b753f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haba9c746__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6e5c7487__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hee53b1de__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0678aa16__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1bb20335__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h63f2cf69__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h3df5a57f__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd83f0c28__0 
        = (((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hd8e5b886__0) 
            & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_tag))) 
           | ((IData)(rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0cac23be__0) 
              & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_r))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__31(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__31\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                                             & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_corr_r 
                                                >> 1U)) 
                                            | (((- (IData)(
                                                           ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r)))) 
                                                & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__npwbc_ff__din) 
                                               | (((- (IData)(
                                                              ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r) 
                                                                  & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_r)) 
                                                                     & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_eval_r)))))) 
                                                   & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__i0_pc_r_ff__dout) 
                                                  | (((- (IData)(
                                                                 ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                                                  & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)))) 
                                                      & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                          ? 
                                                         (vlSelf->__PVT__nmi_vec 
                                                          >> 1U)
                                                          : 
                                                         ((1U 
                                                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)
                                                           ? 
                                                          ((0x7ffffffeU 
                                                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                           + 
                                                           ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__exc_cause_r) 
                                                            << 1U))
                                                           : 
                                                          (0x7ffffffeU 
                                                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)))) 
                                                     | ((0x7ffffffeU 
                                                         & ((- (IData)(
                                                                       ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h7f740290__0) 
                                                                        & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__interrupt_valid_r)) 
                                                                           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_ext_int)))))) 
                                                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mtvec)) 
                                                        | (((- (IData)(
                                                                       ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mret_r)))) 
                                                            & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout) 
                                                           | (((- (IData)(
                                                                          ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                               & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout) 
                                                              | ((- (IData)(
                                                                            ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                             & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__sel_npc_resume)))) 
                                                                 & vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__flush_lower_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_r)
            ? vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__flush_lower_ff__din
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__flush_lower_ff__dout);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__33(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__33\n"); );
    // Init
    CData/*0:0*/ rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0;
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 = 0;
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__shortq_enable 
        = ((vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
            >> 0x12U) & ((~ (IData)((0x20U == (0x60U 
                                               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))))) 
                         & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)) 
                            & (7U != ((0x40U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__dw_shortq_raw) 
                                                >> 2U)))))));
    rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0 
        = (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case)) 
            & (0x40000U == (0x48000U & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout))) 
           & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_result 
        = ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu_div_wren))) 
           & (((- (IData)((1U & ((~ (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                     >> 0xfU)) & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel)))))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__q_ff) 
              | (((- (IData)((1U & (vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout 
                                    >> 0xfU)))) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__r_ff)) 
                 | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_q_sel))) 
                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__twos_comp_out))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case 
        = (((0U == (vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff 
                    >> 4U)) & (IData)(((0ULL == (0xfffffff0ULL 
                                                 & vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__b_ff)) 
                                       & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)))) 
           | ((0U == vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__a_ff) 
              & (IData)(rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____VdfgTmp_had57bec7__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__finish 
        = ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__nonblock_div_cancel)) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__smallnum_case) 
              | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT__by_zero_case) 
                 | (0x20U == (0x7fU & vlSelf->rvtop__DOT__veer__DOT__exu__DOT__i_div__DOT__genblk5__DOT__i_new_4bit_div_fullshortq__DOT____Vcellout__i_misc_ff__dout)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__34(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__34\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_m) 
                     << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)) 
                    + ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_busreq_r) 
                       << (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_r))) 
                   + (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 3U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 6U)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any 
        = (0xfU & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any) 
                   + (0U != (7U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state) 
                                   >> 9U)))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__35(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__35\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__lsu_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_addr 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7e26ef7b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcbb382f1__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb953235f__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf9b2f2d9__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_addrff__dout 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hdbd155fe__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb03712be__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc32a80fd__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h95766e1f__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h10aa293b__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_lo_hi) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h66afabca__0) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_addr_ibuf_hit_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_byteen) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ad4241c__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha6b7be9a__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbd2361c1__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4d2574b7__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_haafdd501__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__0__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c0b6ff3__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7b26c913__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h70439ff4__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1cf97378__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h8d5f86e7__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__1__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fb63122__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0fd48eee__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6080a891__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h10251181__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4cb4113e__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__2__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf0068349__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
              & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                 >> 4U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcee62b87__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 3U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 7U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcfec33fa__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 2U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 6U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he92e42d0__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hb083426d__0) 
           & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____Vcellout__genblk10__BRA__3__KET____DOT__buf_byteenff__dout) 
               >> 1U) & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m) 
                         >> 5U)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he9e9cce1__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he8cd4dac__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h76ed152c__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9d1fc34d__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha2dee286__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hf0068349__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h2fb63122__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1c0b6ff3__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h5ad4241c__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h22122086__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcee62b87__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h0fd48eee__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h7b26c913__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_ha6b7be9a__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h9aa5935c__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hcfec33fa__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h6080a891__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h70439ff4__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_hbd2361c1__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1b1c48ed__0 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_he92e42d0__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h10251181__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h1cf97378__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT____VdfgTmp_h4d2574b7__0))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__36(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__36\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_m 
             >> 2U) == (vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____Vcellinp__bus_intf__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h26d7e278__0));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi 
        = (((vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_m 
             >> 2U) == (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__end_addr_r 
                        >> 2U)) & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h1b78fea5__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha6aeecd0__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x18U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6eec4f01__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x18U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x18U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h590987d5__0) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha68d3d27__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x10U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef6b86e__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x10U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                        >> 0x10U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h51b1f07f__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_ha7c3cdf6__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 8U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef2e82f__0))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                          >> 8U))) : 
                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m 
                     >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hcaf5dbfc__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m) 
                    >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h60f4c6f9__0))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                        | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h6ef15894__0))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))
                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_pre_m));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hf7cc370b__0) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_pre_m)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h84e39608__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 7U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9d076129__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 6U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ec2878b__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h99c9cf96__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ld_addr_rhit_hi_hi) 
           & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_r) 
               & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_m)) 
              >> 4U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 7U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 6U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 5U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__ld_addr_rhit_hi_hi) 
           & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__store_byteen_ext_r) 
              >> 4U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_lo_m 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h23166f29__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hb03712be__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h84e39608__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h559c6379__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_hc32a80fd__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9d076129__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_ha9bed822__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h95766e1f__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ec2878b__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h9ef67f38__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h10aa293b__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__bus_intf__DOT____VdfgTmp_h99c9cf96__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9be695fd__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9b3ac208__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a79f2d7__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h454cebc6__0) 
           | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9be695fd__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x18U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c243e3d__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x18U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                        >> 0x18U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9fea9d95__0) 
           | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
              >> 3U));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9b3ac208__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 0x10U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c41ab16__0))) 
                                          & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                             >> 0x10U)))
                     : (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                        >> 0x10U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h87874d7e__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    >> 2U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h9a79f2d7__0))) 
                         & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r 
                            >> 8U)) | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c4ddb57__0))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r 
                                          >> 8U))) : 
                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m 
                     >> 8U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_hfbdcbc64__0) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m) 
                    >> 1U)));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0 
        = (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0)
                     ? (((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h454cebc6__0))) 
                         & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_lo_r) 
                        | ((- (IData)((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h0c494bc0__0))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__store_data_hi_r))
                     : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_pre_m));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0 
        = (1U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT____VdfgTmp_h876fc827__0) 
                 | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_pre_m)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__stbuf_fwdbyteen_hi_m 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0) 
            << 3U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0) 
                       << 2U) | (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0) 
                                  << 1U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__39(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__39\n"); );
    // Init
    IData/*31:0*/ rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0;
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0 = 0;
    // Body
    rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0)
              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0)
              : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                  ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                     >> 0x18U) : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h42029437__0)))) 
            << 0x18U) | ((0xff0000U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0)
                                         ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0)
                                         : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                             ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                >> 0x10U)
                                             : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                & (IData)(
                                                          (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_lo__DOT__dout_plus_parity 
                                                           >> 0x15U))))) 
                                       << 0x10U)) | 
                         ((0xff00U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0)
                                        ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0)
                                        : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                            ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                               >> 8U)
                                            : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                               & (vlSelf->__VdfgTmp_hc27b1f86__0 
                                                  >> 8U)))) 
                                      << 8U)) | (0xffU 
                                                 & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0)
                                                     ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                      ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                      : 
                                                     ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h426ebbee__0))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_m 
        = (((QData)((IData)((0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0)
                                       ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0)
                                       : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                           ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                              >> 0x18U)
                                           : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                              & (IData)(
                                                        (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                         >> 0x18U)))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                 ? 
                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                 >> 0x10U)
                                                 : 
                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                            >> 0x10U)))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0)
                                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0)
                                                             : 
                                                            ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                              ? 
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                              >> 8U)
                                                              : 
                                                             ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi 
                                                                         >> 8U)))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0)
                                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                               ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                               : 
                                                              ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                               & (IData)(vlSelf->__PVT__rvtop__DOT__dccm_rd_data_hi))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eab4555__0)
                                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h078e46dd__0)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                               ? 
                                                              (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                               >> 0x18U)
                                                               : 
                                                              ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                          >> 0x18U))))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eaf1bc8__0)
                                                                    ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07d6026f__0)
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                     ? 
                                                                    (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                     >> 0x10U)
                                                                     : 
                                                                    ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                                >> 0x10U))))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1eeb667f__0)
                                                                       ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h07b52132__0)
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                        ? 
                                                                       (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                                        >> 8U)
                                                                        : 
                                                                       ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo 
                                                                                >> 8U))))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h1e103452__0)
                                                                        ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0712c5b0__0)
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                                         ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                                         : 
                                                                        ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                                         & (IData)(vlSelf->__PVT__rvtop__DOT__dccm_rd_data_lo))))))))))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m 
        = (((QData)((IData)((0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e280cd2__0)
                                       ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e2c9178__0)
                                       : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                           ? (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                              >> 0x18U)
                                           : ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h457ec2fe__0))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3e2cdd47__0)
                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e74faf0__0)
                                             : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                 ? 
                                                (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                 >> 0x10U)
                                                 : 
                                                ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                 & (IData)(
                                                           (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ecc__DOT__Gen_dccm_enable__DOT__lsu_ecc_decode_hi__DOT__dout_plus_parity 
                                                            >> 0x15U)))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h3997adf8__0)
                                                             ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e5b19af__0)
                                                             : 
                                                            ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                              ? 
                                                             (vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m 
                                                              >> 8U)
                                                              : 
                                                             ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                              & (vlSelf->__VdfgTmp_h9d576958__0 
                                                                 >> 8U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h39937ded__0)
                                                              ? (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h09bcbe2b__0)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_pic_m)
                                                               ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__picm_mask_data_m
                                                               : 
                                                              ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__addr_in_dccm_m))) 
                                                               & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h44c149d5__0))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0))))));
    vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_ld_data_corr_rff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h0e8859bc__0) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__lsu__DOT____VdfgTmp_h14c3c9ec__0)) 
                  | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mcgc_int) 
                     >> 4U))) ? (IData)(VL_SHIFTR_QQI(64,64,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m, 
                                                      VL_SHIFTL_III(32,32,32, 
                                                                    (3U 
                                                                     & vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_addr_m), 3U)))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__lsu_ld_data_corr_r);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__ldst_dual_m)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT__L2U_Plus1_0__DOT__lsu_rdata_corr_m
            : (((QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0)) 
                << 0x20U) | (QData)((IData)(rvtop__DOT__veer__DOT__lsu__DOT__dccm_ctl__DOT____VdfgTmp_h50ba0797__0))));
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hd44f9efe__0) 
                & (0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h47ed7c3b__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__0__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h95bfde1c__0)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h63b65840__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hd44f9efe__0) 
                & (1U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h7cd3c816__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__1__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h95b83ecf__0)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h63b25803__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hd44f9efe__0) 
                & (2U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h83db2dd2__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__2__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h95a43222__0)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h638e47da__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hd44f9efe__0) 
                & (3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h01288230__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__3__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h9f842f9a__0)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h7dea8dd6__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
    vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT__GenFifo__BRA__4__KET____DOT__fifo_data_dff__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hca5efe11__0) 
             & (4U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__WrPtr))) 
            | (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hd44f9efe__0) 
                & (4U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RdPtr))) 
               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_haade4e8f__0)))
            ? (((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__4__KET____DOT__fifo_error_dff__en) 
                & (0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellinp__GenFifo__BRA__4__KET____DOT__fifo_error_dff__din)))
                ? (QData)((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_addr_dff__dout))
                : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_h4122b60e__0)
                    ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dccm_dma_rdata
                    : ((IData)(vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_ha40bcf1e__0)
                        ? vlSelf->__PVT__rvtop__DOT__veer__DOT__iccm_dma_rdata
                        : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____VdfgTmp_hab3377e0__0)))
            : vlSelf->rvtop__DOT__veer__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__4__KET____DOT__fifo_data_dff__dout);
}
