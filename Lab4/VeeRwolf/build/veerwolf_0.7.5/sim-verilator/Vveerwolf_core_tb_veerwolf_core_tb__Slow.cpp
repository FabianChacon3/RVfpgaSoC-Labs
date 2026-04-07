// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"

void Vveerwolf_core_tb_veerwolf_core_tb___ctor_var_reset(Vveerwolf_core_tb_veerwolf_core_tb* vlSelf);

Vveerwolf_core_tb_veerwolf_core_tb::Vveerwolf_core_tb_veerwolf_core_tb(Vveerwolf_core_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vveerwolf_core_tb_veerwolf_core_tb___ctor_var_reset(this);
}

void Vveerwolf_core_tb_veerwolf_core_tb::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vveerwolf_core_tb_veerwolf_core_tb::~Vveerwolf_core_tb_veerwolf_core_tb() {
}
