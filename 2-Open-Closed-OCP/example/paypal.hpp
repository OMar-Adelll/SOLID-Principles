#ifndef PAYPAL_HPP
#define PAYPAL_HPP

#include <iostream>
#include "payment.hpp"

// This only goal of this class to support paypal transactions only

class Paypal : public Payment
{
public:
    void pay(double amount) override
    {
        std::cout << "successful paypal payment transaction\n";
        std::cout << "you paid " << amount << " from your paypal wallet\n";
    }
};

#endif