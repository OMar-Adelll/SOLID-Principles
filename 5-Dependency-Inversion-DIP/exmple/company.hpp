#ifndef COMPANY_HPP
#define COMPANY_HPP

#include "delivery.hpp"
/*
    This is High level modules (company) and it should include the whole Service
    like deliveryService not specific one (fedex,dhl) cuz the main idea is the high modules
    shouldn't based on low modules and both should depend on abstruction
*/

class Company
{
private:
    DeliveryService *delivery;

public:
    Company(DeliveryService *deliveryService)
        : delivery(deliveryService) {}

    void deliver() { delivery->deliver(); }
};

#endif