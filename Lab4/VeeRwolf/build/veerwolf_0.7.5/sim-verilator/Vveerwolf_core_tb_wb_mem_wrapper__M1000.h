// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vveerwolf_core_tb.h for the primary calling header

#ifndef VERILATED_VVEERWOLF_CORE_TB_WB_MEM_WRAPPER__M1000_H_
#define VERILATED_VVEERWOLF_CORE_TB_WB_MEM_WRAPPER__M1000_H_  // guard

#include "verilated.h"
class Vveerwolf_core_tb_dpram64__S1000;


class Vveerwolf_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vveerwolf_core_tb_wb_mem_wrapper__M1000 final : public VerilatedModule {
  public:
    // CELLS
    Vveerwolf_core_tb_dpram64__S1000* ram;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst,0,0);
    VL_IN8(__PVT__i_wb_sel,3,0);
    VL_IN8(__PVT__i_wb_we,0,0);
    VL_IN8(__PVT__i_wb_cyc,0,0);
    VL_IN8(__PVT__i_wb_stb,0,0);
    VL_OUT8(__PVT__o_wb_ack,0,0);
    CData/*0:0*/ __VdfgTmp_h4716a6a3__0;
    VL_IN16(__PVT__i_wb_adr,11,2);
    VL_IN(__PVT__i_wb_dat,31,0);
    VL_OUT(__PVT__o_wb_rdt,31,0);
    IData/*31:0*/ __PVT__mem_addr;

    // INTERNAL VARIABLES
    Vveerwolf_core_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vveerwolf_core_tb_wb_mem_wrapper__M1000(Vveerwolf_core_tb__Syms* symsp, const char* v__name);
    ~Vveerwolf_core_tb_wb_mem_wrapper__M1000();
    VL_UNCOPYABLE(Vveerwolf_core_tb_wb_mem_wrapper__M1000);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
