// src/Singleton.cpp

#include "Singleton.h"
#include <iostream>

// Initialize the static members
Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mutex;
int Singleton::counter = 0;

// Private constructor
Singleton::Singleton()
{
    counter++;
}

// Static method to get the singleton instance
Singleton &Singleton::getInstance()
{
    if (instance == nullptr)
    {
        std::lock_guard<std::mutex> lock(mutex); // Lock to ensure thread safety
        if (instance == nullptr)
        { // Double-check locking
            instance = new Singleton();
        }
    }
    return *instance;
}

// Example method implementation
void Singleton::someMethod()
{
    std::cout << "Hello from Singleton!" << std::endl;
}

// Static method to get the counter value
int Singleton::getCounter()
{
    return counter;
}

// Destructor
Singleton::~Singleton()
{
    // Optional: Cleanup if needed
}
