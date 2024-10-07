# Singleton Pattern Example

## Overview

This project demonstrates the implementation of the **Singleton Design Pattern** in C++. The Singleton pattern ensures that a class has only one instance and provides a global point of access to that instance. This is particularly useful when exactly one object is needed to coordinate actions across the system.

## Singleton Design Pattern

### What is Singleton?

The Singleton pattern is a software design pattern that restricts the instantiation of a class to a single instance. This can be useful when exactly one object is needed to coordinate actions across the system.

### Key Features

- **Controlled Access**: The Singleton pattern provides a controlled access point to the single instance.
- **Lazy Initialization**: The instance is created only when it is needed for the first time.
- **Thread Safety**: The pattern can be made thread-safe to ensure that multiple threads do not create multiple instances of the singleton.

### Implementation Details

In this project, the Singleton class is implemented with the following features:

- **Private Constructor**: Prevents instantiation from outside the class.
- **Deleted Copy Constructor and Assignment Operator**: Ensures that the singleton instance cannot be copied or assigned.
- **Static Method `getInstance()`**: Provides global access to the instance while ensuring thread safety.
- **Static Counter**: A variable to track the number of instances created.

## Build Instructions

To build the project, follow these steps:

1. Open a terminal and navigate to the project directory.

2. Run the following command to compile the project:

   ```bash
   make

