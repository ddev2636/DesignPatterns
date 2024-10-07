#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Circle.h"
#include "Square.h"
#include <string>

class ShapeFactory
{
public:
    static Shape *createShape(const std::string &shapeType)
    {
        if (shapeType == "Circle")
        {
            return new Circle();
        }
        else if (shapeType == "Square")
        {
            return new Square();
        }
        return nullptr;
    }
};

#endif // SHAPEFACTORY_H
