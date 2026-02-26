-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2026 Advanced Micro Devices, Inc. All Rights Reserved.
-- -------------------------------------------------------------------------------
-- This file contains confidential and proprietary information
-- of AMD and is protected under U.S. and international copyright
-- and other intellectual property laws.
--
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- AMD, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND AMD HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) AMD shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or AMD had been advised of the
-- possibility of the same.
--
-- CRITICAL APPLICATIONS
-- AMD products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of AMD products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
--
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
--
-- DO NOT MODIFY THIS FILE.

-- MODULE VLNV: amd.com:blockdesign:BD:1.0

-- The following code must appear in the VHDL architecture header.

-- COMP_TAG     ------ Begin cut for COMPONENT Declaration ------
COMPONENT BD
  PORT (
    clk_0 : IN STD_LOGIC;
    dmi_hard_reset_0 : IN STD_LOGIC;
    dmi_reg_addr_0 : IN STD_LOGIC_VECTOR(6 DOWNTO 0);
    dmi_reg_en_0 : IN STD_LOGIC;
    dmi_reg_rdata_0 : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    dmi_reg_wdata_0 : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    dmi_reg_wr_en_0 : IN STD_LOGIC;
    rst_0 : IN STD_LOGIC;
    o_ram_awqos_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_arcache_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_arvalid_0 : OUT STD_LOGIC;
    o_ram_arprot_0 : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    o_ram_awvalid_0 : OUT STD_LOGIC;
    o_ram_awcache_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_wdata_0 : OUT STD_LOGIC_VECTOR(63 DOWNTO 0);
    o_ram_awprot_0 : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    o_ram_arid_0 : OUT STD_LOGIC_VECTOR(5 DOWNTO 0);
    o_ram_wstrb_0 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    o_ram_wlast_0 : OUT STD_LOGIC;
    o_ram_arlock_0 : OUT STD_LOGIC;
    o_ram_araddr_0 : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    o_ram_awid_0 : OUT STD_LOGIC_VECTOR(5 DOWNTO 0);
    o_ram_awaddr_0 : OUT STD_LOGIC_VECTOR(31 DOWNTO 0);
    o_ram_awlock_0 : OUT STD_LOGIC;
    o_ram_wvalid_0 : OUT STD_LOGIC;
    o_ram_bready_0 : OUT STD_LOGIC;
    o_ram_arburst_0 : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    o_ram_awburst_0 : OUT STD_LOGIC_VECTOR(1 DOWNTO 0);
    o_ram_arlen_0 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    o_ram_arsize_0 : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    o_ram_awlen_0 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    o_ram_awsize_0 : OUT STD_LOGIC_VECTOR(2 DOWNTO 0);
    o_ram_arregion_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_arqos_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_awregion_0 : OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
    o_ram_rready_0 : OUT STD_LOGIC;
    i_ram_arready_0 : IN STD_LOGIC;
    i_ram_awready_0 : IN STD_LOGIC;
    i_ram_wready_0 : IN STD_LOGIC;
    i_ram_rdata_0 : IN STD_LOGIC_VECTOR(63 DOWNTO 0);
    i_ram_rresp_0 : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    i_ram_bid_0 : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    i_ram_bvalid_0 : IN STD_LOGIC;
    i_ram_rlast_0 : IN STD_LOGIC;
    i_ram_rid_0 : IN STD_LOGIC_VECTOR(5 DOWNTO 0);
    i_ram_bresp_0 : IN STD_LOGIC_VECTOR(1 DOWNTO 0);
    i_ram_rvalid_0 : IN STD_LOGIC;
    i_ram_init_done_0 : IN STD_LOGIC;
    i_ram_init_error_0 : IN STD_LOGIC;
    AN_0 : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    Digits_Bits_0 : OUT STD_LOGIC_VECTOR(6 DOWNTO 0);
    bidir_0 : OUT STD_LOGIC;
    bidir_1 : OUT STD_LOGIC;
    bidir_2 : OUT STD_LOGIC;
    bidir_3 : OUT STD_LOGIC;
    bidir_4 : OUT STD_LOGIC;
    bidir_5 : OUT STD_LOGIC;
    bidir_6 : OUT STD_LOGIC;
    bidir_7 : OUT STD_LOGIC;
    bidir_8 : OUT STD_LOGIC;
    bidir_9 : OUT STD_LOGIC;
    bidir_10 : OUT STD_LOGIC;
    bidir_11 : OUT STD_LOGIC;
    bidir_12 : OUT STD_LOGIC;
    bidir_13 : OUT STD_LOGIC;
    bidir_14 : OUT STD_LOGIC;
    bidir_15 : OUT STD_LOGIC;
    bidir_16 : OUT STD_LOGIC;
    bidir_17 : OUT STD_LOGIC;
    bidir_18 : OUT STD_LOGIC;
    bidir_19 : OUT STD_LOGIC;
    bidir_20 : OUT STD_LOGIC;
    bidir_21 : OUT STD_LOGIC;
    bidir_22 : OUT STD_LOGIC;
    bidir_23 : OUT STD_LOGIC;
    bidir_24 : OUT STD_LOGIC;
    bidir_25 : OUT STD_LOGIC;
    bidir_26 : OUT STD_LOGIC;
    bidir_27 : OUT STD_LOGIC;
    bidir_28 : OUT STD_LOGIC;
    bidir_29 : OUT STD_LOGIC;
    bidir_30 : OUT STD_LOGIC;
    bidir_31 : OUT STD_LOGIC
  );
