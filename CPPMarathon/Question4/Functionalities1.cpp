#include "Functionalities1.h"


//function to check whether all objects are null
// input : Customer array pointer
// output : send boolean result
bool checkAllNull(Customer *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return true;
}

//function to delete all objects
void deleteObjects(Customer *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}

//function to delete all objects
// input : Card array pointer and Customer array pointer
// output : void
void createObjects(Customer *customers[SIZE], CreditCard *card[SIZE])
{
    card[0]= new CreditCard("1010 1010 1010 1010",CardType::MILES,50000.0f,200);
    card[1]= new CreditCard("1010 1010 1010 1011",CardType::NEO,25000.0f,201);
    card[2]= new CreditCard("1010 1010 1010 1012",CardType::NEO,20000.0f,202);

    customers[0]= new Customer("Prakhyath","123456",CustomerType::PRIVILAGED,card[0]);
    customers[1]= new Customer("Ganavi","123457",CustomerType::ELITE,card[1]);
    customers[2]= new Customer("Prathyaksh","123458",CustomerType::ELITE,card[2]);
}

//function to find and return _number
//input : Customer array pointer
// output : string of customer number
std::string getNumber(Customer *customer[SIZE])
{
    if(checkAllNull(customer)){
        throw std::runtime_error("No customers found");
    }
    else{
        float min=customer[0]->creditCard()->limit();
        float currentValue=0.0f;
        std::string result;
        for(int i=0;i<SIZE;i++){
            if(customer[i]==nullptr){
                continue;
            }
            currentValue=customer[i]->creditCard()->limit();
            if(currentValue<min){
                min=currentValue;
                result=customer[i]->creditCard()->number();
            }
        }
        return result;
    }
}


//function to return container of CreditCard
// input : Customer array pointer and Cardtypr
// output : void
void getCardsContainer(Customer *customer[SIZE], CardType card_type, CreditCard* res[SIZE])
{
    if(checkAllNull(customer)){
        throw std::runtime_error("No customers found");
    }
    else{
        int k=0;
        for(int i=0;i<SIZE;i++){
            if(customer[i]==nullptr){
                continue;
            }
            if(customer[i]->creditCard()->cardType()==card_type){
                res[k++]=customer[i]->creditCard();
            }
        }
    }
}

//function to return the customer type
// input :: Customer array pointer and id
// output : value of CustomerType 
CustomerType getCustomerType(Customer *Customer[SIZE], std::string id)
{
    if(checkAllNull(Customer)){
        throw std::runtime_error("No customers found");
    }
    else{
        for(int i=0;i<SIZE;i++){
            if(Customer[i]==nullptr){
                continue;
            }
            if(Customer[i]->id()==id){
                return Customer[i]->customerType();
            }
        }
    }
    throw std::runtime_error("No cards of given id found");
}

