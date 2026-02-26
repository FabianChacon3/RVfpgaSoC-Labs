// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2026 Advanced Micro Devices, Inc. All Rights Reserved.
// -------------------------------------------------------------------------------
// This file contains confidential and proprietary information
// of AMD and is protected under U.S. and international copyright
// and other intellectual property laws.
//
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// AMD, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND AMD HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) AMD shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or AMD had been advised of the
// possibility of the same.
//
// CRITICAL APPLICATIONS
// AMD products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of AMD products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
//
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
//
// DO NOT MODIFY THIS FILE.

// MODULE VLNV: amd.com:blockdesign:BD:1.0

`timescale 1ps / 1ps

`include "vivado_interfaces.svh"

module BD_sv (
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 ifu_axi_0" *)
  (* X_INTERFACE_MODE = "master ifu_axi_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME ifu_axi_0, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 3, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_ONLY, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 0, HAS_BRESP 0, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
  vivado_aximm_v1_0.master ifu_axi_0,
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 lsu_axi_0" *)
  (* X_INTERFACE_MODE = "master lsu_axi_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME lsu_axi_0, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 4, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
  vivado_aximm_v1_0.master lsu_axi_0,
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 sb_axi_0" *)
  (* X_INTERFACE_MODE = "master sb_axi_0" *)
  (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME sb_axi_0, DATA_WIDTH 64, PROTOCOL AXI4, FREQ_HZ 100000000, ID_WIDTH 1, ADDR_WIDTH 32, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 1, HAS_LOCK 1, HAS_PROT 1, HAS_CACHE 1, HAS_QOS 1, HAS_REGION 1, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 1, NUM_READ_OUTSTANDING 2, NUM_WRITE_OUTSTANDING 2, MAX_BURST_LENGTH 256, PHASE 0.0, CLK_DOMAIN BD_clk_0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *)
  vivado_aximm_v1_0.master sb_axi_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire clk_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire dmi_hard_reset_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [6:0] dmi_reg_addr_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire dmi_reg_en_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [31:0] dmi_reg_rdata_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [31:0] dmi_reg_wdata_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire dmi_reg_wr_en_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire rst_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_awqos_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_arcache_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_arvalid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [2:0] o_ram_arprot_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_awvalid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_awcache_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [63:0] o_ram_wdata_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [2:0] o_ram_awprot_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [5:0] o_ram_arid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [7:0] o_ram_wstrb_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_wlast_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_arlock_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [31:0] o_ram_araddr_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [5:0] o_ram_awid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [31:0] o_ram_awaddr_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_awlock_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_wvalid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_bready_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [1:0] o_ram_arburst_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [1:0] o_ram_awburst_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [7:0] o_ram_arlen_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [2:0] o_ram_arsize_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [7:0] o_ram_awlen_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [2:0] o_ram_awsize_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_arregion_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_arqos_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [3:0] o_ram_awregion_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire o_ram_rready_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_arready_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_awready_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_wready_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [63:0] i_ram_rdata_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [1:0] i_ram_rresp_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [5:0] i_ram_bid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_bvalid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_rlast_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [5:0] i_ram_rid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire [1:0] i_ram_bresp_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_rvalid_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_init_done_0,
  (* X_INTERFACE_IGNORE = "true" *)
  input wire i_ram_init_error_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [7:0] AN_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire [6:0] Digits_Bits_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_0,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_1,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_2,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_3,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_4,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_5,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_6,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_7,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_8,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_9,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_10,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_11,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_12,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_13,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_14,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_15,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_16,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_17,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_18,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_19,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_20,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_21,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_22,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_23,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_24,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_25,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_26,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_27,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_28,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_29,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_30,
  (* X_INTERFACE_IGNORE = "true" *)
  output wire bidir_31
);

  // interface wire assignments
  assign ifu_axi_0.ARADDR = 0;
  assign ifu_axi_0.ARBURST = 0;
  assign ifu_axi_0.ARCACHE = 0;
  assign ifu_axi_0.ARID = 0;
  assign ifu_axi_0.ARLEN = 0;
  assign ifu_axi_0.ARLOCK = 0;
  assign ifu_axi_0.ARPROT = 0;
  assign ifu_axi_0.ARQOS = 0;
  assign ifu_axi_0.ARREGION = 0;
  assign ifu_axi_0.ARSIZE = 0;
  assign ifu_axi_0.ARUSER = 0;
  assign ifu_axi_0.ARVALID = 0;
  assign ifu_axi_0.AWADDR = 0;
  assign ifu_axi_0.AWBURST = 0;
  assign ifu_axi_0.AWCACHE = 0;
  assign ifu_axi_0.AWID = 0;
  assign ifu_axi_0.AWLEN = 0;
  assign ifu_axi_0.AWLOCK = 0;
  assign ifu_axi_0.AWPROT = 0;
  assign ifu_axi_0.AWQOS = 0;
  assign ifu_axi_0.AWREGION = 0;
  assign ifu_axi_0.AWSIZE = 0;
  assign ifu_axi_0.AWUSER = 0;
  assign ifu_axi_0.AWVALID = 0;
  assign ifu_axi_0.BREADY = 0;
  assign ifu_axi_0.RREADY = 0;
  assign ifu_axi_0.WDATA = 0;
  assign ifu_axi_0.WID = 0;
  assign ifu_axi_0.WLAST = 0;
  assign ifu_axi_0.WSTRB = 0;
  assign ifu_axi_0.WUSER = 0;
  assign ifu_axi_0.WVALID = 0;
  assign lsu_axi_0.ARADDR = 0;
  assign lsu_axi_0.ARBURST = 0;
  assign lsu_axi_0.ARCACHE = 0;
  assign lsu_axi_0.ARID = 0;
  assign lsu_axi_0.ARLEN = 0;
  assign lsu_axi_0.ARLOCK = 0;
  assign lsu_axi_0.ARPROT = 0;
  assign lsu_axi_0.ARQOS = 0;
  assign lsu_axi_0.ARREGION = 0;
  assign lsu_axi_0.ARSIZE = 0;
  assign lsu_axi_0.ARUSER = 0;
  assign lsu_axi_0.ARVALID = 0;
  assign lsu_axi_0.AWADDR = 0;
  assign lsu_axi_0.AWBURST = 0;
  assign lsu_axi_0.AWCACHE = 0;
  assign lsu_axi_0.AWID = 0;
  assign lsu_axi_0.AWLEN = 0;
  assign lsu_axi_0.AWLOCK = 0;
  assign lsu_axi_0.AWPROT = 0;
  assign lsu_axi_0.AWQOS = 0;
  assign lsu_axi_0.AWREGION = 0;
  assign lsu_axi_0.AWSIZE = 0;
  assign lsu_axi_0.AWUSER = 0;
  assign lsu_axi_0.AWVALID = 0;
  assign lsu_axi_0.BREADY = 0;
  assign lsu_axi_0.RREADY = 0;
  assign lsu_axi_0.WDATA = 0;
  assign lsu_axi_0.WID = 0;
  assign lsu_axi_0.WLAST = 0;
  assign lsu_axi_0.WSTRB = 0;
  assign lsu_axi_0.WUSER = 0;
  assign lsu_axi_0.WVALID = 0;
  assign sb_axi_0.ARADDR = 0;
  assign sb_axi_0.ARBURST = 0;
  assign sb_axi_0.ARCACHE = 0;
  assign sb_axi_0.ARID = 0;
  assign sb_axi_0.ARLEN = 0;
  assign sb_axi_0.ARLOCK = 0;
  assign sb_axi_0.ARPROT = 0;
  assign sb_axi_0.ARQOS = 0;
  assign sb_axi_0.ARREGION = 0;
  assign sb_axi_0.ARSIZE = 0;
  assign sb_axi_0.ARUSER = 0;
  assign sb_axi_0.ARVALID = 0;
  assign sb_axi_0.AWADDR = 0;
  assign sb_axi_0.AWBURST = 0;
  assign sb_axi_0.AWCACHE = 0;
  assign sb_axi_0.AWID = 0;
  assign sb_axi_0.AWLEN = 0;
  assign sb_axi_0.AWLOCK = 0;
  assign sb_axi_0.AWPROT = 0;
  assign sb_axi_0.AWQOS = 0;
  assign sb_axi_0.AWREGION = 0;
  assign sb_axi_0.AWSIZE = 0;
  assign sb_axi_0.AWUSER = 0;
  assign sb_axi_0.AWVALID = 0;
  assign sb_axi_0.BREADY = 0;
  assign sb_axi_0.RREADY = 0;
  assign sb_axi_0.WDATA = 0;
  assign sb_axi_0.WID = 0;
  assign sb_axi_0.WLAST = 0;
  assign sb_axi_0.WSTRB = 0;
  assign sb_axi_0.WUSER = 0;
  assign sb_axi_0.WVALID = 0;

  BD inst (
    .clk_0(clk_0),
    .dmi_hard_reset_0(dmi_hard_reset_0),
    .dmi_reg_addr_0(dmi_reg_addr_0),
    .dmi_reg_en_0(dmi_reg_en_0),
    .dmi_reg_rdata_0(dmi_reg_rdata_0),
    .dmi_reg_wdata_0(dmi_reg_wdata_0),
    .dmi_reg_wr_en_0(dmi_reg_wr_en_0),
    .rst_0(rst_0),
    .o_ram_awqos_0(o_ram_awqos_0),
    .o_ram_arcache_0(o_ram_arcache_0),
    .o_ram_arvalid_0(o_ram_arvalid_0),
    .o_ram_arprot_0(o_ram_arprot_0),
    .o_ram_awvalid_0(o_ram_awvalid_0),
    .o_ram_awcache_0(o_ram_awcache_0),
    .o_ram_wdata_0(o_ram_wdata_0),
    .o_ram_awprot_0(o_ram_awprot_0),
    .o_ram_arid_0(o_ram_arid_0),
    .o_ram_wstrb_0(o_ram_wstrb_0),
    .o_ram_wlast_0(o_ram_wlast_0),
    .o_ram_arlock_0(o_ram_arlock_0),
    .o_ram_araddr_0(o_ram_araddr_0),
    .o_ram_awid_0(o_ram_awid_0),
    .o_ram_awaddr_0(o_ram_awaddr_0),
    .o_ram_awlock_0(o_ram_awlock_0),
    .o_ram_wvalid_0(o_ram_wvalid_0),
    .o_ram_bready_0(o_ram_bready_0),
    .o_ram_arburst_0(o_ram_arburst_0),
    .o_ram_awburst_0(o_ram_awburst_0),
    .o_ram_arlen_0(o_ram_arlen_0),
    .o_ram_arsize_0(o_ram_arsize_0),
    .o_ram_awlen_0(o_ram_awlen_0),
    .o_ram_awsize_0(o_ram_awsize_0),
    .o_ram_arregion_0(o_ram_arregion_0),
    .o_ram_arqos_0(o_ram_arqos_0),
    .o_ram_awregion_0(o_ram_awregion_0),
    .o_ram_rready_0(o_ram_rready_0),
    .i_ram_arready_0(i_ram_arready_0),
    .i_ram_awready_0(i_ram_awready_0),
    .i_ram_wready_0(i_ram_wready_0),
    .i_ram_rdata_0(i_ram_rdata_0),
    .i_ram_rresp_0(i_ram_rresp_0),
    .i_ram_bid_0(i_ram_bid_0),
    .i_ram_bvalid_0(i_ram_bvalid_0),
    .i_ram_rlast_0(i_ram_rlast_0),
    .i_ram_rid_0(i_ram_rid_0),
    .i_ram_bresp_0(i_ram_bresp_0),
    .i_ram_rvalid_0(i_ram_rvalid_0),
    .i_ram_init_done_0(i_ram_init_done_0),
    .i_ram_init_error_0(i_ram_init_error_0),
    .AN_0(AN_0),
    .Digits_Bits_0(Digits_Bits_0),
    .bidir_0(bidir_0),
    .bidir_1(bidir_1),
    .bidir_2(bidir_2),
    .bidir_3(bidir_3),
    .bidir_4(bidir_4),
    .bidir_5(bidir_5),
    .bidir_6(bidir_6),
    .bidir_7(bidir_7),
    .bidir_8(bidir_8),
    .bidir_9(bidir_9),
    .bidir_10(bidir_10),
    .bidir_11(bidir_11),
    .bidir_12(bidir_12),
    .bidir_13(bidir_13),
    .bidir_14(bidir_14),
    .bidir_15(bidir_15),
    .bidir_16(bidir_16),
    .bidir_17(bidir_17),
    .bidir_18(bidir_18),
    .bidir_19(bidir_19),
    .bidir_20(bidir_20),
    .bidir_21(bidir_21),
    .bidir_22(bidir_22),
    .bidir_23(bidir_23),
    .bidir_24(bidir_24),
    .bidir_25(bidir_25),
    .bidir_26(bidir_26),
    .bidir_27(bidir_27),
    .bidir_28(bidir_28),
    .bidir_29(bidir_29),
    .bidir_30(bidir_30),
    .bidir_31(bidir_31)
  );

endmodule
