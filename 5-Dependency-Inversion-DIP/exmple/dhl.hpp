#ifndef DHL_HHPP
#define DHL_HHPP
#include <iostream>
#include "delivery.hpp"

// this class will be about FedEx methods only

class DHL : public DeliveryService
{
public:
    virtual void deliver() override
    {
        std::cout << "delivering using DHL\n";
    }
};

#endif