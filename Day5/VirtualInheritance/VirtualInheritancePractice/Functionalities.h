#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#define SIZE 5
#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"

bool checkAllNull(Card* bank_cards[SIZE]);

void createCards(Card* bank_cards[SIZE]);

void MatchingIssuerCards(Card *bank_cards[SIZE], Issuer value,Card* res[SIZE]);

void deletObjects(Card *cards[SIZE]);
int HighestChargeCard(Card* arr[SIZE]);

//A function to find and return the pointer to the card whose _number is passed as a second argument to the function
Card* findCard(Card* bank_cards[SIZE], int value);

#endif // FUNCTIONALITIES_H
