# Explicacion del Makefile de Verilator

Este documento describe para que se usa el archivo [Makefile](./Makefile), que ocurre cuando se ejecuta `make`, que dependencias arrastra y en que casos puede fallar.

## Contexto general

El directorio [verilatorSIM](.) contiene la infraestructura para simular en software el SoC definido en [../src/rvfpgasim.v](../src/rvfpgasim.v). En lugar de sintetizar el hardware para FPGA, se usa **Verilator** para traducir el diseño HDL a C++ y luego compilarlo como un ejecutable nativo de Linux.

Este flujo se usa normalmente para:

- Validar el comportamiento del SoC sin cargarlo en una FPGA.
- Ejecutar pruebas mas rapido que en hardware real.
- Generar trazas para depuracion con GTKWave.
- Integrar el testbench C/C++ con el diseño HDL.

## Archivos principales involucrados

- [Makefile](./Makefile): coordina la generacion y compilacion del simulador.
- [swervolf_0.7.vc](./swervolf_0.7.vc): lista de archivos HDL, includes, defines, modulo top y fuentes C/C++ auxiliares.
- [tb.cpp](./tb.cpp): testbench principal en C++.
- [../src/rvfpgasim.v](../src/rvfpgasim.v): modulo top del sistema a simular.
- [../gtkwave_signals.tcl](../gtkwave_signals.tcl): apoyo para inspeccion de señales en GTKWave.

## Que hace el Makefile

El contenido de [Makefile](./Makefile) define tres ideas principales:

1. El modulo top de la simulacion es `rvfpgasim`.
2. La descripcion completa del build de Verilator esta en [swervolf_0.7.vc](./swervolf_0.7.vc).
3. El binario final esperado se llama `Vrvfpgasim`.

### Variables importantes

```make
TOP_MODULE = rvfpgasim
VC_FILE = swervolf_0.7.vc
VERILATOR_OPTIONS = --trace -Wno-fatal
VERILATOR_OPTIONS += -CFLAGS "-std=c++11"
VERILATOR_OPTIONS += -CFLAGS "-include limits"
```

Esto significa:

- `TOP_MODULE`: nombre del modulo HDL principal.
- `VC_FILE`: archivo que Verilator usa como lista de entrada.
- `--trace`: habilita generacion de trazas para depuracion.
- `-Wno-fatal`: evita que ciertos warnings detengan el proceso.
- `-std=c++11`: compila el lado C++ usando C++11.
- `-include limits`: fuerza la inclusion global de `<limits>` en la compilacion C++.

### Seleccion de Verilator

```make
ifeq ($(VERILATOR_ROOT),)
VERILATOR ?= verilator
else
VERILATOR ?= $(VERILATOR_ROOT)/bin/verilator
endif
```

Esta logica permite dos escenarios:

- Si `VERILATOR_ROOT` no esta definido, usa `verilator` desde el `PATH` del sistema.
- Si `VERILATOR_ROOT` existe, usa la instalacion ubicada en `$(VERILATOR_ROOT)/bin/verilator`.

Esto es util cuando se trabaja con una instalacion local o una version especifica de Verilator.

## Que pasa cuando se corre `make`

Si ejecutas `make` dentro de [verilatorSIM](.), el target por defecto es `Vrvfpgasim`.

```make
V$(TOP_MODULE): V$(TOP_MODULE).mk
	$(MAKE) $(MAKE_OPTIONS) -f $<
```

Como `TOP_MODULE` vale `rvfpgasim`, el target real es:

```make
Vrvfpgasim: Vrvfpgasim.mk
	$(MAKE) $(MAKE_OPTIONS) -f Vrvfpgasim.mk
```

El flujo real ocurre en dos etapas.

### Etapa 1: Verilator genera codigo C++ y un Makefile auxiliar

Antes de poder compilar `Vrvfpgasim`, Make necesita el archivo `Vrvfpgasim.mk`:

```make
V$(TOP_MODULE).mk:
	$(VERILATOR) -f $(VC_FILE) $(VERILATOR_OPTIONS)
```

Eso expande a un comando conceptualmente equivalente a:

```bash
verilator -f swervolf_0.7.vc --trace -Wno-fatal -CFLAGS "-std=c++11" -CFLAGS "-include limits"
```

