#include "Functionalities.h"
#include <iostream>
//for corner cases
bool checkAllNull(Card *bank_cards[SIZE])
{
    bool flag=true;
    for(int i=0; i<SIZE;i++){
       if(bank_cards[i]!=nullptr){
            return false;
       }       
    }
    return flag;
}

void createCards(Card *bank_cards[SIZE])
{
    bank_cards[0]=new DebitCard(2000,300,Issuer::VISA,799.0f,500000,Category::SIGNATURE);
    bank_cards[1]=new DebitCard(2001,310,Issuer::MASTERCARD,499.0f,300000,Category::PREMIUM);
    bank_cards[2]=new DebitCard(2002,311,Issuer::RUPAY,199.0f,100000,Category::PREMIUM);
    bank_cards[3]=new CreditCard(3000,901,Issuer::MASTERCARD,599.0f,1000000,50000.0f);
    bank_cards[4]=new CreditCard(3001,911,Issuer::RUPAY,299.0f,50000,10000.0f);
}

void MatchingIssuerCards(Card *bank_cards[SIZE], Issuer value,Card* res[SIZE])
{
    if(checkAllNull(bank_cards)){
        throw std::runtime_error("Invalid input. All data are null");
    }
    //Card* res1[SIZE] = {nullptr};// not good
    int k=0;
    for(int i=0;i<SIZE ; i++){

        if(bank_cards[i]==nullptr){
            continue;
        }
        if(bank_cards[i]->issuer()==value){
            res[k++]=bank_cards[i];
        }
    }
}

void deletObjects(Card *cards[SIZE])
{
    for(int i=0; i<SIZE;i++){
        delete cards[i];
    }
}

int HighestChargeCard(Card *arr[SIZE])
{
    if(checkAllNull(arr)){
        throw std::runtime_error("Invalid input. All data are null");
    }

    float max=arr[0]->annualCharge();

    float currentCharge=0.0f;

    int res=arr[0]->cvvNumber();

    for(int i=0;i<SIZE;i++){
        currentCharge=arr[i]->annualCharge();
        if(currentCharge>max){
            max=currentCharge;
            res=arr[i]->cvvNumber();
        }
    }
    return res;
}

Card* findCard(Card *bank_cards[SIZE], int value)
{
    Card* res=nullptr;
    if(checkAllNull(bank_cards)){
        throw std::runtime_error("Invalid input. All data are null");
    }

    for(int i=0; i<SIZE;i++){
        if(bank_cards[i]->number()==value){
            res= bank_cards[i];
    }
    }
    if(res!=nullptr)
    {
         return res;
    }
    else{
        throw std::runtime_error("No data found");
    }
}
