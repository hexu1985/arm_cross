
RM = rm -f
CXX = arm-linux-g++
CXXFLAGS = -Wall -g -static
INCLUDES = -I/usr/local/arm-boost/include
LDFLAGS = -lboost_chrono -lboost_system -lrt
LDPATH = -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/bin/ \
		 -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/lib/gcc/arm-fsl-linux-gnueabi/4.6.2/ \
		 -L/usr/local/arm/gcc-4.6.2-glibc-2.13-linaro-multilib-2011.12/fsl-linaro-toolchain/arm-fsl-linux-gnueabi/multi-libs/armv7-a/default/lib32 \
		 -L/usr/local/arm-boost/lib

SOURCES = $(shell ls *.cpp)
PROGS = $(SOURCES:%.cpp=%)

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
