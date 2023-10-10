#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(long int accountNumber, float account_balance, SavingsAccountType savings_account_type)
: Account(accountNumber,account_balance), _savings_account_type(savings_account_type)
{

}

SavingsAccount::SavingsAccount(SavingsAccountType savings_account_type)
: _savings_account_type(savings_account_type)
{

}

std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs) {
    os << static_cast<const Account &>(rhs)
       << " _savings_account_type: " << getEnum(rhs._savings_account_type);
    return os;
}

std::string getEnum(const SavingsAccountType value)
{
    if(SavingsAccountType::METRO==value){
        return "METRO";
    }

    else if (SavingsAccountType::SPECIAL==value){
        return "SPECIAL";
    }
    else{
        return "URBAN";
    }
}

float SavingsAccount::CalculateInterestAmount()
{
    if(SavingsAccountType::METRO==this->savingsAccountType() || SavingsAccountType::URBAN==this->savingsAccountType()){
    return accountBalance()*0.5;
    }
    else{
    return accountBalance()*0.7;
    }
}


