#pragma once

#include <string>

struct HighwayPatrol;
struct Vehicle
{
    Vehicle(const std::string& n);
    
    //Special member Functions.  See instruction 9) and note in main()
    virtual ~Vehicle();
    Vehicle(const Vehicle&);
    Vehicle& operator=(const Vehicle&);
    
    virtual void setSpeed(int s);
    // {
    //     std::cout << "\nHighway is adjusting " << name << "'s speed to " << s << " mph" << std::endl;
    //     speed = s;
    // }
    
    virtual void tryToEvade();
    // {
    //     std::cout << name << ": you'll never take me alive, ya dirty coppers!" << std::endl;
    //     setSpeed(100);
    // }
protected:
    int speed = 0;
    std::string name;
    friend HighwayPatrol;
};

