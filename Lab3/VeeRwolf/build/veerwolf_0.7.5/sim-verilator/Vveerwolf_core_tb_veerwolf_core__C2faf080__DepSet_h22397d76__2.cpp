// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vveerwolf_core_tb.h for the primary calling header

#include "Vveerwolf_core_tb__pch.h"
#include "Vveerwolf_core_tb__Syms.h"
#include "Vveerwolf_core_tb_veerwolf_core__C2faf080.h"

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__8(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__8\n"); );
    // Init
    QData/*63:0*/ __Vdly__syscon__DOT__mtime;
    __Vdly__syscon__DOT__mtime = 0;
    // Body
    if ((1U & ((~ ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                   >> 6U)) | (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n))))) {
        vlSelf->__Vdly__spi__DOT__state = 0U;
        vlSelf->__Vdly__spi__DOT__bcnt = 0U;
        vlSelf->__Vdly__spi__DOT__treg = 0U;
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        vlSelf->__Vdly__o_flash_sclk = 0U;
    } else {
        vlSelf->__Vdly__spi__DOT__wfre = 0U;
        vlSelf->__PVT__spi__DOT__rfwe = 0U;
        if ((2U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
                if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                    vlSelf->__Vdly__spi__DOT__treg 
                        = (0xfeU & ((IData)(vlSelf->__PVT__spi__DOT__treg) 
                                    << 1U));
                    vlSelf->__Vdly__spi__DOT__bcnt 
                        = (7U & ((IData)(vlSelf->__PVT__spi__DOT__bcnt) 
                                 - (IData)(1U)));
                    if ((0U != (IData)(vlSelf->__PVT__spi__DOT__bcnt))) {
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                        vlSelf->__Vdly__spi__DOT__state = 1U;
                    } else {
                        vlSelf->__Vdly__spi__DOT__state = 0U;
                        vlSelf->__Vdly__o_flash_sclk 
                            = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                     >> 3U));
                        vlSelf->__PVT__spi__DOT__rfwe = 1U;
                    }
                }
            } else {
                vlSelf->__Vdly__spi__DOT__state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__spi__DOT__state))) {
            if ((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__spi__DOT__clkcnt)))))) {
                vlSelf->__Vdly__o_flash_sclk = (1U 
                                                & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                vlSelf->__Vdly__spi__DOT__state = 3U;
            }
        } else {
            vlSelf->__Vdly__o_flash_sclk = (1U & ((IData)(vlSelf->__PVT__spi__DOT__spcr) 
                                                  >> 3U));
            vlSelf->__Vdly__spi__DOT__bcnt = 7U;
            vlSelf->__Vdly__spi__DOT__treg = vlSelf->__PVT__spi__DOT__wfifo__DOT__mem
                [vlSelf->__PVT__spi__DOT__wfifo__DOT__rp];
            if ((1U & (~ (IData)(vlSelf->__PVT__spi__DOT__wfempty)))) {
                if ((4U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
                    vlSelf->__Vdly__o_flash_sclk = 
                        (1U & (~ (IData)(vlSelf->__PVT__o_flash_sclk)));
                }
                vlSelf->__Vdly__spi__DOT__wfre = 1U;
                vlSelf->__Vdly__spi__DOT__state = 1U;
            }
        }
    }
    vlSelf->__PVT__syscon__DOT__nmi_int_r = vlSelf->__PVT__syscon__DOT__nmi_int;
    vlSelf->__PVT__spi__DOT__bcnt = vlSelf->__Vdly__spi__DOT__bcnt;
    vlSelf->__PVT__o_flash_sclk = vlSelf->__Vdly__o_flash_sclk;
    vlSelf->__PVT__spi__DOT__state = vlSelf->__Vdly__spi__DOT__state;
    vlSelf->__PVT__spi__DOT__clkcnt = vlSelf->__Vdly__spi__DOT__clkcnt;
    vlSelf->__PVT__spi__DOT__treg = vlSelf->__Vdly__spi__DOT__treg;
    if (vlSelf->__Vdlyvset__spi__DOT__wfifo__DOT__mem__v0) {
        vlSelf->__PVT__spi__DOT__wfifo__DOT__mem[vlSelf->__Vdlyvdim0__spi__DOT__wfifo__DOT__mem__v0] 
            = vlSelf->__Vdlyvval__spi__DOT__wfifo__DOT__mem__v0;
    }
    if (vlSelf->__PVT__syscon__DOT__sw_irq3_edge) {
        vlSelf->__Vdly__syscon__DOT__sw_irq3 = 0U;
    }
    if (vlSelf->__PVT__syscon__DOT__sw_irq4_edge) {
        vlSelf->__Vdly__syscon__DOT__sw_irq4 = 0U;
    }
    if (vlSelf->__PVT__syscon__DOT__irq_timer_en) {
        vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
            = (vlSelf->__PVT__syscon__DOT__irq_timer_cnt 
               - (IData)(1U));
    }
    vlSelf->__PVT__syscon__DOT__nmi_int = 0U;
    if ((1U == vlSelf->__PVT__syscon__DOT__irq_timer_cnt)) {
        vlSelf->__Vdly__syscon__DOT__irq_timer_en = 0U;
        if (vlSelf->__PVT__syscon__DOT__sw_irq3_timer) {
            vlSelf->__Vdly__syscon__DOT__sw_irq3 = 1U;
        }
        if (vlSelf->__PVT__syscon__DOT__sw_irq4_timer) {
            vlSelf->__Vdly__syscon__DOT__sw_irq4 = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                      | (IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer))))) {
            vlSelf->__PVT__syscon__DOT__nmi_int = 1U;
        }
    }
    if ((((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
          >> 2U) & ((IData)(vlSelf->__PVT__wb_io_stb) 
                    & ((~ (IData)(vlSelf->__PVT__wb_sys_ack)) 
                       & (IData)(vlSelf->__PVT__wb_io_we))))) {
        if (((((((((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
                   | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                  | (4U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                 | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
                | (0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
               | (0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
            if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if (VL_UNLIKELY((1U & (IData)(vlSelf->__PVT__wb_io_sel)))) {
                    if (VL_UNLIKELY((0U != vlSelf->__PVT__syscon__DOT__f))) {
                        VL_FWRITEF(vlSelf->__PVT__syscon__DOT__f,"%c",
                                   8,(0xffU & vlSelf->__PVT__wb_io_dat));
                    }
                    VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__wb_io_dat));
                }
                if (VL_UNLIKELY((2U & (IData)(vlSelf->__PVT__wb_io_sel)))) {
                    VL_WRITEF("\nFinito\n");
                    VL_FINISH_MT("src/veerwolf_0.7.5/rtl/veerwolf_syscon.v", 154, "");
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__sw_irq4 
                        = (vlSelf->__PVT__wb_io_dat 
                           >> 0x1fU);
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_edge 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x1eU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_pol 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x1dU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq4_timer 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x1cU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x1bU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_edge 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x1aU));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_pol 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x19U));
                    vlSelf->__Vdly__syscon__DOT__sw_irq3_timer 
                        = (1U & (vlSelf->__PVT__wb_io_dat 
                                 >> 0x18U));
                }
            } else if ((3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffffff00U 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xffU 
                                                  & vlSelf->__PVT__wb_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffff00ffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff00U 
                                                  & vlSelf->__PVT__wb_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xff00ffffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff0000U 
                                                  & vlSelf->__PVT__wb_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__nmi_vec = ((0xffffffU 
                                                & vlSelf->__Vdly__nmi_vec) 
                                               | (0xff000000U 
                                                  & vlSelf->__PVT__wb_io_dat));
                }
            } else if ((4U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffffffffffff00ULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | (IData)((IData)(
                                                               (0xffU 
                                                                & vlSelf->__PVT__wb_io_dat))));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffffffffff00ffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__wb_io_dat 
                                                                    >> 8U)))) 
                                                << 8U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffffffff00ffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__wb_io_dat 
                                                                    >> 0x10U)))) 
                                                << 0x10U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffffff00ffffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (vlSelf->__PVT__wb_io_dat 
                                                                 >> 0x18U))) 
                                                << 0x18U));
                }
            } else if ((6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffff00ffffffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (0xffU 
                                                                 & vlSelf->__PVT__wb_io_dat))) 
                                                << 0x20U));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffff00ffffffffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__wb_io_dat 
                                                                    >> 8U)))) 
                                                << 0x28U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xff00ffffffffffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (0xffU 
                                                                 & (vlSelf->__PVT__wb_io_dat 
                                                                    >> 0x10U)))) 
                                                << 0x30U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__PVT__o_gpio = ((0xffffffffffffffULL 
                                              & vlSelf->__PVT__o_gpio) 
                                             | ((QData)((IData)(
                                                                (vlSelf->__PVT__wb_io_dat 
                                                                 >> 0x18U))) 
                                                << 0x38U));
                }
            } else if ((0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffff00ULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | (IData)((IData)((0xffU 
                                              & vlSelf->__PVT__wb_io_dat))));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffff00ffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_io_dat 
                                                  >> 8U)))) 
                              << 8U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffff00ffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_io_dat 
                                                  >> 0x10U)))) 
                              << 0x10U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffff00ffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelf->__PVT__wb_io_dat 
                                               >> 0x18U))) 
                              << 0x18U));
                }
            } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffff00ffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & vlSelf->__PVT__wb_io_dat))) 
                              << 0x20U));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffff00ffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_io_dat 
                                                  >> 8U)))) 
                              << 0x28U));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xff00ffffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((0xffU 
                                               & (vlSelf->__PVT__wb_io_dat 
                                                  >> 0x10U)))) 
                              << 0x30U));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__mtimecmp 
                        = ((0xffffffffffffffULL & vlSelf->__Vdly__syscon__DOT__mtimecmp) 
                           | ((QData)((IData)((vlSelf->__PVT__wb_io_dat 
                                               >> 0x18U))) 
                              << 0x38U));
                }
            } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
                if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffff00U & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xffU & vlSelf->__PVT__wb_io_dat));
                }
                if ((2U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffff00ffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff00U & vlSelf->__PVT__wb_io_dat));
                }
                if ((4U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xff00ffffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff0000U & vlSelf->__PVT__wb_io_dat));
                }
                if ((8U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                    vlSelf->__Vdly__syscon__DOT__irq_timer_cnt 
                        = ((0xffffffU & vlSelf->__Vdly__syscon__DOT__irq_timer_cnt) 
                           | (0xff000000U & vlSelf->__PVT__wb_io_dat));
                }
            } else if ((1U & (IData)(vlSelf->__PVT__wb_io_sel))) {
                vlSelf->__Vdly__syscon__DOT__irq_timer_en 
                    = (1U & vlSelf->__PVT__wb_io_dat);
            }
        }
    }
    if (((((((((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))) 
               | (1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
              | (2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
             | (3U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
            | (4U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
           | (6U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
          | (8U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) 
         | (9U == (0xfU & (IData)(vlSelf->__PVT__wb_adr))))) {
        if ((0U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_sys_rdt = 0xd000705U;
        } else if ((1U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_sys_rdt = 0x9a919805U;
        } else if ((2U == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
            vlSelf->__PVT__wb_sys_rdt = ((0xfffffffU 
                                          & vlSelf->__PVT__wb_sys_rdt) 
                                         | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4) 
                                             << 0x1fU) 
                                            | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_edge) 
                                                << 0x1eU) 
                                               | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_pol) 
                                                   << 0x1dU) 
                                                  | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_timer) 
                                                     << 0x1cU)))));
            vlSelf->__PVT__wb_sys_rdt = ((0xf0ffffffU 
                                          & vlSelf->__PVT__wb_sys_rdt) 
                                         | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3) 
                                             << 0x1bU) 
                                            | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_edge) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_pol) 
                                                   << 0x19U) 
                                                  | ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_timer) 
                                                     << 0x18U)))));
            vlSelf->__PVT__wb_sys_rdt = (0x10000U | 
                                         (0xff000000U 
                                          & vlSelf->__PVT__wb_sys_rdt));
        } else {
            vlSelf->__PVT__wb_sys_rdt = ((3U == (0xfU 
                                                 & (IData)(vlSelf->__PVT__wb_adr)))
                                          ? vlSelf->__PVT__nmi_vec
                                          : ((4U == 
                                              (0xfU 
                                               & (IData)(vlSelf->__PVT__wb_adr)))
                                              ? vlSymsp->TOP.i_gpio
                                              : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelf->__PVT__wb_adr)))
                                                  ? (IData)(
                                                            ((QData)((IData)(vlSymsp->TOP.i_gpio)) 
                                                             >> 0x20U))
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__wb_adr)))
                                                   ? (IData)(vlSelf->__PVT__syscon__DOT__mtime)
                                                   : (IData)(
                                                             (vlSelf->__PVT__syscon__DOT__mtime 
                                                              >> 0x20U))))));
        }
    } else if ((0xaU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_sys_rdt = (IData)(vlSelf->__PVT__syscon__DOT__mtimecmp);
    } else if ((0xbU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_sys_rdt = (IData)((vlSelf->__PVT__syscon__DOT__mtimecmp 
                                             >> 0x20U));
    } else if ((0xcU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_sys_rdt = vlSelf->__PVT__syscon__DOT__irq_timer_cnt;
    } else if ((0xdU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_sys_rdt = vlSelf->__PVT__syscon__DOT__irq_timer_en;
    } else if ((0xfU == (0xfU & (IData)(vlSelf->__PVT__wb_adr)))) {
        vlSelf->__PVT__wb_sys_rdt = 0x2faf080U;
    }
    __Vdly__syscon__DOT__mtime = (1ULL + vlSelf->__PVT__syscon__DOT__mtime);
    vlSelf->__PVT__timer_irq = (vlSelf->__PVT__syscon__DOT__mtime 
                                >= vlSelf->__PVT__syscon__DOT__mtimecmp);
    if ((1U & (~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n)))) {
        __Vdly__syscon__DOT__mtime = 0ULL;
        vlSelf->__Vdly__syscon__DOT__mtimecmp = 0ULL;
    }
    vlSelf->__PVT__syscon__DOT__irq_timer_cnt = vlSelf->__Vdly__syscon__DOT__irq_timer_cnt;
    vlSelf->__PVT__syscon__DOT__irq_timer_en = vlSelf->__Vdly__syscon__DOT__irq_timer_en;
    vlSelf->__PVT__syscon__DOT__sw_irq4_edge = vlSelf->__Vdly__syscon__DOT__sw_irq4_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq4_timer = vlSelf->__Vdly__syscon__DOT__sw_irq4_timer;
    vlSelf->__PVT__syscon__DOT__sw_irq3_edge = vlSelf->__Vdly__syscon__DOT__sw_irq3_edge;
    vlSelf->__PVT__syscon__DOT__sw_irq3_timer = vlSelf->__Vdly__syscon__DOT__sw_irq3_timer;
    vlSelf->__PVT__syscon__DOT__mtimecmp = vlSelf->__Vdly__syscon__DOT__mtimecmp;
    vlSelf->__PVT__syscon__DOT__mtime = __Vdly__syscon__DOT__mtime;
    vlSelf->__PVT__wb_sys_ack = vlSelf->__Vdly__wb_sys_ack;
    vlSelf->__PVT__syscon__DOT__sw_irq3 = vlSelf->__Vdly__syscon__DOT__sw_irq3;
    vlSelf->__PVT__syscon__DOT__sw_irq4 = vlSelf->__Vdly__syscon__DOT__sw_irq4;
    vlSelf->__PVT__syscon__DOT__sw_irq4_pol = vlSelf->__Vdly__syscon__DOT__sw_irq4_pol;
    vlSelf->__PVT__syscon__DOT__sw_irq3_pol = vlSelf->__Vdly__syscon__DOT__sw_irq3_pol;
    vlSelf->__PVT__nmi_vec = vlSelf->__Vdly__nmi_vec;
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellinp__IO_CLK_GRP__BRA__1__KET____DOT__GW__BRA__0__KET____DOT__gw_inst__extintsrc_req 
        = ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq4) 
           ^ (IData)(vlSelf->__PVT__syscon__DOT__sw_irq4_pol));
    vlSelf->rvtop__DOT__veer__DOT__pic_ctrl_inst__DOT____Vcellinp__IO_CLK_GRP__BRA__0__KET____DOT__GW__BRA__3__KET____DOT__gw_inst__extintsrc_req 
        = ((IData)(vlSelf->__PVT__syscon__DOT__sw_irq3) 
           ^ (IData)(vlSelf->__PVT__syscon__DOT__sw_irq3_pol));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__9(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__9\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) 
           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
           & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        if ((0x40U & (IData)(vlSelf->__PVT__spi__DOT__spcr))) {
            if (vlSelf->__PVT__spi__DOT__wfre) {
                vlSelf->__PVT__spi__DOT__wfifo__DOT__rp 
                    = vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1;
            }
        } else {
            vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
        }
    } else {
        vlSelf->__PVT__spi__DOT__wfifo__DOT__rp = 0U;
    }
    vlSelf->__PVT__spi__DOT__wfifo__DOT__rp_p1 = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp)));
    vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0 
        = ((IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__rp) 
           == (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__wp));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__10(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__10\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__core_rst_l = ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout)) 
                                             & (IData)(vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__11(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_sequent__TOP__veerwolf_core_tb__veerwolf__11\n"); );
    // Init
    CData/*0:0*/ spi__DOT____VdfgTmp_h05a03d49__0;
    spi__DOT____VdfgTmp_h05a03d49__0 = 0;
    CData/*1:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in = 0;
    // Body
    vlSelf->__PVT__spi__DOT__wfre = vlSelf->__Vdly__spi__DOT__wfre;
    if (vlSymsp->TOP__veerwolf_core_tb.__Vcellinp__dmi_wrapper__core_rst_n) {
        if (vlSelf->__PVT__spi__DOT__wb_wr) {
            if ((0U == (IData)(vlSelf->__Vcellinp__spi__adr_i))) {
                vlSelf->__PVT__spi__DOT__spcr = (0xffU 
                                                 & (0x10U 
                                                    | vlSelf->__PVT__wb_io_dat));
            }
        }
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        if ((8U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            vlSelf->__PVT__io_awready = 0U;
            vlSelf->__PVT__io_wready = 0U;
            vlSelf->__PVT__io_arready = 0U;
            vlSelf->__PVT__io_rvalid = 0U;
            vlSelf->__PVT__io_bvalid = 0U;
            vlSelf->__PVT__wb_adr = 0U;
            vlSelf->__PVT__wb_io_cyc = 0U;
            vlSelf->__PVT__wb_io_stb = 0U;
            vlSelf->__PVT__wb_io_sel = 0U;
            vlSelf->__PVT__wb_io_we = 0U;
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
        } else if ((4U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                    vlSelf->__PVT__io_rvalid = 1U;
                    if ((1U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                        vlSelf->__PVT__io_rvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                } else {
                    vlSelf->__PVT__io_bvalid = 1U;
                    if ((0x40U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                        vlSelf->__PVT__io_bvalid = 0U;
                        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_io_err) 
                     | (IData)(vlSelf->__PVT__wb_io_ack))) {
                    vlSelf->__PVT__wb_io_cyc = 0U;
                    vlSelf->__PVT__wb_io_stb = 0U;
                    vlSelf->__PVT__wb_io_sel = 0U;
                    vlSelf->__PVT__io_rvalid = 1U;
                    vlSelf->__PVT__io_rdata = (((QData)((IData)(vlSelf->__PVT__wb_io_rdt)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->__PVT__axi2wb__DOT__wb_rdt_low)));
                    vlSelf->__Vdly__axi2wb__DOT__cs = 7U;
                }
            } else {
                vlSelf->__PVT__wb_adr = (1U | (IData)(vlSelf->__PVT__wb_adr));
                vlSelf->__PVT__wb_io_sel = 0xfU;
                vlSelf->__PVT__wb_io_cyc = 1U;
                vlSelf->__PVT__wb_io_stb = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 5U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
                if (((IData)(vlSelf->__PVT__wb_io_err) 
                     | (IData)(vlSelf->__PVT__wb_io_ack))) {
                    vlSelf->__PVT__wb_io_cyc = 0U;
                    vlSelf->__PVT__wb_io_stb = 0U;
                    vlSelf->__PVT__wb_io_sel = 0U;
                    vlSelf->__PVT__axi2wb__DOT__wb_rdt_low 
                        = vlSelf->__PVT__wb_io_rdt;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 4U;
                }
            } else if (((IData)(vlSelf->__PVT__wb_io_err) 
                        | (IData)(vlSelf->__PVT__wb_io_ack))) {
                vlSelf->__PVT__wb_io_cyc = 0U;
                vlSelf->__PVT__wb_io_stb = 0U;
                vlSelf->__PVT__wb_io_sel = 0U;
                vlSelf->__PVT__wb_io_we = 0U;
                vlSelf->__PVT__io_bvalid = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 6U;
            }
        } else if ((1U & (IData)(vlSelf->__PVT__axi2wb__DOT__cs))) {
            if ((0x80U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                    = (0U == (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      >> 0xaU)));
                vlSelf->__PVT__wb_adr = ((0x3ffeU & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                vlSelf->__PVT__wb_io_cyc = 1U;
                vlSelf->__PVT__wb_io_stb = 1U;
                vlSelf->__PVT__wb_io_we = 1U;
                vlSelf->__PVT__io_wready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                    vlSelf->__PVT__wb_io_sel = (0xfU 
                                                & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                    << 0x12U) 
                                                   | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                      >> 0xeU)));
                    vlSelf->__PVT__wb_io_dat = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                   >> 0x12U));
                } else {
                    vlSelf->__PVT__wb_io_sel = (0xfU 
                                                & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                      >> 0xaU)));
                    vlSelf->__PVT__wb_io_dat = ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                   >> 0x12U));
                }
            }
        } else {
            vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
            if (((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                  >> 0x12U) & (IData)(vlSelf->__PVT__axi2wb__DOT__arbiter))) {
                vlSelf->__PVT__wb_adr = ((1U & (IData)(vlSelf->__PVT__wb_adr)) 
                                         | (0x3ffeU 
                                            & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[6U] 
                                                << 7U) 
                                               | (0x7eU 
                                                  & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[5U] 
                                                     >> 0x19U)))));
                vlSelf->__PVT__io_awready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__arbiter = 0U;
                if ((0x80U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U])) {
                    vlSelf->__PVT__axi2wb__DOT__hi_32b_w 
                        = (0U == (0xfU & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                          >> 0xaU)));
                    vlSelf->__PVT__wb_adr = ((0x3ffeU 
                                              & (IData)(vlSelf->__PVT__wb_adr)) 
                                             | (IData)(vlSelf->__PVT__axi2wb__DOT__hi_32b_w));
                    vlSelf->__PVT__wb_io_cyc = 1U;
                    vlSelf->__PVT__wb_io_stb = 1U;
                    vlSelf->__PVT__wb_io_we = 1U;
                    vlSelf->__PVT__io_wready = 1U;
                    vlSelf->__Vdly__axi2wb__DOT__cs = 2U;
                    if (vlSelf->__PVT__axi2wb__DOT__hi_32b_w) {
                        vlSelf->__PVT__wb_io_sel = 
                            (0xfU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      << 0x12U) | (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                   >> 0xeU)));
                        vlSelf->__PVT__wb_io_dat = 
                            ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[4U] 
                              << 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                                          >> 0x12U));
                    } else {
                        vlSelf->__PVT__wb_io_sel = 
                            (0xfU & ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                      << 0x16U) | (
                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                                   >> 0xaU)));
                        vlSelf->__PVT__wb_io_dat = 
                            ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[3U] 
                              << 0xeU) | (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[2U] 
                                          >> 0x12U));
                    }
                } else {
                    vlSelf->__Vdly__axi2wb__DOT__cs = 1U;
                }
            } else if ((2U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[0U])) {
                vlSelf->__PVT__wb_adr = (0x3fffU & 
                                         (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__mst_req_o[1U] 
                                          >> 2U));
                vlSelf->__PVT__wb_io_sel = 0xfU;
                vlSelf->__PVT__wb_io_cyc = 1U;
                vlSelf->__PVT__wb_io_stb = 1U;
                vlSelf->__PVT__io_arready = 1U;
                vlSelf->__Vdly__axi2wb__DOT__cs = 3U;
            }
        }
    } else {
        vlSelf->__PVT__spi__DOT__spcr = 0x10U;
        vlSelf->__Vdly__axi2wb__DOT__arbiter = 1U;
        vlSelf->__PVT__io_awready = 0U;
        vlSelf->__PVT__io_wready = 0U;
        vlSelf->__PVT__io_arready = 0U;
        vlSelf->__PVT__io_rvalid = 0U;
        vlSelf->__PVT__io_bvalid = 0U;
        vlSelf->__PVT__wb_adr = 0U;
        vlSelf->__PVT__wb_io_cyc = 0U;
        vlSelf->__PVT__wb_io_stb = 0U;
        vlSelf->__PVT__wb_io_sel = 0U;
        vlSelf->__PVT__wb_io_we = 0U;
        vlSelf->__PVT__axi2wb__DOT__wb_rdt_low = 0xdeadbeefU;
        vlSelf->__Vdly__axi2wb__DOT__cs = 0U;
    }
    vlSelf->__PVT__spi__DOT__espr = ((0xcU & ((IData)(vlSelf->__PVT__spi__DOT__sper) 
                                              << 2U)) 
                                     | (3U & (IData)(vlSelf->__PVT__spi__DOT__spcr)));
    vlSelf->__PVT__axi2wb__DOT__arbiter = vlSelf->__Vdly__axi2wb__DOT__arbiter;
    vlSelf->__PVT__axi2wb__DOT__cs = vlSelf->__Vdly__axi2wb__DOT__cs;
    vlSelf->__Vcellinp__spi__adr_i = ((1U & (IData)(vlSelf->__PVT__wb_adr))
                                       ? 0U : (7U & 
                                               ((IData)(vlSelf->__PVT__wb_adr) 
                                                >> 1U)));
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match 
        = (((0U == (0x3c00U & (IData)(vlSelf->__PVT__wb_adr))) 
            << 3U) | (((0x400U == (0x3ff0U & (IData)(vlSelf->__PVT__wb_adr))) 
                       << 2U) | (((0x410U == (0x3ff0U 
                                              & (IData)(vlSelf->__PVT__wb_adr))) 
                                  << 1U) | (0x800U 
                                            == (0x3c00U 
                                                & (IData)(vlSelf->__PVT__wb_adr))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U] 
        = (2U | ((1U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[0U]) 
                 | ((IData)(vlSelf->__PVT__io_rdata) 
                    << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[1U] 
        = ((1U & ((IData)(vlSelf->__PVT__io_rdata) 
                  >> 0x1cU)) | ((0xeU & ((IData)(vlSelf->__PVT__io_rdata) 
                                         >> 0x1cU)) 
                                | ((IData)((vlSelf->__PVT__io_rdata 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xfffff800U & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | ((1U & ((IData)((vlSelf->__PVT__io_rdata 
                              >> 0x20U)) >> 0x1cU)) 
              | (((IData)(vlSelf->__PVT__io_rvalid) 
                  << 0xaU) | (((IData)(vlSelf->__PVT__io_rid) 
                               << 4U) | (0xeU & ((IData)(
                                                         (vlSelf->__PVT__io_rdata 
                                                          >> 0x20U)) 
                                                 >> 0x1cU))))));
    vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U] 
        = ((0xff000fffU & vlSelf->__PVT__axi_intercon__DOT__slaves_resp[2U]) 
           | (0xfffff000U & (((IData)(vlSelf->__PVT__io_awready) 
                              << 0x17U) | (((IData)(vlSelf->__PVT__io_arready) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->__PVT__io_wready) 
                                               << 0x15U) 
                                              | (((IData)(vlSelf->__PVT__io_bvalid) 
                                                  << 0x14U) 
                                                 | ((IData)(vlSelf->__PVT__io_bid) 
                                                    << 0xeU)))))));
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in 
        = vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match;
    __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    if ((8U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 3U;
    }
    if ((4U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 2U;
    }
    if ((2U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__in))) {
        __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout = 0U;
    }
    vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel 
        = __Vfunc_wb_intercon0__DOT__wb_mux_io__DOT__ff1__0__Vfuncout;
    vlSelf->__PVT__wb_io_err = (1U & (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o 
        = ((IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__match) 
           & ((IData)(vlSelf->__PVT__wb_io_cyc) << (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSelf->__PVT__spi__DOT__wb_acc = (((IData)(vlSelf->wb_intercon0__DOT____Vcellout__wb_mux_io__wbs_cyc_o) 
                                        >> 1U) & (IData)(vlSelf->__PVT__wb_io_stb));
    vlSelf->__PVT__spi__DOT__wb_wr = ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                      & (IData)(vlSelf->__PVT__wb_io_we));
    spi__DOT____VdfgTmp_h05a03d49__0 = ((IData)(vlSelf->__PVT__spi__DOT__wb_acc) 
                                        & ((2U == (IData)(vlSelf->__Vcellinp__spi__adr_i)) 
                                           & (IData)(vlSelf->__PVT__wb_spi_flash_ack)));
    vlSelf->__PVT__spi__DOT__wr_spsr = ((IData)(vlSelf->__PVT__spi__DOT__wb_wr) 
                                        & (1U == (IData)(vlSelf->__Vcellinp__spi__adr_i)));
    vlSelf->__PVT__spi__DOT__wfwe = ((IData)(spi__DOT____VdfgTmp_h05a03d49__0) 
                                     & (IData)(vlSelf->__PVT__wb_io_we));
    vlSelf->__PVT__spi__DOT__rfre = ((~ (IData)(vlSelf->__PVT__wb_io_we)) 
                                     & (IData)(spi__DOT____VdfgTmp_h05a03d49__0));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__13(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__13\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelf->__PVT__spi__DOT__wfempty = ((~ (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb)) 
                                        & (IData)(vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0));
    vlSelf->__PVT__spi__DOT__wffull = ((IData)(vlSelf->spi__DOT__wfifo__DOT____VdfgTmp_hbf3f7ff0__0) 
                                       & (IData)(vlSelf->__PVT__spi__DOT__wfifo__DOT__gb));
    vlSelf->__PVT__wb_io_ack = (1U & ((((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom.__PVT__o_wb_ack) 
                                        << 3U) | (((IData)(vlSelf->__PVT__wb_sys_ack) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__wb_spi_flash_ack) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__wb_uart_ack)))) 
                                      >> (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    __Vtemp_2[0U] = vlSelf->__PVT__uart_rdt;
    __Vtemp_2[1U] = vlSelf->__PVT__spi_rdt;
    __Vtemp_2[2U] = (IData)((((QData)((IData)(((1U 
                                                & (IData)(vlSelf->__PVT__wb_adr))
                                                ? (IData)(
                                                          (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                           >> 0x20U))
                                                : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                              << 0x20U) | (QData)((IData)(vlSelf->__PVT__wb_sys_rdt))));
    __Vtemp_2[3U] = (IData)(((((QData)((IData)(((1U 
                                                 & (IData)(vlSelf->__PVT__wb_adr))
                                                 ? (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout 
                                                            >> 0x20U))
                                                 : (IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__bootrom__ram.__PVT__dout)))) 
                               << 0x20U) | (QData)((IData)(vlSelf->__PVT__wb_sys_rdt))) 
                             >> 0x20U));
    vlSelf->__PVT__wb_io_rdt = (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U)))
                                  ? 0U : (__Vtemp_2[
                                          (((IData)(0x1fU) 
                                            + (0x7fU 
                                               & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))))) 
                                | (__Vtemp_2[(3U & 
                                              (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U) 
                                               >> 5U))] 
                                   >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->__PVT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel), 5U))));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__14(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__14\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(((((0x4040000000ULL == (0x1fc40000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout))) 
           | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_haveresetn));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__15(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__15\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren 
        = (IData)(((((0xe000000000ULL == (0x1fc00000000ULL 
                                          & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                     & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)) 
                    & (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (3U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
                  & ((~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout)) 
                     & (0x6000000000ULL == (0x1fc00000000ULL 
                                            & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))))
                  ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)));
    if (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0 
            = (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x18U)));
    } else {
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = (1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
            = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
        vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0 = 0U;
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0) 
                  | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout) 
                     & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                        & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                            & (0xe400000000ULL == (0x1fc00000000ULL 
                                                   & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                           | ((0x3cU == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))) 
                              | (0x3dU == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))))))
                  ? (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h302f3af2__0))
                  : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__16(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__16\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else if ((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 2U;
        }
    } else if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)
                    ? 3U : 4U);
        }
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din 
            = (7U & ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                      ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)
                          ? 3U : 4U) : ((~ (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0xeU))) 
                                        & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU))));
    }
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__17(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__17\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xf400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren 
        = (IData)(((0x4000000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren 
        = (IData)(((0x5c00000000ULL == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xe400000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (0xf000000000ULL == (0x1fc00000000ULL 
                                  & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (1U & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__22(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__22\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (IData)(((0x1400000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h30f1bd03__0))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0 
        = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0) 
           & (IData)(((0x1000000000ULL == (0x1fc00000000ULL 
                                           & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                      & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h30f1bd03__0))));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (0xffffU & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren) 
                       | (IData)((((8U == (0xff08U 
                                           & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                   & (8U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                                  & (~ (IData)((0U 
                                                != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))))))
                       ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr)
                       : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__28(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__28\n"); );
    // Body
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_wren)
            ? ((0xff00U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 8U)) 
               | ((0x78U & ((IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x15U)) << 3U)) 
                  | (((IData)((0x100000ULL == (0x3fc100000ULL 
                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                      << 2U) | (((IData)((0x80000ULL 
                                          == (0x3fc080000ULL 
                                              & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr))) 
                                 << 1U) | (1U & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x12U)))))))
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((1U & 
                                              (- (IData)(
                                                         (0U 
                                                          == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                             | ((2U 
                                                 & (- (IData)(
                                                              (1U 
                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                | ((4U 
                                                    & (- (IData)(
                                                                 (2U 
                                                                  == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size))))) 
                                                   | (8U 
                                                      & (- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_cmd_size)))))))))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__29(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__29\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((- (IData)((4U == (0x7fU & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x22U)))))) 
            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg) 
           | (((- (IData)((5U == (0x7fU & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0x22U)))))) 
               & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg) 
              | (((- (IData)((0x10U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_hcc610b2a__0)) 
                 | (((- (IData)((0x11U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg) 
                    | (((- (IData)((0x16U == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                        & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg) 
                       | (((- (IData)((0x17U == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                           & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg) 
                          | (((- (IData)((0x18U == 
                                          (0x7fU & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractauto_reg)) 
                             | (((- (IData)((0x40U 
                                             == (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                 & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_halted)) 
                                | (((- (IData)((0x38U 
                                                == 
                                                (0x7fU 
                                                 & (IData)(
                                                           (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                                    & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg) 
                                   | (((- (IData)((0x39U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))) 
                                       & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg) 
                                      | (((- (IData)(
                                                     (0x3cU 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                  >> 0x22U)))))) 
                                          & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg) 
                                         | ((- (IData)(
                                                       (0x3dU 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                    >> 0x22U)))))) 
                                            & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmi_rddata_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en)
            ? vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSelf->__PVT__dmi_reg_rdata);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__43(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__43\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
        = ((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                       & VL_SHIFTR_QQI(64,64,32, (((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                      << 0x1cU) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                        >> 4U))), 
                                       VL_SHIFTL_III(32,32,32, 
                                                     (7U 
                                                      & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr), 3U)))) 
           | ((0xffffULL & ((- (QData)((IData)((1U 
                                                == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                            & VL_SHIFTR_QQI(64,64,32, 
                                            (((QData)((IData)(
                                                              vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U))), 
                                            VL_SHIFTL_III(32,32,32, 
                                                          (3U 
                                                           & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                              >> 1U)), 4U)))) 
              | ((0xffffffffULL & ((- (QData)((IData)(
                                                      (2U 
                                                       == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                                   & VL_SHIFTR_QQI(64,64,32, 
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                                                     << 0x3cU) 
                                                    | (((QData)((IData)(
                                                                        vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                                        << 0x1cU) 
                                                       | ((QData)((IData)(
                                                                          vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                          >> 4U))), 
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (1U 
                                                                  & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_addr 
                                                                     >> 2U)), 5U)))) 
                 | ((- (QData)((IData)((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_axi_size))))) 
                    & (((QData)((IData)(vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])) 
                        << 0x3cU) | (((QData)((IData)(
                                                      vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U])) 
                                      << 0x1cU) | ((QData)((IData)(
                                                                   vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U])) 
                                                   >> 4U)))))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error 
        = (((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
             >> 8U) & (0U != (3U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                                    >> 2U)))) | ((vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  >> 0x10U) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                        >> 0xaU)))));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read 
        = ((IData)(vlSelf->__PVT__sb_arvalid) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 0x12U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr 
        = ((IData)(vlSelf->__PVT__sb_awvalid) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                 >> 0x13U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data 
        = ((IData)(vlSelf->__PVT__sb_wvalid) & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                >> 0x11U));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                         >> 0x11U));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (IData)((0U != (0x10100U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U])));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error 
                    = ((IData)((0U != (0x10100U & vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]))) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2 
                    = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                        & (~ (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                       & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error)));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                    = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en 
                    = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read) 
                       | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 7U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                    = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done) 
                        | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                       & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)));
            }
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((0U != (7U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg 
                                 >> 8U))) ? 8U : 6U);
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                         | (~ ((3U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                               | ((4U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                  | ((5U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                     | ((6U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                        | ((7U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                           | (8U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))))))))));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 8U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done;
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((IData)(((0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg)) 
                            | (0U == (0xff020000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))))
                    ? 8U : 4U);
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_dbg_in) 
                    | (0U != (0x700U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_reg))) 
                   | (IData)((0U == (0xff020000U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg))));
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
                = ((0x200U & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg)
                    ? ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)
                        ? 9U : (((2U == (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__command_reg 
                                         >> 0x18U)) 
                                 & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abmem_addr_core_local)))
                                 ? 5U : 3U)) : ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                                                 >> 0x1fU)
                                                 ? 1U
                                                 : 0U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
                = (1U & ((((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                            >> 9U) & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__resumereq)) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command)) 
                         | (~ ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & ((3U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)) 
                      | (5U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate))));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en) 
                   & (9U == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)));
        }
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate = 2U;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                      >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate 
            = ((1U & ((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                       >> 9U) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                ? 2U : 1U);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en 
            = (1U & (((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmcontrol_reg 
                       >> 0x1fU) | (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dmstatus_reg 
                                    >> 9U)) | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)));
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_data_done));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
             >> 1U) | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
           & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__allow_dbg_halt_csr_write));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg_resume_req)) 
                 & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                     >> 2U) | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_req_final) 
                               | (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h5d4192ea__0)))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = (0x8000U | ((0x4000U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                  >> 1U)) | ((0x2000U 
                                              & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                 << 7U)) 
                                             | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                                                 << 0xcU) 
                                                | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_load_type) 
                                                    << 0xbU) 
                                                   | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__nmi_lsu_store_type) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync) 
                                                          << 9U) 
                                                         | ((0x100U 
                                                             & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                << 8U)) 
                                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                                                << 7U) 
                                                               | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                                   << 6U) 
                                                                  | ((((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_r_d1) 
                                                                         << 5U) 
                                                                        | (0xfffffe0U 
                                                                           & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                              >> 4U))) 
                                                                       | (0xffffffe0U 
                                                                          & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                                      & (((~ 
                                                                           (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 2U)) 
                                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                                         << 5U)) 
                                                                     | (((0x1ffffff0U 
                                                                          & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                              >> 3U) 
                                                                             & (((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U) 
                                                                                & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync) 
                                                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__core_empty)) 
                                                                                << 4U)))) 
                                                                         | (0xfffffff0U 
                                                                            & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                               & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync) 
                                                                                << 4U)))) 
                                                                        | ((8U 
                                                                            & ((((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                                                                                & (~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_debug_halt_req_sync)))) 
                                                                                << 3U) 
                                                                               | (0xfffffff8U 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                                & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                                << 3U))))) 
                                                                           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                                               << 2U) 
                                                                              | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x84U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))))))))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec_tlu_flush_noredir_r) 
            << 0x11U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_taken) 
                          << 0x10U) | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__lsu_idle_any) 
                                        << 0xfU) | 
                                       (((0U == (IData)(vlSelf->rvtop__DOT__veer__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0xeU) | 
                                        (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                          << 0xdU) 
                                         | ((0x7ffff000U 
                                             & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                 << 0xcU) 
                                                & ((vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                      << 0xcU)))) 
                                            | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                << 0xbU) 
                                               | ((((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                    & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns)) 
                                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns)) 
                                                       | ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns)) 
                                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns)))) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_r) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__i0_trigger_eval_r) 
                                                          & ((~ 
                                                              (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xdU)) 
                                                             & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__rfpc_i0_r)) 
                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_wr_pause_r) 
                                                               << 6U) 
                                                              | ((0x20U 
                                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__decode__DOT____Vcellout__misc1ff__dout) 
                                                                     << 1U)) 
                                                                 | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dpc_capture_pc) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__request_debug_mode_done) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__dec_tlu_flush_pause_r) 
                                                                              << 1U) 
                                                                             | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____VdfgTmp_h75cc2317__0) 
                                                                                & (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__genblk7__DOT__mstatus_ff__dout 
                                                                                >> 0x17U)))))))))))))))))));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__mpvhalt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != ((IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din) 
                   ^ (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
            ? (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout));
    vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__halt_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((0U != (vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
                   ^ vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout))
            ? vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din
            : vlSelf->rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout);
}

VL_INLINE_OPT void Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__46(Vveerwolf_core_tb_veerwolf_core__C2faf080* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vveerwolf_core_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vveerwolf_core_tb_veerwolf_core__C2faf080___nba_comb__TOP__veerwolf_core_tb__veerwolf__46\n"); );
    // Body
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 0U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en = 1U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                         >> 0x10U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                   & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
        }
    } else if ((4U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 9U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = (1U & (vlSymsp->TOP__veerwolf_core_tb__veerwolf__axi_intercon__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                             >> 8U));
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                    = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en) 
                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rsp_error));
            } else {
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
                vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                    = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data;
            }
        } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 8U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr;
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                    & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data))
                    ? 8U : ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data)
                             ? 5U : 6U));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_addr) 
                   | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_write_data));
        }
    } else if ((2U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate = 7U;
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_cmd_read;
        } else {
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
                = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0)
                    ? 9U : 4U);
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
                = (1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                          | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                         | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                            >> 4U)));
            vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
                = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0;
        }
    } else if ((1U & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0)
                ? 9U : 3U);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (1U & (((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                      | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_unaligned)) 
                     | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout) 
                        >> 4U)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgExtracted_hec678f6d__0;
    } else {
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0)
                ? 2U : 1U);
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en 
            = (((((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
                  | ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                     & ((~ (IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                        & (IData)(((0xf000000000ULL 
                                    == (0x1fc00000000ULL 
                                        & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout)))))) 
                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbaddress0_reg_wren0) 
                    & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout))) 
                & (~ (IData)((0U != (7U & (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                                           >> 0xcU)))))) 
               & (~ (vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_reg 
                     >> 0x16U)));
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren 
            = vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en;
        vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren 
            = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_wren) 
               & (0U != (7U & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                       >> 0xeU)))));
    }
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0) 
            | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1) 
               | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2)))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)
                                            ? ((0xffU 
                                                & ((- (IData)(
                                                              (0U 
                                                               == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                   & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr), 3U)))) 
                                               | ((0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & VL_SHIFTR_III(32,32,32, vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata, 
                                                                      VL_SHIFTL_III(32,32,32, 
                                                                                (1U 
                                                                                & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                                                >> 1U)), 4U)))) 
                                                  | ((- (IData)(
                                                                (2U 
                                                                 == (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                     & vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata)))
                                            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__decode__DOT__i0_result_corr_r)) 
                                       | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg_wren2))) 
                                          & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data0_reg);
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__abstractcs_error_din 
        = (((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout) 
            & ((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
               & ((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_reg_en) 
                  & (((IData)(vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en) 
                      & ((0x16U == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))) 
                         | (0x17U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                     | ((0x18U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                        | ((4U == (0x7fU & (IData)(
                                                   (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                    >> 0x22U)))) 
                           | (5U == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U))))))))))
            ? 1U : (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                     & ((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                        & ((~ ((0U == (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 8U))) 
                               | (2U == (0xffU & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                  >> 8U))))) 
                           | ((IData)(((0x200U == (0xff00U 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                       & ((3U == (7U 
                                                  & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                     >> 4U))) 
                                          | ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                             >> 6U)))) 
                              | (((2U != (7U & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout) 
                                                >> 4U))) 
                                  & (IData)((2U == 
                                             (0xff02U 
                                              & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))))) 
                                 | (IData)((4U == (0xff04U 
                                                   & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)))))))))
                     ? 2U : (((~ (IData)((0U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                              & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__core_dbg_cmd_done) 
                                  & (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__illegal_r) 
                                      & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dec__DOT__tlu__DOT__dbg_cmd_done_ns)) 
                                     | ((0U != ((9U 
                                                 >= 
                                                 (0xfU 
                                                  & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr), 1U)))
                                                 ? 
                                                (3U 
                                                 & ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__fifo_error) 
                                                    >> 
                                                    (0xfU 
                                                     & VL_SHIFTL_III(4,4,32, (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_ctrl__DOT__RspPtr), 1U))))
                                                 : 0U)) 
                                        & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dma_dbg_cmd_done)))) 
                                 | ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                    & (IData)(((0U 
                                                == 
                                                (0xff00U 
                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                               & ((IData)(
                                                          ((0x1000U 
                                                            == 
                                                            (0xf000U 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout))) 
                                                           & (0U 
                                                              != 
                                                              (0x7fU 
                                                               & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                                  >> 5U))))) 
                                                  | (0U 
                                                     != 
                                                     (7U 
                                                      & ((IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout) 
                                                         >> 0xdU)))))))))
                              ? 3U : (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                          & (2U != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))))
                                       ? 4U : (((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__dbg_sb_bus_error))
                                                ? 5U
                                                : (
                                                   ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__execute_command) 
                                                    & (IData)(
                                                              ((0x200U 
                                                                == 
                                                                (0xff00U 
                                                                 & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                               & ((~ (IData)(
                                                                             (0U 
                                                                              != (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout)))) 
                                                                  & ((IData)(
                                                                             ((0x10U 
                                                                               == 
                                                                               (0x70U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                              & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)) 
                                                                     | (IData)(
                                                                               ((0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout))) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__data1_reg)))))))))
                                                    ? 7U
                                                    : 
                                                   ((IData)(
                                                            ((0x5800000000ULL 
                                                              == 
                                                              (0x1fc00000000ULL 
                                                               & vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr)) 
                                                             & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____VdfgTmp_h47440a99__0)))
                                                     ? 
                                                    ((~ (IData)(
                                                                (vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0xaU))) 
                                                     & (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))
                                                     : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__dmabstractcs_error_reg__dout))))))));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__genblock__DOT__dffs__din 
        = ((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1 
        = ((7U == (IData)(vlSelf->rvtop__DOT__veer__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
           & ((~ (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbcs_sberror_wren)) 
              & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_state_en)));
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg);
    vlSelf->rvtop__DOT__veer__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__genblock__DOT__dff__DOT____Vcellinp__genblock__DOT__dffs__din 
        = (((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__veerwolf_core_tb.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSelf->__PVT__rvtop__DOT__veer__DOT__dbg__DOT__sbdata1_reg);
}
