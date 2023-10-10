#ifndef FUNCTIONALITIES1_H
#define FUNCTIONALITIES1_H

#include "CardType.h"
#include "CustomerType.h"
#include "CreditCard.h"
#include "Customer.h"
#include <iostream>
#define SIZE 3

//function to check whether all objects are null
// input : Customer array pointer
// output : send boolean result
bool checkAllNull(Customer* arr[SIZE]);

//function to delete all objects
void deleteObjects(Customer* arr[SIZE]);

//function to delete all objects
// input : Card array pointer and Customer array pointer
// output : void
void createObjects(Customer* customers[SIZE], CreditCard* card[SIZE]);

//function to find and return _number
//input : Customer array pointer
// output : string of customer number
std::string getNumber(Customer* customer[SIZE]);

//function to return container of CreditCard
// input : Customer array pointer and Cardtypr
// output : void
void getCardsContainer(Customer* customer[SIZE], CardType card_type, CreditCard *res[SIZE]);

//function to return the customer type
// input :: Customer array pointer and id
// output : value of CustomerType 
CustomerType getCustomerType(Customer* Customer[SIZE], std::string id);

#endif // FUNCTIONALITIES1_H
