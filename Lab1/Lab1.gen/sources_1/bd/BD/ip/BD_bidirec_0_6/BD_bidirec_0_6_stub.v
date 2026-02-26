// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2025.2 (lin64) Build 6299465 Fri Nov 14 12:34:56 MST 2025
// Date        : Tue Feb 17 08:47:55 2026
// Host        : gost-Vivobook-ASUSLaptop-X1605VA-X1605VA running 64-bit Ubuntu 24.04.4 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/gost/Desktop/Repositories/RVfpgaSoC-Labs/Lab1/Lab1.gen/sources_1/bd/BD/ip/BD_bidirec_0_6/BD_bidirec_0_6_stub.v
// Design      : BD_bidirec_0_6
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* CHECK_LICENSE_TYPE = "BD_bidirec_0_6,bidirec,{}" *) (* CORE_GENERATION_INFO = "BD_bidirec_0_6,bidirec,{x_ipProduct=Vivado 2025.2,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=bidirec,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) 
(* IP_DEFINITION_SOURCE = "module_ref" *) (* X_CORE_INFO = "bidirec,Vivado 2025.2" *) 
module BD_bidirec_0_6(oe, inp, outp, bidir)
/* synthesis syn_black_box black_box_pad_pin="oe,inp,outp,bidir" */;
  input oe;
  input inp;
  output outp;
  output bidir;
endmodule
