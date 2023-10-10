#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "Account.h"
#include "SavingsAccountType.h"
#include <iostream>
#include "Functionalities2.h"
#define SIZE 4

int main(){
        Account* accounts[SIZE]={nullptr};
        createObjects(accounts);
        std::cout<< *accounts[0];
        try{
        std::cout << "Average account balance: " << getAvgAccountBalance(accounts) << "\n";

        std::cout << "Account number of account with maximum balance: " << getAccountNumber(accounts) << "\n";

        std::cout << "Total interest amount: " << getAvgInterestAmount(accounts) << "\n";

        Account* res=getAccountDetails(accounts);
        std::cout << "Account details with minium account balance: "<< "\n";
        if(res==nullptr){
            throw std::runtime_error("No data found\n");
        }
        else{
            std::cout << *res << "\n";
        }

        }

        catch(std::runtime_error e){
            std::cout << e.what();
        }
        deleteObjects(accounts);

        
}