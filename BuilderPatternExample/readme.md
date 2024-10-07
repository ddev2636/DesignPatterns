# Builder Design Pattern in C++

## Overview

The Builder Design Pattern is a creational pattern that allows for the construction of complex objects step by step. This pattern is particularly useful when an object needs to be created with many optional parts.

## Components

The following components are involved in this implementation of the Builder Design Pattern:

1. **Client (Main Function)**: 
   - Initiates the process and creates a `Director` object.
   - Sets a `Concrete Builder` (either `GamingComputerBuilder` or `OfficeComputerBuilder`).

2. **Director**: 
   - Manages the construction process by calling methods of the builder in a specific order.

3. **Abstract Builder (ComputerBuilder)**: 
   - Declares methods for creating parts of the product.
   - Defines the steps required to create various components (CPU, GPU, RAM, Storage).

4. **Concrete Builders**:
   - **GamingComputerBuilder**: Implements the abstract builder to specify the components for a gaming computer.
   - **OfficeComputerBuilder**: Implements the abstract builder to specify the components for an office computer.

5. **Product (Computer)**: 
   - Represents the final product with methods to set various parts and display specifications.


## Usage

To compile and run the code, follow these steps:

1. Clone the repository.
2. Navigate to the project directory.
3. Run `make` to build the project.
4. Execute the program using `./builderPattern`.
