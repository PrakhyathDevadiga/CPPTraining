#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"
#include "SavingsAccountType.h"
#include <ostream>

class SavingsAccount : virtual public Account
{
private:
    SavingsAccountType _savings_account_type;


public:

    SavingsAccount()=default;

    SavingsAccount(const SavingsAccount&)=default;

    SavingsAccount(long int accountNumber,float account_balance, SavingsAccountType savings_account_type);

    SavingsAccount(SavingsAccountType savings_account_type);

    float CalculateInterestAmount() override;

    ~SavingsAccount() {
        std::cout << "Savings account with accountnumber: " << accountNumber() << " is deleted\n";
    }

    SavingsAccountType savingsAccountType() const { return _savings_account_type; }
    void setSavingsAccountType(const SavingsAccountType &savings_account_type) { _savings_account_type = savings_account_type; }

    friend std::ostream &operator<<(std::ostream &os, const SavingsAccount &rhs);

    
    
};

std::string getEnum(const SavingsAccountType value);

#endif // SAVINGSACCOUNT_H
