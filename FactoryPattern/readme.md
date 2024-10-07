## Factory Method Design Pattern Example in C++

This project demonstrates the Factory Method Design Pattern implemented in C++. The Factory Method Design Pattern allows a class to delegate the responsibility of instantiating objects to its subclasses, providing a way to encapsulate the instantiation logic. This approach promotes loose coupling and scalability in software design.


### File Descriptions

- **include/Shape.h**
  - This file defines the `Shape` interface. It contains a pure virtual function `draw()`, which must be implemented by all concrete shapes. This serves as the base class for all shape types, ensuring that each derived class will have its own implementation of the `draw()` method.

- **include/Circle.h**
  - This file declares the `Circle` class, which inherits from `Shape`. It provides an implementation of the `draw()` method that returns a string indicating that a circle is being drawn. This encapsulation allows for different behaviors in derived classes.

- **include/Square.h**
  - Similar to `Circle.h`, this file declares the `Square` class, which also inherits from `Shape`. It implements the `draw()` method to indicate that a square is being drawn, providing another concrete implementation of the `Shape` interface.

- **include/ShapeFactory.h**
  - This header defines the `ShapeFactory` class. It includes a static method `createShape()` that takes a string parameter to determine which shape to create (`Circle` or `Square`). This encapsulates the object creation logic, allowing clients to create shapes without knowing their specific classes, thereby adhering to the Open/Closed Principle.

- **src/Circle.cpp**
  - This file implements the `Circle` class. The actual drawing logic, although simple in this case, could be expanded upon as needed. It includes the corresponding header file to ensure proper linkage and to provide the implementation of the methods declared in `Circle.h`.

- **src/Square.cpp**
  - This file implements the `Square` class. Like `Circle.cpp`, it includes the logic for drawing a square and includes its respective header file. This separation allows for independent changes to the `Square` class without affecting other components.

- **src/ShapeFactory.cpp**
  - This file implements the `ShapeFactory` class, although the implementation is minimal since the factory method is defined inline in the header file. It includes the necessary header to ensure the factory can create the different shape types, facilitating easy modifications and additions in the future.

- **main.cpp**
  - This is the entry point of the application. It demonstrates how to use the `ShapeFactory` to create different shapes. It invokes the factory method to create instances of `Circle` and `Square`, then calls their respective `draw()` methods to display the output. This file ties together the whole functionality of the pattern.

##Image

![Factory Method Design Pattern](Factory-Method-Design-Pattern-.webp)

## Build Instructions

To compile and run this project, follow these steps:

1. Navigate to the `FactoryPattern` directory in your terminal.
2. Run the command:
   ```bash
   make



