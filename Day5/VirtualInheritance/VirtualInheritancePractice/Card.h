#ifndef CARD_H
#define CARD_H

#include "Issuer.h"
#include <iostream>
class Card
{
private:
    int _number;
    int _cvv_number;
    Issuer _issuer;
    float _annual_charge;
    int _limit;


public:    
    Card(
    int number,
    int cvv_number,
    Issuer issuer,
    float annual_charge,
    int limit
    );

    virtual float CalculateTaxOnCharge()=0;

    ~Card() {
        std::cout << "Card with number: " << _number << "is destroyed\n";
    }

    int number() const { return _number; }

    int cvvNumber() const { return _cvv_number; }

    Issuer issuer() const { return _issuer; }

    float annualCharge() const { return _annual_charge; }

    int limit() const { return _limit; }

    friend std::ostream &operator<<(std::ostream &os, const Card &rhs);

    
};

std::string getIssuer(const Issuer& value);

#endif // CARD_H
