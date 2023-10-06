#include "DebitCard.h"

DebitCard::DebitCard(int number, int cvv_number, Issuer issuer, float annual_charge, int limit, Category category)
: Card(number, cvv_number, issuer, annual_charge, limit), _category(category)
{
}

float DebitCard::CalculateTaxOnCharge()
{
    if(Issuer::VISA==issuer()){
        return ( limit()/100 )*annualCharge();
    }
    
    else if(Issuer::MASTERCARD==issuer()){
        return ( limit()/50 )*annualCharge();
    }

    else{
        return ( limit()/10 )*annualCharge();
   
    }
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _category: " << getCategory( rhs._category );
    return os;
}

std::string getCategory(const Category &value)
{
    if(Category::DELUXE==value){
        return "DELUXE";
    }
    else if (Category::PREMIUM==value){
        return "PREMIUM";
    }
    else{
        return "SIGNATURE";
    }
}
