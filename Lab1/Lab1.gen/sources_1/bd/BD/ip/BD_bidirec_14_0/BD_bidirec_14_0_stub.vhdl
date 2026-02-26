-- Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
-- Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2025.2 (lin64) Build 6299465 Fri Nov 14 12:34:56 MST 2025
-- Date        : Tue Feb 17 08:48:44 2026
-- Host        : gost-Vivobook-ASUSLaptop-X1605VA-X1605VA running 64-bit Ubuntu 24.04.4 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/gost/Desktop/Repositories/RVfpgaSoC-Labs/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_bidirec_14_0/BD_bidirec_14_0_stub.vhdl
-- Design      : BD_bidirec_14_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity BD_bidirec_14_0 is
  Port ( 
    oe : in STD_LOGIC;
    inp : in STD_LOGIC;
    outp : out STD_LOGIC;
    bidir : out STD_LOGIC
  );

  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of BD_bidirec_14_0 : entity is "BD_bidirec_14_0,bidirec,{}";
  attribute CORE_GENERATION_INFO : string;
  attribute CORE_GENERATION_INFO of BD_bidirec_14_0 : entity is "BD_bidirec_14_0,bidirec,{x_ipProduct=Vivado 2025.2,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=bidirec,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of BD_bidirec_14_0 : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of BD_bidirec_14_0 : entity is "module_ref";
end BD_bidirec_14_0;

architecture stub of BD_bidirec_14_0 is
  attribute syn_black_box : boolean;
  attribute black_box_pad_pin : string;
  attribute syn_black_box of stub : architecture is true;
  attribute black_box_pad_pin of stub : architecture is "oe,inp,outp,bidir";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of stub : architecture is "bidirec,Vivado 2025.2";
begin
end;
