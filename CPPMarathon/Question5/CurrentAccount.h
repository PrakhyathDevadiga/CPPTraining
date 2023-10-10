#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "Account.h"
#include "CurrentAccountType.h"
#include <iostream>
class CurrentAccount : virtual public Account
{
private:
    const float _current_account_minimum_quarter_balance=5000.0f;
    CurrentAccountType _current_account_type;
public:
    CurrentAccount()=default;
    CurrentAccount(const CurrentAccount&)=default;

    CurrentAccount(long int accountNumber,float account_balance, CurrentAccountType current_account_type);

    float CalculateInterestAmount() override;
    

    ~CurrentAccount() {
        std::cout << "Current account with number: " << accountNumber() << " is deleted\n";
    }

    CurrentAccountType currentAccountType() const { return _current_account_type; }
    void setCurrentAccountType(const CurrentAccountType &current_account_type) { _current_account_type = current_account_type; }

    friend std::ostream &operator<<(std::ostream &os, const CurrentAccount &rhs);

    
    
};

std::string getEnum(const CurrentAccountType value);

#endif // CURRENTACCOUNT_H
