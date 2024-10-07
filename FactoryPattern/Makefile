# Makefile for Factory Design Pattern Example

# Specify the compiler
CXX = g++

# Compiler flags:
# -Wall: Enable all warnings
# -Wextra: Enable additional warnings
# -I./include: Include the 'include' directory for header files
CXXFLAGS = -Wall -Wextra -I./include

# Source files to compile
SRC = main.cpp src/Circle.cpp src/Square.cpp src/ShapeFactory.cpp

# Object files are generated from the source files by replacing .cpp with .o
OBJ = $(SRC:.cpp=.o)

# Default target to build the executable
all: factory_pattern

# Link object files to create the final executable
factory_pattern: $(OBJ)
	$(CXX) $(OBJ) -o factory_pattern

# Rule to compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean target to remove object files and the executable
clean:
	rm -f $(OBJ) factory_pattern
