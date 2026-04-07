// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vveerwolf_core_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vveerwolf_core_tb::Vveerwolf_core_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vveerwolf_core_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , i_jtag_tck{vlSymsp->TOP.i_jtag_tck}
    , i_jtag_trst_n{vlSymsp->TOP.i_jtag_trst_n}
    , rst{vlSymsp->TOP.rst}
    , i_jtag_tms{vlSymsp->TOP.i_jtag_tms}
    , i_jtag_tdi{vlSymsp->TOP.i_jtag_tdi}
    , o_jtag_tdo{vlSymsp->TOP.o_jtag_tdo}
    , o_uart_tx{vlSymsp->TOP.o_uart_tx}
    , o_gpio{vlSymsp->TOP.o_gpio}
    , i_gpio{vlSymsp->TOP.i_gpio}
    , veerwolf_core_tb{vlSymsp->TOP.veerwolf_core_tb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vveerwolf_core_tb::Vveerwolf_core_tb(const char* _vcname__)
    : Vveerwolf_core_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vveerwolf_core_tb::~Vveerwolf_core_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vveerwolf_core_tb___024root___eval_debug_assertions(Vveerwolf_core_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vveerwolf_core_tb___024root___eval_static(Vveerwolf_core_tb___024root* vlSelf);
void Vveerwolf_core_tb___024root___eval_initial(Vveerwolf_core_tb___024root* vlSelf);
void Vveerwolf_core_tb___024root___eval_settle(Vveerwolf_core_tb___024root* vlSelf);
void Vveerwolf_core_tb___024root___eval(Vveerwolf_core_tb___024root* vlSelf);

void Vveerwolf_core_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vveerwolf_core_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vveerwolf_core_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vveerwolf_core_tb___024root___eval_static(&(vlSymsp->TOP));
        Vveerwolf_core_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vveerwolf_core_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vveerwolf_core_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vveerwolf_core_tb::eventsPending() { return false; }

uint64_t Vveerwolf_core_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vveerwolf_core_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vveerwolf_core_tb___024root___eval_final(Vveerwolf_core_tb___024root* vlSelf);

VL_ATTR_COLD void Vveerwolf_core_tb::final() {
    Vveerwolf_core_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vveerwolf_core_tb::hierName() const { return vlSymsp->name(); }
const char* Vveerwolf_core_tb::modelName() const { return "Vveerwolf_core_tb"; }
unsigned Vveerwolf_core_tb::threads() const { return 1; }
void Vveerwolf_core_tb::prepareClone() const { contextp()->prepareClone(); }
void Vveerwolf_core_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vveerwolf_core_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vveerwolf_core_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vveerwolf_core_tb___024root__trace_init_top(Vveerwolf_core_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vveerwolf_core_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vveerwolf_core_tb___024root*>(voidSelf);
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vveerwolf_core_tb___024root__trace_decl_types(tracep);
    Vveerwolf_core_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vveerwolf_core_tb___024root__trace_register(Vveerwolf_core_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vveerwolf_core_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vveerwolf_core_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vveerwolf_core_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
