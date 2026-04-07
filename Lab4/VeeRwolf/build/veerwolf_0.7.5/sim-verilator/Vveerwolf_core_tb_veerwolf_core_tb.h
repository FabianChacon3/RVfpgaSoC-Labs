// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vveerwolf_core_tb.h for the primary calling header

#ifndef VERILATED_VVEERWOLF_CORE_TB_VEERWOLF_CORE_TB_H_
#define VERILATED_VVEERWOLF_CORE_TB_VEERWOLF_CORE_TB_H_  // guard

#include "verilated.h"
class Vveerwolf_core_tb_veerwolf_core__C2faf080;


class Vveerwolf_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vveerwolf_core_tb_veerwolf_core_tb final : public VerilatedModule {
  public:
    // CELLS
    Vveerwolf_core_tb_veerwolf_core__C2faf080* veerwolf;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(i_jtag_tck,0,0);
        VL_IN8(i_jtag_trst_n,0,0);
        CData/*0:0*/ __Vcellinp__dmi_wrapper__core_rst_n;
        VL_IN8(rst,0,0);
        VL_IN8(i_jtag_tms,0,0);
        VL_IN8(i_jtag_tdi,0,0);
        VL_OUT8(o_jtag_tdo,0,0);
        VL_OUT8(o_uart_tx,0,0);
        CData/*0:0*/ __PVT__dmi_reg_en;
        CData/*0:0*/ __PVT__dmi_hard_reset;
        CData/*0:0*/ __PVT__ram__DOT__read_state_reg;
        CData/*0:0*/ __PVT__ram__DOT__read_state_next;
        CData/*1:0*/ __PVT__ram__DOT__write_state_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_state_next;
        CData/*0:0*/ __PVT__ram__DOT__mem_wr_en;
        CData/*0:0*/ __PVT__ram__DOT__mem_rd_en;
        CData/*5:0*/ __PVT__ram__DOT__read_id_reg;
        CData/*5:0*/ __PVT__ram__DOT__read_id_next;
        CData/*7:0*/ __PVT__ram__DOT__read_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__read_count_next;
        CData/*2:0*/ __PVT__ram__DOT__read_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__read_size_next;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__read_burst_next;
        CData/*5:0*/ __PVT__ram__DOT__write_id_reg;
        CData/*5:0*/ __PVT__ram__DOT__write_id_next;
        CData/*7:0*/ __PVT__ram__DOT__write_count_reg;
        CData/*7:0*/ __PVT__ram__DOT__write_count_next;
        CData/*2:0*/ __PVT__ram__DOT__write_size_reg;
        CData/*2:0*/ __PVT__ram__DOT__write_size_next;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_reg;
        CData/*1:0*/ __PVT__ram__DOT__write_burst_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_awready_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_wready_next;
        CData/*5:0*/ __PVT__ram__DOT__s_axi_bid_reg;
        CData/*5:0*/ __PVT__ram__DOT__s_axi_bid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_bvalid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_arready_next;
        CData/*5:0*/ __PVT__ram__DOT__s_axi_rid_reg;
        CData/*5:0*/ __PVT__ram__DOT__s_axi_rid_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_next;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_next;
        CData/*5:0*/ __PVT__ram__DOT__s_axi_rid_pipe_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rlast_pipe_reg;
        CData/*0:0*/ __PVT__ram__DOT__s_axi_rvalid_pipe_reg;
        CData/*0:0*/ __PVT__dmi_wrapper__DOT__dmireset;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__state;
        CData/*3:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nstate;
        CData/*4:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__ir;
        CData/*1:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr_en;
        CData/*0:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__rden;
        CData/*2:0*/ __PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__wren;
        VL_OUT16(o_gpio,15,0);
        VL_IN(i_gpio,31,0);
        VlWide<32>/*1023:0*/ __PVT__ram_init_file;
        VlWide<32>/*1023:0*/ __PVT__rom_init_file;
    };
    struct {
        IData/*19:0*/ __PVT__ram__DOT__read_addr_reg;
        IData/*19:0*/ __PVT__ram__DOT__read_addr_next;
        IData/*19:0*/ __PVT__ram__DOT__write_addr_reg;
        IData/*19:0*/ __PVT__ram__DOT__write_addr_next;
        IData/*31:0*/ __PVT__ram__DOT__i;
        IData/*31:0*/ __PVT__ram__DOT__j;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_reg;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_next;
        QData/*63:0*/ __PVT__ram__DOT__s_axi_rdata_pipe_reg;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__sr;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__nsr;
        QData/*40:0*/ __PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
        QData/*40:0*/ __Vdly__dmi_wrapper__DOT__i_jtag_tap__DOT__dr;
        VlUnpacked<QData/*63:0*/, 131072> __PVT__ram__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vveerwolf_core_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vveerwolf_core_tb_veerwolf_core_tb(Vveerwolf_core_tb__Syms* symsp, const char* v__name);
    ~Vveerwolf_core_tb_veerwolf_core_tb();
    VL_UNCOPYABLE(Vveerwolf_core_tb_veerwolf_core_tb);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
