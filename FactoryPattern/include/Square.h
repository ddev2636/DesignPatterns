#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
public:
    std::string draw() override
    {
        return "Drawing a Square";
    }
};

#endif // SQUARE_H
