#include "CreditCard.h"
std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _card_type: " << getEnums(rhs._card_type)
       << " _limit: " << rhs._limit
       << " _card_cvv_number: " << rhs._card_cvv_number;
    return os;
}

//printing enum values
std::string getEnums(const CardType value)
{
    if(CardType::MILES==value){
        return "MILES";
    }

    else if(CardType::SIGNATURE==value){
        return "SIGNATURE";
    } 
    else{
        return "NEO";
    }
}


CreditCard::CreditCard(std::string number, CardType card_type, float limit, int card_cvv_number)
{
    //checking cvv rules
    if(card_cvv_number>=100 && card_cvv_number <=999){
        this->_card_cvv_number=card_cvv_number;
    }
    else{
        throw std::runtime_error("Cvv numbe ris not valid");
    }

    this->_card_type=card_type;
    this->_limit=limit;
    this->_number=number;
}
