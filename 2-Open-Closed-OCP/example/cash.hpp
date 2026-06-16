#ifndef CAHS_HPP
#define CAHS_HPP

#include <iostream>
#include "payment.hpp"

// This only goal of this class to support cash transactions only

class Cash : public Payment
{
public:
    void pay(double amount) override
    {
        std::cout << "successful cash payment transaction\n";
        std::cout << "you paid " << amount << " cash\n";
    }
};

#endif