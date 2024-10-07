#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "ComputerBuilder.h"

class Director
{
public:
    void setBuilder(ComputerBuilder *builder);
    Computer *buildComputer();

private:
    ComputerBuilder *builder;
};

#endif // DIRECTOR_H
