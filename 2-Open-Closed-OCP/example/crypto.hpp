#ifndef CRYPTO_HPP
#define CRYPTO_HPP

#include <iostream>
#include "payment.hpp"

// This only goal of this class to support crypto transactions only

class Crypto : public Payment
{
public:
    void pay(double amount) override
    {
        std::cout << "successful crypto payment transaction\n";
        std::cout << "you paid " << amount << " from your crypto wallet\n";
    }
};

#endif