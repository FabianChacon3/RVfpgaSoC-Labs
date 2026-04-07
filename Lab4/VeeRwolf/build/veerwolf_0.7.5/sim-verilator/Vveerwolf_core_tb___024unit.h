// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vveerwolf_core_tb.h for the primary calling header

#ifndef VERILATED_VVEERWOLF_CORE_TB___024UNIT_H_
#define VERILATED_VVEERWOLF_CORE_TB___024UNIT_H_  // guard

#include "verilated.h"


class Vveerwolf_core_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vveerwolf_core_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vveerwolf_core_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vveerwolf_core_tb___024unit(Vveerwolf_core_tb__Syms* symsp, const char* v__name);
    ~Vveerwolf_core_tb___024unit();
    VL_UNCOPYABLE(Vveerwolf_core_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
