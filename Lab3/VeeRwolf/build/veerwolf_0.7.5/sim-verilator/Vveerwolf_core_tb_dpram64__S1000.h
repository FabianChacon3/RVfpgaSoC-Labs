// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vveerwolf_core_tb.h for the primary calling header

#ifndef VERILATED_VVEERWOLF_CORE_TB_DPRAM64__S1000_H_
#define VERILATED_VVEERWOLF_CORE_TB_DPRAM64__S1000_H_  // guard

#include "verilated.h"


class Vveerwolf_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vveerwolf_core_tb_dpram64__S1000 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__we,7,0);
    VL_IN16(__PVT__waddr,11,0);
    VL_IN16(__PVT__raddr,11,0);
    IData/*31:0*/ __PVT__i;
    VL_IN64(__PVT__din,63,0);
    VL_OUT64(__PVT__dout,63,0);
    VlUnpacked<QData/*63:0*/, 512> mem;

    // INTERNAL VARIABLES
    Vveerwolf_core_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vveerwolf_core_tb_dpram64__S1000(Vveerwolf_core_tb__Syms* symsp, const char* v__name);
    ~Vveerwolf_core_tb_dpram64__S1000();
    VL_UNCOPYABLE(Vveerwolf_core_tb_dpram64__S1000);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
