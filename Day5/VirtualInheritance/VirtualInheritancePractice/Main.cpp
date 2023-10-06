#include "Issuer.h"
#include "Functionalities.h"
#include "Card.h"
#define SIZE 5
#include <iostream>
int main(){
    Card* cards[SIZE]={nullptr,nullptr,nullptr,nullptr,nullptr};
    Card* res[SIZE]={nullptr};
    try
    {
        createCards(cards);

        MatchingIssuerCards(cards,Issuer::MASTERCARD,res);
        int i=0;
        while (res[i]!=nullptr)
        {
            std::cout << *res[i] <<"\n";
            i++;
        }

        std::cout << "-------------------\n";

        std::cout<< "Highest charged card: " << HighestChargeCard(cards) <<"\n";

        std::cout << "-------------------\n";

        std::cout<< "Card details are: " << *(findCard(cards, 2000)) <<"\n";

    }
    catch(const std::runtime_error e)
    {
        std::cout << e.what() << "\n";
    }

    deletObjects(cards);


}