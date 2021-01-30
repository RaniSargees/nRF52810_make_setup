# nRF52810_make_setup
a simple makefile setup for the nRF52810

## SETUP
You will need to install [pyOCD](https://github.com/pyocd/pyOCD) and [the GNU arm embedded toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads), as well as drop the [xpack windows build tools](https://github.com/xpack-dev-tools/windows-build-tools-xpack/releases/) into a folder in your PATH

The environment variable nRF_SDK should be set to point to the location of the nRF SDK

${nRF_SDK}/components/toolchain/gcc/Makefile.windows or Makefile.posix should be modified to match the install location and version of the GNU arm toolchain

## USAGE
`make`  
builds `main.c` and output a .hex file into the `_build` directory

`make flash`  
builds `main.c`, outputs a .hex file to `_build`, and flashes to the nRF52810 using `pyocd`

`make erase`  
erases the nRF52810 using `pyocd`

`make sdk_config`  
launches the tool to configure the sdk_config.h file. requires java

`make help`  
displays available make targets
