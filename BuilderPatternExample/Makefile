# Set the C++ compiler to g++
CXX = g++

# Compiler flags:
# -std=c++14: Use the C++14 standard
# -I./include: Add the 'include' directory to the list of directories to search for header files
CXXFLAGS = -std=c++14 -I./include

# List of source files (.cpp)
SRC = ./src/Computer.cpp ./src/GamingComputerBuilder.cpp ./src/OfficeComputerBuilder.cpp ./src/Director.cpp ./src/main.cpp

# List of object files (.o)
# This converts each .cpp file in SRC to its corresponding .o file by replacing .cpp with .o
OBJ = $(SRC:.cpp=.o)

# Default target that builds the executable
#When make is run without arguments, it executes the first target it finds in the Makefile.
all: builderPattern

# Target to build the 'builderPattern' executable
# The executable depends on all the object files $(OBJ)
builderPattern: $(OBJ)
	# Compile the object files into the final executable called 'builderPattern'
	$(CXX) $(CXXFLAGS) -o builderPattern $(OBJ)

# Target to clean up the build directory
# Removes all object files and the final executable
clean:
	# Remove object files and the executable without prompting
	rm -f $(OBJ) builderPattern
