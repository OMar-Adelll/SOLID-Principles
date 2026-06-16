#ifndef FEDEX_HPP
#define FEDEX_HPP
#include <iostream>
#include "delivery.hpp"

// this class will be about FedEx methods only

class FedEx : public DeliveryService
{
public:
    virtual void deliver() override
    {
        std::cout << "delivering using FedEX\n";
    }
};

#endif