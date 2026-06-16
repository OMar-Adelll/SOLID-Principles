#ifndef SPARROW_HPP
#define SPARROW_HPP

#include <iostream>
#include "../flyingBird.hpp"

// Sparrow is a flying bird.
//
// It can be used as:
// - Bird, because it can eat.
// - FlyableBird, because it can fly.
//
// This follows LSP because Sparrow fully supports everything its parent
// classes promise.

class Sparrow : public FlyableBird
{
public:
    virtual void eat()
    {
        std::cout << "Sparrow can eat\n";
    }

    virtual void fly()
    {
        std::cout << "Sparrow can fly\n";
    }
};

#endif
