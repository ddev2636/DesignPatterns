#ifndef COMPUTER_H
#define COMPUTER_H

#include <string>

class Computer {
public:
    void setCPU(const std::string& cpu);
    void setGPU(const std::string& gpu);
    void setRAM(const std::string& ram);
    void setStorage(const std::string& storage);
    
    void showSpecifications() const;

private:
    std::string m_cpu;
    std::string m_gpu;
    std::string m_ram;
    std::string m_storage;
};

#endif // COMPUTER_H
