#ifndef DUCK_HPP
#define DUCK_HPP

#include <iostream>
#include "../flyingBird.hpp"
#include "../swimmingBird.hpp"

// Duck can fly, swim, and eat.
//
// It can be used as:
// - FlyableBird, because it can fly.
// - SwimmableBird, because it can swim.
//
// This follows LSP because Duck provides real behavior for every parent
// class it inherits from.

class Duck : public FlyableBird, public SwimmableBird
{
public:
    virtual void eat()
    {
        std::cout << "Duck can eat\n";
    }

    virtual void fly()
    {
        std::cout << "Duck can fly\n";
    }

    virtual void swim()
    {
        std::cout << "Duck can swim\n";
    }
};

#endif
