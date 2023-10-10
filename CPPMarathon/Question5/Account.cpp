#include "Account.h"
std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "_accountNumber: " << rhs._accountNumber
       << " _account_balance: " << rhs._account_balance
       << " _account_min_balance: " << rhs._account_min_balance;
    return os;
}
Account::Account(long int accountNumber, float account_balance):
_accountNumber(accountNumber), _account_balance(account_balance)
{
}

