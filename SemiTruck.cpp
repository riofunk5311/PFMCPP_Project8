#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck (const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": Hello officer, Any problem?" << std::endl;
}

void SemiTruck::turnBlinkerOn()
{
    setSpeed(65);
    std::cout << name << " is swiching the lane." << std::endl;
}

