#include "Director.h"
#include "GamingComputerBuilder.h"
#include "OfficeComputerBuilder.h"
#include <iostream>

int main()
{
    Director director;

    // Gaming Computer
    GamingComputerBuilder gamingBuilder;
    director.setBuilder(&gamingBuilder);
    Computer *gamingComputer = director.buildComputer();
    std::cout << "Gaming Computer:\n";
    gamingComputer->showSpecifications();
    delete gamingComputer;

    std::cout << std::endl;

    // Office Computer
    OfficeComputerBuilder officeBuilder;
    director.setBuilder(&officeBuilder);
    Computer *officeComputer = director.buildComputer();
    std::cout << "Office Computer:\n";
    officeComputer->showSpecifications();
    delete officeComputer;

    return 0;
}
