
#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Card.h"
#include <iostream>
class CreditCard : public Card
{
private:
   float _transactional_limit;

public:
    CreditCard(int number, int cvv_number, Issuer issuer, float annual_charge, int limit, float transactional_limit);
    
    float CalculateTaxOnCharge() override;

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

    ~CreditCard() {
        std::cout << "Credit card with id: " << number() << " is deleted";
    }
};

#endif // CREDITCARD_H
