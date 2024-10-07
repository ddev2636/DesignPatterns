#ifndef GAMINGCOMPUTERBUILDER_H
#define GAMINGCOMPUTERBUILDER_H

#include "ComputerBuilder.h"

class GamingComputerBuilder : public ComputerBuilder
{
public:
    GamingComputerBuilder();
    void buildCPU() override;
    void buildGPU() override;
    void buildRAM() override;
    void buildStorage() override;
    Computer *getComputer() override;

private:
    Computer *computer;
};

#endif // GAMINGCOMPUTERBUILDER_H
