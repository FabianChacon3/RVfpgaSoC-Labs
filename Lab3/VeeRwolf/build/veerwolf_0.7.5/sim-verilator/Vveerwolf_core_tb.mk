# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vveerwolf_core_tb.mk

default: Vveerwolf_core_tb

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vveerwolf_core_tb
# Module prefix (from --prefix)
VM_MODPREFIX = Vveerwolf_core_tb
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Isrc/veerwolf-veer_el2_default_config_0.7.5 \
	-Isrc/jtag_vpi_0-r5 \
	-Isrc/pulp-platform.org__common_cells_1.20.0/include \
	-Isrc/uart16550_1.5.5-r1/rtl/verilog \
	-Isrc/wb_common_1.0.3 \
	-Isrc/pulp-platform.org__axi_0.25.0/include \
	-Isrc/veerwolf-intercon_0.7.5 \
	-Isrc/veerwolf-wb_intercon_0.7.5 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	jtagServer \
	jtag_common \
	tb \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	src/jtag_vpi_0-r5 \
	src/veerwolf_0.7.5/tb \


### Default rules...
# Include list of all generated classes
include Vveerwolf_core_tb_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

jtagServer.o: src/jtag_vpi_0-r5/jtagServer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
jtag_common.o: src/jtag_vpi_0-r5/jtag_common.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
tb.o: src/veerwolf_0.7.5/tb/tb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vveerwolf_core_tb: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
