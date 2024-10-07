#include "Director.h"

void Director::setBuilder(ComputerBuilder *b)
{
    builder = b;
}

Computer *Director::buildComputer()
{
    builder->buildCPU();
    builder->buildGPU();
    builder->buildRAM();
    builder->buildStorage();
    return builder->getComputer();
}
