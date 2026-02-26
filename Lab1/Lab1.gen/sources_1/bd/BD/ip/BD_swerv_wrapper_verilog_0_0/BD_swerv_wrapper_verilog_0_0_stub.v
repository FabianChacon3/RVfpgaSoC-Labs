// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.2 (lin64) Build 6299465 Fri Nov 14 12:34:56 MST 2025
// Date        : Tue Feb 24 08:39:30 2026
// Host        : gost-Vivobook-ASUSLaptop-X1605VA-X1605VA running 64-bit Ubuntu 24.04.4 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/gost/Desktop/Repositories/RVfpgaSoC-Labs/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_swerv_wrapper_verilog_0_0/BD_swerv_wrapper_verilog_0_0_stub.v
// Design      : BD_swerv_wrapper_verilog_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* CHECK_LICENSE_TYPE = "BD_swerv_wrapper_verilog_0_0,swerv_wrapper_verilog,{}" *) (* CORE_GENERATION_INFO = "BD_swerv_wrapper_verilog_0_0,swerv_wrapper_verilog,{x_ipProduct=Vivado 2025.2,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=swerv_wrapper_verilog,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) 
(* IP_DEFINITION_SOURCE = "module_ref" *) (* X_CORE_INFO = "swerv_wrapper_verilog,Vivado 2025.2" *) 
module BD_swerv_wrapper_verilog_0_0(clk, rst, nmi_int, nmi_vec, lsu_axi_awvalid, 
  lsu_axi_awready, lsu_axi_awid, lsu_axi_awaddr, lsu_axi_awregion, lsu_axi_awlen, 
  lsu_axi_awsize, lsu_axi_awburst, lsu_axi_awlock, lsu_axi_awcache, lsu_axi_awprot, 
  lsu_axi_awqos, lsu_axi_wvalid, lsu_axi_wready, lsu_axi_wdata, lsu_axi_wstrb, lsu_axi_wlast, 
  lsu_axi_bvalid, lsu_axi_bready, lsu_axi_bresp, lsu_axi_bid, lsu_axi_arvalid, 
  lsu_axi_arready, lsu_axi_arid, lsu_axi_araddr, lsu_axi_arregion, lsu_axi_arlen, 
  lsu_axi_arsize, lsu_axi_arburst, lsu_axi_arlock, lsu_axi_arcache, lsu_axi_arprot, 
  lsu_axi_arqos, lsu_axi_rvalid, lsu_axi_rready, lsu_axi_rid, lsu_axi_rdata, lsu_axi_rresp, 
  lsu_axi_rlast, ifu_axi_arvalid, ifu_axi_arready, ifu_axi_arid, ifu_axi_araddr, 
  ifu_axi_arregion, ifu_axi_arlen, ifu_axi_arsize, ifu_axi_arburst, ifu_axi_arlock, 
  ifu_axi_arcache, ifu_axi_arprot, ifu_axi_arqos, ifu_axi_rvalid, ifu_axi_rready, 
  ifu_axi_rid, ifu_axi_rdata, ifu_axi_rresp, ifu_axi_rlast, sb_axi_awvalid, sb_axi_awready, 
  sb_axi_awid, sb_axi_awaddr, sb_axi_awregion, sb_axi_awlen, sb_axi_awsize, sb_axi_awburst, 
  sb_axi_awlock, sb_axi_awcache, sb_axi_awprot, sb_axi_awqos, sb_axi_wvalid, sb_axi_wready, 
  sb_axi_wdata, sb_axi_wstrb, sb_axi_wlast, sb_axi_bvalid, sb_axi_bready, sb_axi_bresp, 
  sb_axi_bid, sb_axi_arvalid, sb_axi_arready, sb_axi_arid, sb_axi_araddr, sb_axi_arregion, 
  sb_axi_arlen, sb_axi_arsize, sb_axi_arburst, sb_axi_arlock, sb_axi_arcache, sb_axi_arprot, 
  sb_axi_arqos, sb_axi_rvalid, sb_axi_rready, sb_axi_rid, sb_axi_rdata, sb_axi_rresp, 
  sb_axi_rlast, timer_int, dmi_reg_en, dmi_reg_addr, dmi_reg_wr_en, dmi_reg_wdata, 
  dmi_reg_rdata, dmi_hard_reset)
