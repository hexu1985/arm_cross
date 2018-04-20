
RM = rm -f
CXX = arm-linux-g++
CXXFLAGS = -Wall -g -static
INCLUDES = -I/usr/local/arm-boost/include
LDFLAGS = -lboost_chrono -lboost_system -lrt
LDPATH = -L/usr/local/arm-boost/lib

SOURCES = $(shell ls *.cpp)
PROGS = $(SOURCES:%.cpp=%)

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

%: %.cpp
	$(CXX) -o $@ $(CXXFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