END COMPONENT;
-- COMP_TAG_END ------  End cut for COMPONENT Declaration  ------

-- The following code must appear in the VHDL architecture
-- body. Substitute your own instance name and net names.

-- INST_TAG     ------ Begin cut for INSTANTIATION Template ------
your_instance_name : BD
  PORT MAP (
    clk_0 => clk_0,
    dmi_hard_reset_0 => dmi_hard_reset_0,
    dmi_reg_addr_0 => dmi_reg_addr_0,
    dmi_reg_en_0 => dmi_reg_en_0,
    dmi_reg_rdata_0 => dmi_reg_rdata_0,
    dmi_reg_wdata_0 => dmi_reg_wdata_0,
    dmi_reg_wr_en_0 => dmi_reg_wr_en_0,
    rst_0 => rst_0,
    o_ram_awqos_0 => o_ram_awqos_0,
    o_ram_arcache_0 => o_ram_arcache_0,
    o_ram_arvalid_0 => o_ram_arvalid_0,
    o_ram_arprot_0 => o_ram_arprot_0,
    o_ram_awvalid_0 => o_ram_awvalid_0,
    o_ram_awcache_0 => o_ram_awcache_0,
    o_ram_wdata_0 => o_ram_wdata_0,
    o_ram_awprot_0 => o_ram_awprot_0,
    o_ram_arid_0 => o_ram_arid_0,
    o_ram_wstrb_0 => o_ram_wstrb_0,
    o_ram_wlast_0 => o_ram_wlast_0,
    o_ram_arlock_0 => o_ram_arlock_0,
    o_ram_araddr_0 => o_ram_araddr_0,
    o_ram_awid_0 => o_ram_awid_0,
    o_ram_awaddr_0 => o_ram_awaddr_0,
    o_ram_awlock_0 => o_ram_awlock_0,
    o_ram_wvalid_0 => o_ram_wvalid_0,
    o_ram_bready_0 => o_ram_bready_0,
    o_ram_arburst_0 => o_ram_arburst_0,
    o_ram_awburst_0 => o_ram_awburst_0,
    o_ram_arlen_0 => o_ram_arlen_0,
    o_ram_arsize_0 => o_ram_arsize_0,
    o_ram_awlen_0 => o_ram_awlen_0,
    o_ram_awsize_0 => o_ram_awsize_0,
    o_ram_arregion_0 => o_ram_arregion_0,
    o_ram_arqos_0 => o_ram_arqos_0,
    o_ram_awregion_0 => o_ram_awregion_0,
    o_ram_rready_0 => o_ram_rready_0,
    i_ram_arready_0 => i_ram_arready_0,
    i_ram_awready_0 => i_ram_awready_0,
    i_ram_wready_0 => i_ram_wready_0,
    i_ram_rdata_0 => i_ram_rdata_0,
    i_ram_rresp_0 => i_ram_rresp_0,
    i_ram_bid_0 => i_ram_bid_0,
    i_ram_bvalid_0 => i_ram_bvalid_0,
    i_ram_rlast_0 => i_ram_rlast_0,
    i_ram_rid_0 => i_ram_rid_0,
    i_ram_bresp_0 => i_ram_bresp_0,
    i_ram_rvalid_0 => i_ram_rvalid_0,
    i_ram_init_done_0 => i_ram_init_done_0,
    i_ram_init_error_0 => i_ram_init_error_0,
    AN_0 => AN_0,
    Digits_Bits_0 => Digits_Bits_0,
    bidir_0 => bidir_0,
    bidir_1 => bidir_1,
    bidir_2 => bidir_2,
    bidir_3 => bidir_3,
    bidir_4 => bidir_4,
    bidir_5 => bidir_5,
    bidir_6 => bidir_6,
    bidir_7 => bidir_7,
    bidir_8 => bidir_8,
    bidir_9 => bidir_9,
    bidir_10 => bidir_10,
    bidir_11 => bidir_11,
    bidir_12 => bidir_12,
    bidir_13 => bidir_13,
    bidir_14 => bidir_14,
    bidir_15 => bidir_15,
    bidir_16 => bidir_16,
    bidir_17 => bidir_17,
    bidir_18 => bidir_18,
    bidir_19 => bidir_19,
    bidir_20 => bidir_20,
    bidir_21 => bidir_21,
    bidir_22 => bidir_22,
    bidir_23 => bidir_23,
    bidir_24 => bidir_24,
    bidir_25 => bidir_25,
    bidir_26 => bidir_26,
    bidir_27 => bidir_27,
    bidir_28 => bidir_28,
    bidir_29 => bidir_29,
    bidir_30 => bidir_30,
    bidir_31 => bidir_31
  );
-- INST_TAG_END ------  End cut for INSTANTIATION Template  ------

-- You must compile the wrapper file BD.vhd when simulating
-- the module, BD. When compiling the wrapper file, be sure to
-- reference the VHDL simulation library.
