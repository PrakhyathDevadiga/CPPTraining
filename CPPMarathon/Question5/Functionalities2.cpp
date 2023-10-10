#include "Functionalities2.h"


//function to check all objects are null
//input: account array pointer
//output: boolean value
bool checkAllNull(Account *container[4])
{
    for(int i=0;i<SIZE;i++){
        if(container[i]!=nullptr)
        {
            return false;
        }
    }
    return true;
}

//function to delete allocated memory
//input: account array pointer
//output: void
void deleteObjects(Account *container[4])
{
    for(int i=0;i<SIZE;i++){
        delete container[i];
    }
}


//function to create 4 objects
//input: account array pointer
//output: void
void createObjects(Account *container[4])
{
    container[0]=new SavingsAccount(223456,40000.0f,SavingsAccountType::SPECIAL);
    container[1]=new SavingsAccount(323467,60000.0f,SavingsAccountType::METRO);
    container[2]=new CurrentAccount(456789,80000.0f,CurrentAccountType::BASIC);
    container[3]=new CurrentAccount(456837,20000.0f,CurrentAccountType::PREMIUM);

}

//function to find average account balance
//input: account array pointer
//output: average value  of float type
float getAvgAccountBalance(Account *container[4])
{
            float totalAmount=0.0f;

    if(checkAllNull(container)){
        std::runtime_error("No accounts found\n");
    }
    else{
        for(int i=0;i<SIZE;i++){
            if(container[i]==nullptr){
                continue;
            }
            else{
                //addign the balances of valid account
                totalAmount += container[i]->accountBalance();
            }

        }
        
    }
    //returning average balance
        return totalAmount/SIZE;

}


//function to find account number with highest balance
//input: account array pointer
//output: account numbe rof string type
long int getAccountNumber(Account *container[4])
{
            long int accountNumber=0;

    if(checkAllNull(container)){
        std::runtime_error("No accounts found\n");
    }
    else{
        int max=0.0f;
        float currentValue=0.0f;
        for(int i=0;i<SIZE;i++){
            if(container[i]==nullptr){
                continue;
            }
            currentValue=container[i]->accountBalance();
            if(currentValue>max){
                max=currentValue;
                accountNumber=container[i]->accountNumber();
            }
        }
        
    }
   //returning average balance
        return accountNumber;
}

//function to find total interest amount
//input: account array pointer
//output : float with total interest amount
float getAvgInterestAmount(Account *container[4])
{
    float totalAmount=0.0f;

    if(checkAllNull(container)){
        std::runtime_error("No accounts found\n");
    }
    else{
        for(int i=0;i<SIZE;i++){
            if(container[i]==nullptr){
                continue;
            }
            else{
                //addign the interest of valid account
                totalAmount += container[i]->CalculateInterestAmount();
            }

        }
       
    }
     //returning average balance
        return totalAmount/SIZE;
}



//function to return a pointer to accont with minimum accountbalance
//input: account array pointer
//output: pointer of account
Account *getAccountDetails(Account *container[SIZE])
{
    Account* account={nullptr};
    if(checkAllNull(container)){
        std::runtime_error("No accounts found\n");
    }
    else{
        int min=container[0]->accountBalance();
        float currentValue=0.0f;
        for(int i=0;i<SIZE;i++){
            if(container[i]==nullptr){
                continue;
            }
            currentValue=container[i]->accountBalance();
            if(currentValue<min){
                min=currentValue;
                account=container[i];
            }
        }
        
    }
    //returning average balance
        return account;
}
