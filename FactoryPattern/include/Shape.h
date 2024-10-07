#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
public:
    virtual ~Shape() {}
    virtual std::string draw() = 0; // Pure virtual function
};

#endif // SHAPE_H
