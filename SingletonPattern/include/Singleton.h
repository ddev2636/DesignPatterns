// include/Singleton.h

#ifndef SINGLETON_H
#define SINGLETON_H

#include <mutex>

class Singleton
{
public:
    // Deleted copy constructor and assignment operator
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    // Static method to access the singleton instance
    static Singleton &getInstance();

    // Example method
    void someMethod();

    // Static counter method
    static int getCounter();

private:
    // Private constructor
    Singleton();

    // Destructor
    ~Singleton();

    static Singleton *instance; // Singleton instance pointer
    static std::mutex mutex;    // Mutex for thread safety
    static int counter;         // Static counter for instance tracking
};

#endif // SINGLETON_H