/* synthesis syn_black_box black_box_pad_pin="rst,nmi_int,nmi_vec[31:0],lsu_axi_awvalid,lsu_axi_awready,lsu_axi_awid[3:0],lsu_axi_awaddr[31:0],lsu_axi_awregion[3:0],lsu_axi_awlen[7:0],lsu_axi_awsize[2:0],lsu_axi_awburst[1:0],lsu_axi_awlock,lsu_axi_awcache[3:0],lsu_axi_awprot[2:0],lsu_axi_awqos[3:0],lsu_axi_wvalid,lsu_axi_wready,lsu_axi_wdata[63:0],lsu_axi_wstrb[7:0],lsu_axi_wlast,lsu_axi_bvalid,lsu_axi_bready,lsu_axi_bresp[1:0],lsu_axi_bid[3:0],lsu_axi_arvalid,lsu_axi_arready,lsu_axi_arid[3:0],lsu_axi_araddr[31:0],lsu_axi_arregion[3:0],lsu_axi_arlen[7:0],lsu_axi_arsize[2:0],lsu_axi_arburst[1:0],lsu_axi_arlock,lsu_axi_arcache[3:0],lsu_axi_arprot[2:0],lsu_axi_arqos[3:0],lsu_axi_rvalid,lsu_axi_rready,lsu_axi_rid[3:0],lsu_axi_rdata[63:0],lsu_axi_rresp[1:0],lsu_axi_rlast,ifu_axi_arvalid,ifu_axi_arready,ifu_axi_arid[2:0],ifu_axi_araddr[31:0],ifu_axi_arregion[3:0],ifu_axi_arlen[7:0],ifu_axi_arsize[2:0],ifu_axi_arburst[1:0],ifu_axi_arlock,ifu_axi_arcache[3:0],ifu_axi_arprot[2:0],ifu_axi_arqos[3:0],ifu_axi_rvalid,ifu_axi_rready,ifu_axi_rid[2:0],ifu_axi_rdata[63:0],ifu_axi_rresp[1:0],ifu_axi_rlast,sb_axi_awvalid,sb_axi_awready,sb_axi_awid[0:0],sb_axi_awaddr[31:0],sb_axi_awregion[3:0],sb_axi_awlen[7:0],sb_axi_awsize[2:0],sb_axi_awburst[1:0],sb_axi_awlock,sb_axi_awcache[3:0],sb_axi_awprot[2:0],sb_axi_awqos[3:0],sb_axi_wvalid,sb_axi_wready,sb_axi_wdata[63:0],sb_axi_wstrb[7:0],sb_axi_wlast,sb_axi_bvalid,sb_axi_bready,sb_axi_bresp[1:0],sb_axi_bid[0:0],sb_axi_arvalid,sb_axi_arready,sb_axi_arid[0:0],sb_axi_araddr[31:0],sb_axi_arregion[3:0],sb_axi_arlen[7:0],sb_axi_arsize[2:0],sb_axi_arburst[1:0],sb_axi_arlock,sb_axi_arcache[3:0],sb_axi_arprot[2:0],sb_axi_arqos[3:0],sb_axi_rvalid,sb_axi_rready,sb_axi_rid[0:0],sb_axi_rdata[63:0],sb_axi_rresp[1:0],sb_axi_rlast,timer_int,dmi_reg_en,dmi_reg_addr[6:0],dmi_reg_wr_en,dmi_reg_wdata[31:0],dmi_reg_rdata[31:0],dmi_hard_reset" */
/* synthesis syn_force_seq_prim="clk" */;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME clk, ASSOCIATED_BUSIF ifu_axi:lsu_axi:sb_axi, ASSOCIATED_RESET rst, FREQ_HZ 100000000, FREQ_TOLERANCE_HZ 0, PHASE 0.0, CLK_DOMAIN BD_clk_0, INSERT_VIP 0" *) input clk /* synthesis syn_isclock = 1 */;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 rst RST" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME rst, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input rst;
  input nmi_int;
  input [31:0]nmi_vec;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWVALID" *) (* X_INTERFACE_MODE = "master" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME lsu_axi, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 4, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) output lsu_axi_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWREADY" *) input lsu_axi_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWID" *) output [3:0]lsu_axi_awid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWADDR" *) output [31:0]lsu_axi_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWREGION" *) output [3:0]lsu_axi_awregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWLEN" *) output [7:0]lsu_axi_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWSIZE" *) output [2:0]lsu_axi_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWBURST" *) output [1:0]lsu_axi_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWLOCK" *) output lsu_axi_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWCACHE" *) output [3:0]lsu_axi_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWPROT" *) output [2:0]lsu_axi_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi AWQOS" *) output [3:0]lsu_axi_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi WVALID" *) output lsu_axi_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi WREADY" *) input lsu_axi_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi WDATA" *) output [63:0]lsu_axi_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi WSTRB" *) output [7:0]lsu_axi_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi WLAST" *) output lsu_axi_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi BVALID" *) input lsu_axi_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi BREADY" *) output lsu_axi_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi BRESP" *) input [1:0]lsu_axi_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi BID" *) input [3:0]lsu_axi_bid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARVALID" *) output lsu_axi_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARREADY" *) input lsu_axi_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARID" *) output [3:0]lsu_axi_arid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARADDR" *) output [31:0]lsu_axi_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARREGION" *) output [3:0]lsu_axi_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARLEN" *) output [7:0]lsu_axi_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARSIZE" *) output [2:0]lsu_axi_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARBURST" *) output [1:0]lsu_axi_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARLOCK" *) output lsu_axi_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARCACHE" *) output [3:0]lsu_axi_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARPROT" *) output [2:0]lsu_axi_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi ARQOS" *) output [3:0]lsu_axi_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RVALID" *) input lsu_axi_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RREADY" *) output lsu_axi_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RID" *) input [3:0]lsu_axi_rid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RDATA" *) input [63:0]lsu_axi_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RRESP" *) input [1:0]lsu_axi_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi RLAST" *) input lsu_axi_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARVALID" *) (* X_INTERFACE_MODE = "master" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ifu_axi, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 3, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_ONLY, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 0, HAS_BRESP 0, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) output ifu_axi_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARREADY" *) input ifu_axi_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARID" *) output [2:0]ifu_axi_arid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARADDR" *) output [31:0]ifu_axi_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARREGION" *) output [3:0]ifu_axi_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARLEN" *) output [7:0]ifu_axi_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARSIZE" *) output [2:0]ifu_axi_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARBURST" *) output [1:0]ifu_axi_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARLOCK" *) output ifu_axi_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARCACHE" *) output [3:0]ifu_axi_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARPROT" *) output [2:0]ifu_axi_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi ARQOS" *) output [3:0]ifu_axi_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RVALID" *) input ifu_axi_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RREADY" *) output ifu_axi_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RID" *) input [2:0]ifu_axi_rid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RDATA" *) input [63:0]ifu_axi_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RRESP" *) input [1:0]ifu_axi_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi RLAST" *) input ifu_axi_rlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWVALID" *) (* X_INTERFACE_MODE = "master" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME sb_axi, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 1, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) output sb_axi_awvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWREADY" *) input sb_axi_awready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWID" *) output [0:0]sb_axi_awid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWADDR" *) output [31:0]sb_axi_awaddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWREGION" *) output [3:0]sb_axi_awregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWLEN" *) output [7:0]sb_axi_awlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWSIZE" *) output [2:0]sb_axi_awsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWBURST" *) output [1:0]sb_axi_awburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWLOCK" *) output sb_axi_awlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWCACHE" *) output [3:0]sb_axi_awcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWPROT" *) output [2:0]sb_axi_awprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi AWQOS" *) output [3:0]sb_axi_awqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi WVALID" *) output sb_axi_wvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi WREADY" *) input sb_axi_wready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi WDATA" *) output [63:0]sb_axi_wdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi WSTRB" *) output [7:0]sb_axi_wstrb;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi WLAST" *) output sb_axi_wlast;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi BVALID" *) input sb_axi_bvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi BREADY" *) output sb_axi_bready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi BRESP" *) input [1:0]sb_axi_bresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi BID" *) input [0:0]sb_axi_bid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARVALID" *) output sb_axi_arvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARREADY" *) input sb_axi_arready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARID" *) output [0:0]sb_axi_arid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARADDR" *) output [31:0]sb_axi_araddr;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARREGION" *) output [3:0]sb_axi_arregion;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARLEN" *) output [7:0]sb_axi_arlen;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARSIZE" *) output [2:0]sb_axi_arsize;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARBURST" *) output [1:0]sb_axi_arburst;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARLOCK" *) output sb_axi_arlock;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARCACHE" *) output [3:0]sb_axi_arcache;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARPROT" *) output [2:0]sb_axi_arprot;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi ARQOS" *) output [3:0]sb_axi_arqos;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RVALID" *) input sb_axi_rvalid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RREADY" *) output sb_axi_rready;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RID" *) input [0:0]sb_axi_rid;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RDATA" *) input [63:0]sb_axi_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RRESP" *) input [1:0]sb_axi_rresp;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi RLAST" *) input sb_axi_rlast;
  input timer_int;
  input dmi_reg_en;
  input [6:0]dmi_reg_addr;
  input dmi_reg_wr_en;
  input [31:0]dmi_reg_wdata;
  output [31:0]dmi_reg_rdata;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 dmi_hard_reset RST" *) (* X_INTERFACE_MODE = "slave" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME dmi_hard_reset, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input dmi_hard_reset;
endmodule
