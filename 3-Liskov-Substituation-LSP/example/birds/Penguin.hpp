#ifndef PENGUIN_HPP
#define PENGUIN_HPP

#include <iostream>
#include "../swimmingBird.hpp"

// Penguin is a swimming bird.
//
// It can be used as:
// - Bird, because it can eat.
// - SwimmableBird, because it can swim.
//
// Penguin does not inherit FlyableBird because penguins cannot fly.
// This follows LSP because no code will expect Penguin to do something
// it cannot do.

class Penguin : public SwimmableBird
{
public:
    virtual void eat()
    {
        std::cout << "Penguin can eat\n";
    }

    virtual void swim()
    {
        std::cout << "Penguin can swim\n";
    }
};

#endif
