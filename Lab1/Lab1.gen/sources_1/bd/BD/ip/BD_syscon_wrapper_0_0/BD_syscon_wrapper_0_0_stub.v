// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.2 (lin64) Build 6299465 Fri Nov 14 12:34:56 MST 2025
// Date        : Tue Feb 24 08:37:36 2026
// Host        : gost-Vivobook-ASUSLaptop-X1605VA-X1605VA running 64-bit Ubuntu 24.04.4 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/gost/Desktop/Repositories/RVfpgaSoC-Labs/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_syscon_wrapper_0_0/BD_syscon_wrapper_0_0_stub.v
// Design      : BD_syscon_wrapper_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* CHECK_LICENSE_TYPE = "BD_syscon_wrapper_0_0,syscon_wrapper,{}" *) (* CORE_GENERATION_INFO = "BD_syscon_wrapper_0_0,syscon_wrapper,{x_ipProduct=Vivado 2025.2,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=syscon_wrapper,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) 
(* IP_DEFINITION_SOURCE = "module_ref" *) (* X_CORE_INFO = "syscon_wrapper,Vivado 2025.2" *) 
module BD_syscon_wrapper_0_0(i_clk, i_rst, gpio_irq, ptc_irq, o_timer_irq, 
  i_ram_init_done, i_ram_init_error, o_nmi_vec, o_nmi_int, i_wb_adr, i_wb_dat, i_wb_sel, i_wb_we, 
  i_wb_cyc, i_wb_stb, o_wb_rdt, o_wb_ack, AN, Digits_Bits)
/* synthesis syn_black_box black_box_pad_pin="i_rst,gpio_irq,ptc_irq,o_timer_irq,i_ram_init_done,i_ram_init_error,o_nmi_vec[31:0],o_nmi_int,i_wb_adr[31:0],i_wb_dat[31:0],i_wb_sel[3:0],i_wb_we,i_wb_cyc,i_wb_stb,o_wb_rdt[31:0],o_wb_ack,AN[7:0],Digits_Bits[6:0]" */
/* synthesis syn_force_seq_prim="i_clk" */;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 i_clk CLK" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME i_clk, ASSOCIATED_RESET i_rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN BD_clk_0, INSERT_VIP 0" *) input i_clk /* synthesis syn_isclock = 1 */;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 i_rst RST" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME i_rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input i_rst;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 gpio_irq INTERRUPT" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME gpio_irq, SENSITIVITY LEVEL_HIGH, PortWidth 1" *) input gpio_irq;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 ptc_irq INTERRUPT" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ptc_irq, SENSITIVITY LEVEL_HIGH, PortWidth 1" *) input ptc_irq;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 o_timer_irq INTERRUPT" *) (* X_INTERFACE_MODE = "master" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME o_timer_irq, SENSITIVITY LEVEL_HIGH, PortWidth 1" *) output o_timer_irq;
  input i_ram_init_done;
  input i_ram_init_error;
  output [31:0]o_nmi_vec;
  output o_nmi_int;
  input [31:0]i_wb_adr;
  input [31:0]i_wb_dat;
  input [3:0]i_wb_sel;
  input i_wb_we;
  input i_wb_cyc;
  input i_wb_stb;
  output [31:0]o_wb_rdt;
  output o_wb_ack;
  output [7:0]AN;
  output [6:0]Digits_Bits;
endmodule
