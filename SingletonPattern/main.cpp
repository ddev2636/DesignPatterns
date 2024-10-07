// main.cpp

#include <iostream>
#include "Singleton.h"

int main()
{
    Singleton &singletonInstance = Singleton::getInstance();
    singletonInstance.someMethod();

    // Print the counter
    std::cout << "Singleton instances created: " << Singleton::getCounter() << std::endl;

    return 0;
}
