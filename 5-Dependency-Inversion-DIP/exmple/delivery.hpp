#ifndef DELIVERY_HPP
#define DELIVERY_HPP

// This Low-level modules
// This class is the parent of delivery service

class DeliveryService
{
public:
    virtual void deliver() = 0;
    virtual ~DeliveryService() {}
};

#endif