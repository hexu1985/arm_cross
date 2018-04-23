
RM = rm -f
CXX = arm-linux-g++
CXXFLAGS = -Wall -g -static
INCLUDES = -I/usr/local/arm-glog/include
LDFLAGS = -static -lglog -lpthread
LDPATH = -L/usr/local/arm-glog/lib

SOURCES = $(shell ls *.cpp)
PROGS = $(SOURCES:%.cpp=%)

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS) log/*

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
