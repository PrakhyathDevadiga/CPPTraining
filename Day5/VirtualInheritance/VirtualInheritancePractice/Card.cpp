#include "Card.h"
#include "Issuer.h"
Card::Card(int number, int cvv_number, Issuer issuer, float annual_charge, int limit)
{
    if(number >=1000 && number <10000){
        this->_number=number;
    }
    else {
        throw std::runtime_error("Invalid number for card");
    }

    if(cvv_number >=100 && cvv_number <1000){
        this->_cvv_number=number;
    }
    else {
        throw std::runtime_error("Invalid number for cvv");
    }

    this->_issuer=issuer;
    this->_annual_charge=annual_charge;
    this->_limit=limit;
}

std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _issuer: " <<getIssuer(rhs._issuer)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}

std::string getIssuer(const Issuer& value)
{
    if(Issuer::MASTERCARD==value){
        return "MASTERCARD";
    }
    else if(Issuer::RUPAY==value)
        return "RUPAY";
    else{
        return "VISA";
    }
}

