#include "CardType.h"
#include "CustomerType.h"
#include "CreditCard.h"
#include "Customer.h"
#include <iostream>
#define SIZE 3
#include "Functionalities1.h"

int main(){
    Customer* customers[SIZE]={nullptr};
    CreditCard* cards[SIZE]={nullptr};
    CreditCard* res[SIZE]={nullptr};

    try{
        createObjects(customers,cards);

        std::cout<< "Number of card whose limit is minimum is: " << getNumber(customers) <<"\n";

        std::cout << "List of Credit card of given type are: \n";
        getCardsContainer(customers,CardType::NEO,res);
        for(int i=0;i<SIZE;i++){
            if(res[i]==nullptr){
                continue;
            }
            else{
                std::cout << *res[i] <<"\n";
            }
        }

        CustomerType res= getCustomerType(customers, "123456");
        std::cout << "Type of customer of entered id: " << getEnums(res) << "\n";

    }
    catch(std::runtime_error e){
        std::cout << e.what();
    }
}