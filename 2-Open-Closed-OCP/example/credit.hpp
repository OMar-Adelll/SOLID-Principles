#ifndef CREDIT_HPP
#define CREDIT_HPP

#include <iostream>
#include "payment.hpp"

// This only goal of this class to support credit card transactions only

class Credit : public Payment
{
public:
    void pay(double amount) override
    {
        std::cout << "successful credit payment transaction\n";
        std::cout << "you paid " << amount << " with credit card\n";
    }
};

#endif