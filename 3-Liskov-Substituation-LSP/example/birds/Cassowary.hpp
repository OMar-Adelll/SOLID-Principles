#ifndef CASSOWARY_HPP
#define CASSOWARY_HPP

#include <iostream>
#include "../bird.hpp"

// Cassowary is only a normal Bird in this example.
//
// It can be used as:
// - Bird, because it can eat.
//
// Cassowary does not inherit FlyableBird or SwimmableBird because it should
// not be passed to code that expects flying or swimming.
// This follows LSP by keeping the parent class promise correct.

class Cassowary : public Bird
{
public:
    virtual void eat()
    {
        std::cout << "Cassowary can eat\n";
    }
};

#endif
