#ifndef FUNCTIONALITIES2_H
#define FUNCTIONALITIES2_H
#include "Account.h"
#include "SavingsAccount.h"
#include "CurrentAccount.h"
#include "SavingsAccountType.h"
#include "CurrentAccountType.h"
#define SIZE 4

//function to check all objects are null
//input: account array pointer
//output: boolean value
bool checkAllNull(Account* container[SIZE]);

//function to delete allocated memory
//input: account array pointer
//output: void
void deleteObjects(Account* container[SIZE]);

//function to create 4 objects
//input: account array pointer
//output: void
void createObjects(Account* container[SIZE]);

//function to find average account balance
//input: account array pointer
//output: average value  of float type
float getAvgAccountBalance(Account* container[SIZE]);

//function to find account number with highest balance
//input: account array pointer
//output: account numbe rof string type
long int getAccountNumber(Account* container[SIZE]);

//function to find total interest amount
//input: account array pointer
//output : float with total interest amount
float getAvgInterestAmount(Account* container[SIZE]);


//function to return a pointer to accont with minimum accountbalance
//input: account array pointer
//output: pointer of account
Account* getAccountDetails(Account* container[SIZE]);


#endif // FUNCTIONALITIES2_H
