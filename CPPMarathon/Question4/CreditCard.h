#ifndef CREDITCARD_H
#define CREDITCARD_H
#include "CardType.h"
#include <iostream>

class CreditCard
{
private:
    std::string _number;
    CardType _card_type;
    float _limit;
    int _card_cvv_number;

public:
    CreditCard() = default;
    CreditCard(const CreditCard& )=default;

    CreditCard(std::string number, CardType card_type, float limit, int card_cvv_number);

    ~CreditCard() {
        std::cout << "Credit card with card number: " << _number << " is deleted\n" ;
    }

    //getters and setters
    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    //getters and setters
    CardType cardType() const { return _card_type; }
    void setCardType(const CardType &card_type) { _card_type = card_type; }

    //getters and setters
    float limit() const { return _limit; }
    void setLimit(float limit) { _limit = limit; }

    //getters and setters
    int cardCvvNumber() const { return _card_cvv_number; }
    void setCardCvvNumber(int card_cvv_number) { _card_cvv_number = card_cvv_number; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);

};

std::string getEnums(const CardType value);

#endif // CREDITCARD_H
