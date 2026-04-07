# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vveerwolf_core_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vveerwolf_core_tb \
	Vveerwolf_core_tb___024root__DepSet_h0e723f3d__0 \
	Vveerwolf_core_tb___024root__DepSet_h1d6dfb30__0 \
	Vveerwolf_core_tb_veerwolf_core_tb__DepSet_h0750cd08__0 \
	Vveerwolf_core_tb_veerwolf_core_tb__DepSet_h164bad03__0 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_h22397d76__0 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_h22397d76__1 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_h22397d76__2 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__0 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__1 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__2 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__3 \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__4 \
	Vveerwolf_core_tb_wb_mem_wrapper__M1000__DepSet_h05036cce__0 \
	Vveerwolf_core_tb_dpram64__S1000__DepSet_h654c967d__0 \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_ha0e0bd7b__0 \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_hef43b0ea__0 \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_h73fb7d72__0 \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_h78e2c63d__0 \
	Vveerwolf_core_tb_axi_mux__pi4__DepSet_h0d9cf00b__0 \
	Vveerwolf_core_tb_axi_mux__pi4__DepSet_h2107c002__0 \
	Vveerwolf_core_tb_axi_demux_id_counters__pi5__DepSet_h5fa0b378__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vveerwolf_core_tb__ConstPool_0 \
	Vveerwolf_core_tb__ConstPool_1 \
	Vveerwolf_core_tb___024root__Slow \
	Vveerwolf_core_tb___024root__DepSet_h0e723f3d__0__Slow \
	Vveerwolf_core_tb___024root__DepSet_h1d6dfb30__0__Slow \
	Vveerwolf_core_tb_veerwolf_core_tb__Slow \
	Vveerwolf_core_tb_veerwolf_core_tb__DepSet_h0750cd08__0__Slow \
	Vveerwolf_core_tb_veerwolf_core_tb__DepSet_h164bad03__0__Slow \
	Vveerwolf_core_tb___024unit__Slow \
	Vveerwolf_core_tb___024unit__DepSet_h41eb52cf__0__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_h22397d76__0__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_h22397d76__1__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__0__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__1__Slow \
	Vveerwolf_core_tb_veerwolf_core__C2faf080__DepSet_hf1a53d75__2__Slow \
	Vveerwolf_core_tb_wb_mem_wrapper__M1000__Slow \
	Vveerwolf_core_tb_wb_mem_wrapper__M1000__DepSet_h189f4cbd__0__Slow \
	Vveerwolf_core_tb_dpram64__S1000__Slow \
	Vveerwolf_core_tb_dpram64__S1000__DepSet_hb8576270__0__Slow \
	Vveerwolf_core_tb_axi_demux__pi2__Slow \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_ha0e0bd7b__0__Slow \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_h73fb7d72__0__Slow \
	Vveerwolf_core_tb_axi_demux__pi2__DepSet_h78e2c63d__0__Slow \
	Vveerwolf_core_tb_axi_mux__pi4__Slow \
	Vveerwolf_core_tb_axi_mux__pi4__DepSet_h0d9cf00b__0__Slow \
	Vveerwolf_core_tb_axi_mux__pi4__DepSet_h2107c002__0__Slow \
	Vveerwolf_core_tb_axi_demux_id_counters__pi5__Slow \
	Vveerwolf_core_tb_axi_demux_id_counters__pi5__DepSet_h5fa0b378__0__Slow \
	Vveerwolf_core_tb_axi_demux_id_counters__pi5__DepSet_hef3b7f73__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vveerwolf_core_tb__Dpi \
	Vveerwolf_core_tb__Trace__0 \
	Vveerwolf_core_tb__Trace__1 \
	Vveerwolf_core_tb__Trace__2 \
	Vveerwolf_core_tb__Trace__3 \
	Vveerwolf_core_tb__Trace__4 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vveerwolf_core_tb__Syms \
	Vveerwolf_core_tb__Trace__0__Slow \
	Vveerwolf_core_tb__TraceDecls__0__Slow \
	Vveerwolf_core_tb__Trace__1__Slow \
	Vveerwolf_core_tb__Trace__2__Slow \
	Vveerwolf_core_tb__Trace__3__Slow \
	Vveerwolf_core_tb__Trace__4__Slow \
	Vveerwolf_core_tb__Trace__5__Slow \
	Vveerwolf_core_tb__Trace__6__Slow \
	Vveerwolf_core_tb__Trace__7__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
