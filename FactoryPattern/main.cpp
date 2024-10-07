#include <iostream>
#include "include/ShapeFactory.h"

int main()
{
    Shape *circle = ShapeFactory::createShape("Circle");
    if (circle)
    {
        std::cout << circle->draw() << std::endl;
        delete circle; // Clean up
    }

    Shape *square = ShapeFactory::createShape("Square");
    if (square)
    {
        std::cout << square->draw() << std::endl;
        delete square; // Clean up
    }

    return 0;
}
