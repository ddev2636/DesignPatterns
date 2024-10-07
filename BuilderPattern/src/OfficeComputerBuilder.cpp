#include "OfficeComputerBuilder.h"

OfficeComputerBuilder::OfficeComputerBuilder()
{
    computer = new Computer();
}

void OfficeComputerBuilder::buildCPU()
{
    computer->setCPU("Intel i5");
}

void OfficeComputerBuilder::buildGPU()
{
    computer->setGPU("Integrated Intel Graphics");
}

void OfficeComputerBuilder::buildRAM()
{
    computer->setRAM("16GB DDR4");
}

void OfficeComputerBuilder::buildStorage()
{
    computer->setStorage("512GB SSD");
}

Computer *OfficeComputerBuilder::getComputer()
{
    return computer;
}
