#include "Bill.h"
#include "Invoice.h"
#include <iostream>
#include "Functionalities.h"
#define SIZE 3

int main(){
    Bill* bills[SIZE]={nullptr};
    Invoice* invoice[SIZE]={nullptr};
    float max;
    float min=10;
    float* minP=&min;
    float *maxP=&max;

    try{
    createBills(bills,invoice);

    std::cout << "Highest Bill Amount: " << invoiceNumber(bills) << "\n";

    std::cout << "Bill amount of given instance: " << maxBillAmount(bills,"i101") << "\n";

    getMinandMaxBills(bills,minP,maxP);
    std::cout << "Bill with max amount: " << *maxP << "\nBill with min amount: " << *minP << "\n";

    std::cout << "Invoices more than input value:\n " ;
    invoiceInstances(bills,1500.0f,invoice);
    for(int i=0; i<SIZE;i++){
        if(invoice[i]==nullptr){
            continue;
        }
        else{
            std::cout << *invoice[i] << "\n";
        }
    }


    deleteBilles(bills);}
    catch(std::runtime_error e){
        std::cout << e.what();
    }
}