#include "CurrentAccount.h"

CurrentAccount::CurrentAccount(long int accountNumber, float account_balance, CurrentAccountType current_account_type)
: Account(accountNumber,account_balance), _current_account_type(current_account_type)
{

}

float CurrentAccount::CalculateInterestAmount()
{
    if(CurrentAccountType::BASIC==this->currentAccountType())
    {
    return accountBalance()*0.6;
    }

    else
    {
    return accountBalance()*0.7;
    }
}

std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs) {
    os << "_current_account_minimum_quarter_balance: " << rhs._current_account_minimum_quarter_balance
       << " _current_account_type: " << getEnum (rhs._current_account_type);
    return os;
}

std::string getEnum(const CurrentAccountType value)
{
        if(CurrentAccountType::BASIC==value){
        return "BASIC";
    }
    else{
        return "PREMIUM";
    }
}
