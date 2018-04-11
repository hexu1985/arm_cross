# Makefile

RM = rm -f
CXX = arm-linux-g++
CXXFLAGS = -Wall -g -static
INCLUDE = 
LDFLAGS = -static
LDPATH = -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/ \
		 -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/lib/gcc/arm-fsl-linux-gnueabi/4.6.2/ \
		 -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/arm-fsl-linux-gnueabi/multi-libs/armv7-a/default/lib32

PROGS =	udpcli01 udpserv01

.PHONY: all
all: $(PROGS)
	@echo "build OK!"

clean:
	@$(RM) $(PROGS) *.o
	@echo "clean OK!"

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDE)

udpcli01: udpcli01.o dg_cli.o wraplib.o wrapsock.o wrapstdio.o error.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

udpserv01: udpserv01.o dg_echo.o wrapsock.o error.o
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)


