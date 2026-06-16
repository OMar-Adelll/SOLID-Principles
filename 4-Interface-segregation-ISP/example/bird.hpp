#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>
#include "flyable.hpp"

// This class will inlcude the first animal -> bird
// this class will include flyable animals methods only and will not include walkable animals methods and this is the main idea of ISP

class Bird : public Flyable
{
public:
    virtual void eat() override // this function is from the origin class cuz it's a general verb
    {
        std::cout << "Bird is eating\n";
    }

    virtual void drink() override // this function is from origin class cuz it's a general verb
    {
        std::cout << "Bird is drinking\n";
    }

    virtual void fly() override // this function is from flyable class cuz flyable animals only can fly
    {
        std::cout << "Bird is flying\n";
    }
};

#endif