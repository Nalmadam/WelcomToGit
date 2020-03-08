CXX = g++
CFLAGS = -Wall
TARGET = test
INCS =-I./Calculator

SRCS = ./Calculator/Calculator.cpp
SRCS += main.cpp

all:
	$(CXX) $(CFLAGS) $(SRCS) -o $(TARGET) $(INCS) 
clean:
	rm -rf $(TARGET) *.o