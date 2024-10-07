#ifndef COMPUTERBUILDER_H
#define COMPUTERBUILDER_H

#include "Computer.h"

class ComputerBuilder {
public:
    virtual ~ComputerBuilder() {}
    virtual void buildCPU() = 0;
    virtual void buildGPU() = 0;
    virtual void buildRAM() = 0;
    virtual void buildStorage() = 0;
    virtual Computer* getComputer() = 0;
};

#endif // COMPUTERBUILDER_H
