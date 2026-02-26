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

// The following must be inserted into your Verilog file for this
// module to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

// INST_TAG     ------ Begin cut for INSTANTIATION Template ------
BD your_instance_name (
  .clk_0(clk_0), // input wire clk_0
  .dmi_hard_reset_0(dmi_hard_reset_0), // input wire dmi_hard_reset_0
  .dmi_reg_addr_0(dmi_reg_addr_0), // input wire [6:0] dmi_reg_addr_0
  .dmi_reg_en_0(dmi_reg_en_0), // input wire dmi_reg_en_0
  .dmi_reg_rdata_0(dmi_reg_rdata_0), // output wire [31:0] dmi_reg_rdata_0
  .dmi_reg_wdata_0(dmi_reg_wdata_0), // input wire [31:0] dmi_reg_wdata_0
  .dmi_reg_wr_en_0(dmi_reg_wr_en_0), // input wire dmi_reg_wr_en_0
  .rst_0(rst_0), // input wire rst_0
  .o_ram_awqos_0(o_ram_awqos_0), // output wire [3:0] o_ram_awqos_0
  .o_ram_arcache_0(o_ram_arcache_0), // output wire [3:0] o_ram_arcache_0
  .o_ram_arvalid_0(o_ram_arvalid_0), // output wire o_ram_arvalid_0
  .o_ram_arprot_0(o_ram_arprot_0), // output wire [2:0] o_ram_arprot_0
  .o_ram_awvalid_0(o_ram_awvalid_0), // output wire o_ram_awvalid_0
  .o_ram_awcache_0(o_ram_awcache_0), // output wire [3:0] o_ram_awcache_0
  .o_ram_wdata_0(o_ram_wdata_0), // output wire [63:0] o_ram_wdata_0
  .o_ram_awprot_0(o_ram_awprot_0), // output wire [2:0] o_ram_awprot_0
  .o_ram_arid_0(o_ram_arid_0), // output wire [5:0] o_ram_arid_0
  .o_ram_wstrb_0(o_ram_wstrb_0), // output wire [7:0] o_ram_wstrb_0
  .o_ram_wlast_0(o_ram_wlast_0), // output wire o_ram_wlast_0
  .o_ram_arlock_0(o_ram_arlock_0), // output wire o_ram_arlock_0
  .o_ram_araddr_0(o_ram_araddr_0), // output wire [31:0] o_ram_araddr_0
  .o_ram_awid_0(o_ram_awid_0), // output wire [5:0] o_ram_awid_0
  .o_ram_awaddr_0(o_ram_awaddr_0), // output wire [31:0] o_ram_awaddr_0
  .o_ram_awlock_0(o_ram_awlock_0), // output wire o_ram_awlock_0
  .o_ram_wvalid_0(o_ram_wvalid_0), // output wire o_ram_wvalid_0
  .o_ram_bready_0(o_ram_bready_0), // output wire o_ram_bready_0
  .o_ram_arburst_0(o_ram_arburst_0), // output wire [1:0] o_ram_arburst_0
  .o_ram_awburst_0(o_ram_awburst_0), // output wire [1:0] o_ram_awburst_0
  .o_ram_arlen_0(o_ram_arlen_0), // output wire [7:0] o_ram_arlen_0
  .o_ram_arsize_0(o_ram_arsize_0), // output wire [2:0] o_ram_arsize_0
  .o_ram_awlen_0(o_ram_awlen_0), // output wire [7:0] o_ram_awlen_0
  .o_ram_awsize_0(o_ram_awsize_0), // output wire [2:0] o_ram_awsize_0
  .o_ram_arregion_0(o_ram_arregion_0), // output wire [3:0] o_ram_arregion_0
  .o_ram_arqos_0(o_ram_arqos_0), // output wire [3:0] o_ram_arqos_0
  .o_ram_awregion_0(o_ram_awregion_0), // output wire [3:0] o_ram_awregion_0
  .o_ram_rready_0(o_ram_rready_0), // output wire o_ram_rready_0
  .i_ram_arready_0(i_ram_arready_0), // input wire i_ram_arready_0
  .i_ram_awready_0(i_ram_awready_0), // input wire i_ram_awready_0
  .i_ram_wready_0(i_ram_wready_0), // input wire i_ram_wready_0
  .i_ram_rdata_0(i_ram_rdata_0), // input wire [63:0] i_ram_rdata_0
  .i_ram_rresp_0(i_ram_rresp_0), // input wire [1:0] i_ram_rresp_0
  .i_ram_bid_0(i_ram_bid_0), // input wire [5:0] i_ram_bid_0
  .i_ram_bvalid_0(i_ram_bvalid_0), // input wire i_ram_bvalid_0
  .i_ram_rlast_0(i_ram_rlast_0), // input wire i_ram_rlast_0
  .i_ram_rid_0(i_ram_rid_0), // input wire [5:0] i_ram_rid_0
  .i_ram_bresp_0(i_ram_bresp_0), // input wire [1:0] i_ram_bresp_0
  .i_ram_rvalid_0(i_ram_rvalid_0), // input wire i_ram_rvalid_0
  .i_ram_init_done_0(i_ram_init_done_0), // input wire i_ram_init_done_0
  .i_ram_init_error_0(i_ram_init_error_0), // input wire i_ram_init_error_0
  .AN_0(AN_0), // output wire [7:0] AN_0
  .Digits_Bits_0(Digits_Bits_0), // output wire [6:0] Digits_Bits_0
  .bidir_0(bidir_0), // output wire bidir_0
  .bidir_1(bidir_1), // output wire bidir_1
  .bidir_2(bidir_2), // output wire bidir_2
  .bidir_3(bidir_3), // output wire bidir_3
  .bidir_4(bidir_4), // output wire bidir_4
  .bidir_5(bidir_5), // output wire bidir_5
  .bidir_6(bidir_6), // output wire bidir_6
  .bidir_7(bidir_7), // output wire bidir_7
  .bidir_8(bidir_8), // output wire bidir_8
  .bidir_9(bidir_9), // output wire bidir_9
  .bidir_10(bidir_10), // output wire bidir_10
  .bidir_11(bidir_11), // output wire bidir_11
  .bidir_12(bidir_12), // output wire bidir_12
  .bidir_13(bidir_13), // output wire bidir_13
  .bidir_14(bidir_14), // output wire bidir_14
  .bidir_15(bidir_15), // output wire bidir_15
  .bidir_16(bidir_16), // output wire bidir_16
  .bidir_17(bidir_17), // output wire bidir_17
  .bidir_18(bidir_18), // output wire bidir_18
  .bidir_19(bidir_19), // output wire bidir_19
  .bidir_20(bidir_20), // output wire bidir_20
  .bidir_21(bidir_21), // output wire bidir_21
  .bidir_22(bidir_22), // output wire bidir_22
  .bidir_23(bidir_23), // output wire bidir_23
  .bidir_24(bidir_24), // output wire bidir_24
  .bidir_25(bidir_25), // output wire bidir_25
  .bidir_26(bidir_26), // output wire bidir_26
  .bidir_27(bidir_27), // output wire bidir_27
  .bidir_28(bidir_28), // output wire bidir_28
  .bidir_29(bidir_29), // output wire bidir_29
  .bidir_30(bidir_30), // output wire bidir_30
  .bidir_31(bidir_31) // output wire bidir_31
);
// INST_TAG_END ------  End cut for INSTANTIATION Template  ------

// You must compile the wrapper file BD.v when simulating
// the module, BD. When compiling the wrapper file, be sure to
// reference the Verilog simulation library.
