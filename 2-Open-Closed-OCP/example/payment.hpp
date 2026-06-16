#ifndef PYMENT_HPP
#define PYMENT_HPP

// The main idea of this class to be the parent of all payment methods
// The payment operation will be outside of this class based on the type of transaction 

class Payment
{
public:
    virtual void pay(double amount) = 0;
    virtual ~Payment() {}
};

#endif