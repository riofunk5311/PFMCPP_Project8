#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck (const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": Hello officer, Any problem?" << std::endl;
}

void SemiTruck::passLight()
{
    setSpeed(65);
    std::cout << name << " lower your beam light please" << std::endl;
}