En esta etapa, Verilator hace lo siguiente:

- Lee [swervolf_0.7.vc](./swervolf_0.7.vc).
- Resuelve los `+incdir+` usados por los archivos Verilog/SystemVerilog.
- Analiza todos los fuentes HDL del SoC.
- Identifica el modulo top definido como `rvfpgasim`.
- Integra el testbench C/C++ indicado por `--exe`.
- Genera multiples archivos `.cpp`, `.h`, `.d` y el Makefile auxiliar `Vrvfpgasim.mk`.

Entre los archivos HDL incluidos en [swervolf_0.7.vc](./swervolf_0.7.vc) aparecen, por ejemplo:

- El core SweRV y sus bloques bajo [../src/SweRVolfSoC/SweRVEh1CoreComplex](../src/SweRVolfSoC/SweRVEh1CoreComplex).
- Interconexion AXI bajo [../src/SweRVolfSoC/Interconnect/AxiInterconnect](../src/SweRVolfSoC/Interconnect/AxiInterconnect).
- Interconexion Wishbone bajo [../src/SweRVolfSoC/Interconnect/WishboneInterconnect](../src/SweRVolfSoC/Interconnect/WishboneInterconnect).
- Perifericos UART, SPI, GPIO y PTC bajo [../src/SweRVolfSoC/Peripherals](../src/SweRVolfSoC/Peripherals).
- El wrapper JTAG bajo [../src/OtherSources/jtag_vpi_0-r5](../src/OtherSources/jtag_vpi_0-r5).

Tambien se incluyen fuentes C/C++ adicionales:

- [../src/OtherSources/jtag_vpi_0-r5/jtag_common.c](../src/OtherSources/jtag_vpi_0-r5/jtag_common.c)
- [../src/OtherSources/jtag_vpi_0-r5/jtagServer.cpp](../src/OtherSources/jtag_vpi_0-r5/jtagServer.cpp)
- [tb.cpp](./tb.cpp)

### Etapa 2: Make compila el simulador final

Una vez generado `Vrvfpgasim.mk`, el Makefile principal invoca:

```bash
make -f Vrvfpgasim.mk
```

Ese Makefile auxiliar compila:

- El codigo C++ generado por Verilator.
- El testbench [tb.cpp](./tb.cpp).
- Los archivos C/C++ auxiliares de JTAG.

El resultado final es el ejecutable:

- `Vrvfpgasim`

Ese binario es el simulador del SoC.

## Para que se usa este Makefile

Este Makefile no sintetiza hardware ni genera un bitstream. Su objetivo es construir un simulador ejecutable del sistema descrito en HDL.

Se usa para:

- Compilar una simulacion funcional del diseño.
- Verificar integracion entre CPU, memoria, buses y perifericos.
- Ejecutar software embebido sobre el SoC simulado.
- Depurar eventos y señales usando trazas.
- Probar cambios en el RTL sin pasar por el flujo completo de Vivado.

En otras palabras, es una pieza del flujo de validacion y depuracion, no del flujo de implementacion sobre FPGA.

## Que genera el proceso

Despues de correr `make`, pueden aparecer archivos como:

- `Vrvfpgasim`
- `Vrvfpgasim.mk`
- `Vrvfpgasim__Syms.cpp`
- `Vrvfpgasim__Dpi.cpp`
- `Vrvfpgasim__Trace__1.cpp`
- archivos `.o`
- archivos `.d`

Muchos de esos artefactos ya se observan en este directorio [verilatorSIM](.).

## Casos en los que podria no funcionar

### 1. Verilator no esta instalado o no esta en el PATH

Si `VERILATOR_ROOT` no esta definido, el Makefile intenta ejecutar simplemente `verilator`. Si ese binario no existe, el build falla inmediatamente.

Escenario tipico:

```bash
make: verilator: No such file or directory
```

### 2. `VERILATOR_ROOT` apunta a una instalacion incorrecta

Si la variable de entorno existe pero el binario real no esta en `$(VERILATOR_ROOT)/bin/verilator`, el comando tambien falla.

### 3. Se ejecuta `make` desde otro directorio

