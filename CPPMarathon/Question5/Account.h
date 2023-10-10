#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
private:
    long int _accountNumber;
    float _account_balance;
    const float _account_min_balance=1000.0f;

public:

    Account()=default;

    Account(const Account&)=default; //copy construction

    Account(long int accountNumber,float account_balance);

    Account& operator=( Account* e1){ //copy assignment
        this->_accountNumber = e1->accountNumber();
        this->_account_balance = e1->accountBalance();
        return *this;
    }

    virtual float CalculateInterestAmount()=0;

    virtual ~Account() {}

    long int accountNumber() const { return _accountNumber; }
    void setAccountNumber(long int accountNumber) { _accountNumber = accountNumber; }

    float accountBalance() const { return _account_balance; }
    void setAccountBalance(float account_balance) { _account_balance = account_balance; }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs);
};

#endif // ACCOUNT_H
