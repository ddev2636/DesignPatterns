#include "Computer.h"
#include <iostream>

void Computer::setCPU(const std::string &cpu) { m_cpu = cpu; }
void Computer::setGPU(const std::string &gpu) { m_gpu = gpu; }
void Computer::setRAM(const std::string &ram) { m_ram = ram; }
void Computer::setStorage(const std::string &storage) { m_storage = storage; }

void Computer::showSpecifications() const
{
    std::cout << "CPU: " << m_cpu << "\n";
    std::cout << "GPU: " << m_gpu << "\n";
    std::cout << "RAM: " << m_ram << "\n";
    std::cout << "Storage: " << m_storage << "\n";
}
