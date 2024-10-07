#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape
{
public:
    std::string draw() override
    {
        return "Drawing a Circle";
    }
};

#endif // CIRCLE_H
