// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"
#include "Vveerwolf_core_tb_axi_demux_id_counters__pi5.h"

VL_ATTR_COLD void Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1(Vveerwolf_core_tb_axi_demux__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vveerwolf_core_tb_axi_demux__pi2___stl_sequent__TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__1\n"); );
    // Body
    vlSelf->__PVT__gen_demux__DOT__aw_push = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q)))) {
        if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
              & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
             & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
            if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
                 & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                    | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                       == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
                vlSelf->__PVT__gen_demux__DOT__aw_push = 1U;
            }
        }
    }
    vlSelf->__PVT__gen_demux__DOT__aw_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_aw_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
    } else if ((((~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__cnt_full)))) 
                 & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q))) 
                & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_aw_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_aw_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__aw_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__ar_valid = 0U;
    if (vlSelf->__PVT__gen_demux__DOT__lock_ar_valid_q) {
        vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__cnt_full)))))) {
        if (((IData)(vlSelf->__PVT__gen_demux__DOT__slv_ar_valid) 
             & ((~ (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_occupied_o)) 
                | ((3U & vlSelf->__Vcellout__gen_demux__DOT__i_ar_spill_reg__data_o[0U]) 
                   == (IData)(vlSelf->__PVT__gen_demux__DOT__i_ar_id_counter->__PVT__lookup_mst_select_o))))) {
            vlSelf->__PVT__gen_demux__DOT__ar_valid = 1U;
        }
    }
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q;
    vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
        = vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(vlSelf->__PVT__gen_demux__DOT__aw_push) 
         & (0xaU != (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__gate_clock = 0U;
        vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((9U == (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q))));
        vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h0b1b40bc__0 
            = (3U & vlSelf->__Vcellout__gen_demux__DOT__i_aw_spill_reg__data_o[0U]);
        if ((0x13U >= (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) {
            vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))) 
                    & vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__mem_n) 
                   | (0xfffffU & ((IData)(vlSelf->gen_demux__DOT__i_w_fifo__DOT____Vlvbound_h0b1b40bc__0) 
                                  << (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelf->__PVT__gen_demux__DOT__i_w_fifo__DOT__write_pointer_q), 1U)))));
        }
    }
}
