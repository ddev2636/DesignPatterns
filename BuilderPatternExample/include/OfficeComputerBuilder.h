#ifndef OFFICECOMPUTERBUILDER_H
#define OFFICECOMPUTERBUILDER_H

#include "ComputerBuilder.h"

class OfficeComputerBuilder : public ComputerBuilder
{
public:
    OfficeComputerBuilder();
    void buildCPU() override;
    void buildGPU() override;
    void buildRAM() override;
    void buildStorage() override;
    Computer *getComputer() override;

private:
    Computer *computer;
};

#endif // OFFICECOMPUTERBUILDER_H
