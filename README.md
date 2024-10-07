# Design Patterns Repository

## Overview

This repository contains implementations of various design patterns in software engineering. Design patterns are typical solutions to common problems in software design. They represent best practices and can help improve code readability, maintainability, and scalability.

## Table of Contents

1. [Creational Patterns](#creational-patterns)
   - [Singleton](#singleton)
   - [Factory Method](#factory-method)
   - [Abstract Factory](#abstract-factory)
   - [Builder](#builder)
   - [Prototype](#prototype)
   
2. [Structural Patterns](#structural-patterns)
   - [Adapter](#adapter)
   - [Decorator](#decorator)
   - [Facade](#facade)
   - [Composite](#composite)
   - [Proxy](#proxy)
   
3. [Behavioral Patterns](#behavioral-patterns)
   - [Observer](#observer)
   - [Strategy](#strategy)
   - [Command](#command)
   - [Iterator](#iterator)
   - [State](#state)

---

## Creational Patterns

Creational patterns deal with object creation mechanisms, trying to create objects in a manner suitable to the situation.

### Singleton
- **Description**: Ensures a class has only one instance and provides a global point of access to it.
- **Use Case**: Used when exactly one object is needed to coordinate actions across the system.
- **Example**: Database connection pool.

### Factory Method
- **Description**: Defines an interface for creating an object but allows subclasses to alter the type of objects that will be created.
- **Use Case**: Used when a class cannot anticipate the type of objects it needs to create.
- **Example**: A logistics application that creates different types of transport objects (e.g., Truck, Ship).

### Abstract Factory
- **Description**: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.
- **Use Case**: Used when the system needs to be independent of how its objects are created.
- **Example**: GUI applications that need to support multiple themes.

### Builder
- **Description**: Separates the construction of a complex object from its representation so that the same construction process can create different representations.
- **Use Case**: Used when an object needs to be created step by step and requires different representations.
- **Example**: Creating a complex meal with multiple courses.

### Prototype
- **Description**: Creates new objects by copying an existing object, known as the prototype.
- **Use Case**: Used when the cost of creating a new instance of an object is more expensive than copying an existing one.
- **Example**: Cloning objects in a game.

## Structural Patterns

Structural patterns deal with object composition, helping to form large structures while keeping the structures flexible and efficient.

### Adapter
- **Description**: Allows incompatible interfaces to work together by wrapping an existing class with a new interface.
- **Use Case**: Used when you want to use an existing class but its interface does not match the one you need.
- **Example**: Connecting legacy code with new system interfaces.

### Decorator
- **Description**: Attaches additional responsibilities to an object dynamically.
- **Use Case**: Used to add functionalities to individual objects without affecting others.
- **Example**: Adding features to a simple coffee order (e.g., milk, sugar).

### Facade
- **Description**: Provides a simplified interface to a complex subsystem.
- **Use Case**: Used when you want to provide a simple interface to a complex system.
- **Example**: A home theater system with a single interface for controlling multiple devices.

### Composite
- **Description**: Composes objects into tree structures to represent part-whole hierarchies.
- **Use Case**: Used when you want to treat individual objects and compositions uniformly.
- **Example**: A file system structure with files and directories.

### Proxy
- **Description**: Provides a surrogate or placeholder for another object to control access to it.
- **Use Case**: Used for lazy initialization, access control, logging, etc.
- **Example**: A virtual proxy that loads an image only when needed.

## Behavioral Patterns

Behavioral patterns focus on communication between objects and the delegation of responsibilities.

### Observer
- **Description**: Defines a one-to-many dependency between objects, so when one object changes state, all its dependents are notified.
- **Use Case**: Used in event handling systems, where multiple components need to be updated in response to an event.
- **Example**: A stock market application notifying investors of price changes.

### Strategy
- **Description**: Defines a family of algorithms, encapsulates each one, and makes them interchangeable.
- **Use Case**: Used when you need to choose an algorithm at runtime.
- **Example**: Sorting strategies (e.g., quicksort, mergesort).

### Command
- **Description**: Encapsulates a request as an object, thereby allowing for parameterization of clients with queues, requests, and operations.
- **Use Case**: Used for implementing undo/redo functionality.
- **Example**: A remote control for devices.

### Iterator
- **Description**: Provides a way to access the elements of an aggregate object without exposing its underlying representation.
- **Use Case**: Used to traverse collections without exposing their details.
- **Example**: Iterating through a list of items in a shopping cart.

### State
- **Description**: Allows an object to alter its behavior when its internal state changes.
- **Use Case**: Used when an object should change its behavior based on its state.
- **Example**: A TCP connection that behaves differently based on its state (e.g., connecting, connected, closing).

## Conclusion

This repository serves as a practical guide to understanding and implementing common design patterns in software development. Each pattern is provided with a brief explanation, use cases, and examples to demonstrate its application.

Feel free to explore the code and adapt the patterns for your own projects. Contributions and suggestions are welcome!
