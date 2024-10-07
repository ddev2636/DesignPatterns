#include "GamingComputerBuilder.h"

GamingComputerBuilder::GamingComputerBuilder()
{
    computer = new Computer();
}

void GamingComputerBuilder::buildCPU()
{
    computer->setCPU("Intel i9");
}

void GamingComputerBuilder::buildGPU()
{
    computer->setGPU("NVIDIA RTX 3090");
}

void GamingComputerBuilder::buildRAM()
{
    computer->setRAM("32GB DDR4");
}

void GamingComputerBuilder::buildStorage()
{
    computer->setStorage("2TB SSD");
}

Computer *GamingComputerBuilder::getComputer()
{
    return computer;
}
