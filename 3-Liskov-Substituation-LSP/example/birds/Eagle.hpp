#ifndef EAGLE_HPP
#define EAGLE_HPP

#include <iostream>
#include "../flyingBird.hpp"

// Eagle is a flying bird.
//
// It can be used as:
// - Bird, because it can eat.
// - FlyableBird, because it can fly.
//
// This follows LSP because Eagle can do everything a FlyableBird promises.

class Eagle : public FlyableBird
{
public:
    virtual void eat()
    {
        std::cout << "Eagle can eat\n";
    }

    virtual void fly()
    {
        std::cout << "Eagle can fly\n";
    }
};

#endif
