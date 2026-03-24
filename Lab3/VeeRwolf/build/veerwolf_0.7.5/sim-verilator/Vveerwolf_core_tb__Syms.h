// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VVEERWOLF_CORE_TB__SYMS_H_
#define VERILATED_VVEERWOLF_CORE_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vveerwolf_core_tb.h"

// INCLUDE MODULE CLASSES
#include "Vveerwolf_core_tb___024root.h"
#include "Vveerwolf_core_tb_veerwolf_core_tb.h"
#include "Vveerwolf_core_tb___024unit.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"
#include "Vveerwolf_core_tb_wb_mem_wrapper__M1000.h"
#include "Vveerwolf_core_tb_dpram64__S1000.h"
#include "Vveerwolf_core_tb_axi_demux__pi2.h"
#include "Vveerwolf_core_tb_axi_mux__pi4.h"
#include "Vveerwolf_core_tb_axi_demux_id_counters__pi5.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vveerwolf_core_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vveerwolf_core_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vveerwolf_core_tb___024root    TOP;
    Vveerwolf_core_tb_veerwolf_core_tb TOP__veerwolf_core_tb;
    Vveerwolf_core_tb_veerwolf_core__C2faf080 TOP__veerwolf_core_tb__veerwolf;
    Vveerwolf_core_tb_axi_mux__pi4 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux;
    Vveerwolf_core_tb_axi_mux__pi4 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux;
    Vveerwolf_core_tb_axi_demux__pi2 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vveerwolf_core_tb_axi_demux__pi2 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vveerwolf_core_tb_axi_demux__pi2 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_ar_id_counter;
    Vveerwolf_core_tb_axi_demux_id_counters__pi5 TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux__gen_demux__DOT__i_aw_id_counter;
    Vveerwolf_core_tb_wb_mem_wrapper__M1000 TOP__veerwolf_core_tb__veerwolf__bootrom;
    Vveerwolf_core_tb_dpram64__S1000 TOP__veerwolf_core_tb__veerwolf__bootrom__ram;

    // SCOPE NAMES
    VerilatedScope __Vscope_veerwolf_core_tb__veerwolf__bootrom__ram;

    // CONSTRUCTORS
    Vveerwolf_core_tb__Syms(VerilatedContext* contextp, const char* namep, Vveerwolf_core_tb* modelp);
    ~Vveerwolf_core_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
