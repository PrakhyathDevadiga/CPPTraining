#include "CreditCard.h"

CreditCard::CreditCard(int number, int cvv_number, Issuer issuer, float annual_charge, int limit, float transactional_limit):
Card(number, cvv_number, issuer, annual_charge, limit), _transactional_limit(transactional_limit)
{
}

std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transactional_limit: " << rhs._transactional_limit;
    return os;
}

float CreditCard::CalculateTaxOnCharge()
{
    return (limit()/100)*annualCharge();
}
