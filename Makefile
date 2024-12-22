# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -Iinclude

# Target executable
TARGET = main

# Source files
SRCS = src/main.cpp src/sudoku.cpp

# Build the target
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Clean the build directory
clean:
	rm -f $(TARGET)

.PHONY: clean