Los paths de [swervolf_0.7.vc](./swervolf_0.7.vc) son relativos, por ejemplo `../src/...`. Si `make` se corre fuera de [verilatorSIM](.), Verilator puede no encontrar los archivos fuente.

La ejecucion correcta esperada es desde:

- [verilatorSIM](.)

### 4. Faltan archivos HDL del SoC

El archivo [swervolf_0.7.vc](./swervolf_0.7.vc) referencia una gran cantidad de archivos bajo:

- [../src/SweRVolfSoC](../src/SweRVolfSoC)
- [../src/OtherSources](../src/OtherSources)
- [../src/LiteDRAM](../src/LiteDRAM)

Si el arbol de fuentes esta incompleto, mal copiado o faltan submodulos, Verilator no podra armar el modelo.

### 5. Faltan includes requeridos

El `.vc` define multiples `+incdir+` y `-CFLAGS -I...`. Si alguno de esos directorios no existe o no contiene los headers esperados, pueden aparecer errores de preprocesado HDL o de compilacion C++.

### 6. El compilador C++ no soporta bien C++11

El build fuerza `-std=c++11`. En una distro moderna esto no suele ser problema, pero en toolchains antiguas puede fallar.

### 7. Cambios de version de Verilator

No todos los proyectos Verilator son estables entre versiones. Un proyecto preparado para una version determinada puede fallar en otra si cambian warnings, flags aceptados o detalles del codigo generado.

### 8. Warnings severos o errores reales en el RTL

La opcion `-Wno-fatal` evita que ciertos warnings aborten el flujo, pero no oculta errores reales de sintaxis, modulos faltantes, puertos inconsistentes o problemas de elaboracion.

### 9. Dependencias auxiliares del testbench ausentes

Si faltan [tb.cpp](./tb.cpp), [../src/OtherSources/jtag_vpi_0-r5/jtag_common.c](../src/OtherSources/jtag_vpi_0-r5/jtag_common.c) o [../src/OtherSources/jtag_vpi_0-r5/jtagServer.cpp](../src/OtherSources/jtag_vpi_0-r5/jtagServer.cpp), la fase de enlazado del ejecutable puede fallar.

### 10. El binario puede compilar pero no comportarse como se espera

Aunque `make` termine bien, la simulacion puede no ser util si:

- el testbench no carga el software esperado,
- faltan archivos de memoria o imagenes de programa,
- el entorno de ejecucion de JTAG no esta configurado,
- o el usuario espera una simulacion de timing cuando este flujo es principalmente funcional.

## Que hace `make clean`

El target `clean` ejecuta:

```make
clean :
	-rm V$(TOP_MODULE)*
	-rm *.o
	-rm *.d
```

Eso intenta borrar:

- el ejecutable `Vrvfpgasim`,
- el Makefile generado `Vrvfpgasim.mk`,
- los archivos generados por Verilator que empiezan con `Vrvfpgasim`,
- objetos `.o`,
- dependencias `.d`.

El prefijo `-` delante de `rm` indica que Make ignora errores de borrado. Eso evita que `clean` falle si algun archivo no existe.

## Resumen practico

Cuando corres `make` en [verilatorSIM](.), el flujo esperado es este:

1. Verilator lee [swervolf_0.7.vc](./swervolf_0.7.vc).
2. Convierte el SoC descrito en HDL a codigo C++.
3. Genera `Vrvfpgasim.mk` y varios archivos auxiliares.
4. Se invoca un segundo `make` sobre ese Makefile generado.
5. Se compila el simulador ejecutable `Vrvfpgasim`.

## Conclusión

El archivo [Makefile](./Makefile) es un lanzador minimo para construir un simulador Verilator del SoC [../src/rvfpgasim.v](../src/rvfpgasim.v). Su trabajo real depende del archivo [swervolf_0.7.vc](./swervolf_0.7.vc), que concentra la definicion del build: fuentes HDL, includes, defines, top module y testbench.

Si todo esta bien instalado y las rutas relativas son validas, `make` deberia regenerar y compilar el simulador. Si algo falla, casi siempre el problema esta en una de estas categorias: Verilator no disponible, rutas incorrectas, fuentes faltantes o incompatibilidad de toolchain.