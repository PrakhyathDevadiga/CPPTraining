#include "Functionalities.h"
#include <iostream>
//function to check whether all objects are null
bool checkAllNull(Bill *bill_container[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(bill_container[i]!=nullptr){
            return false;
        }
    }
    return true;
}

//function to delete all the objects
void deleteBilles(Bill *bill_container[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete bill_container[i];
        std::cout << "\n";
    }
}

void createBills(Bill *bill_container[SIZE], Invoice *invoice_container[SIZE])
{
    //separate objects of invoice and bill (aggregation)
    invoice_container[0]= new Invoice("i101",InvoiceType::E_BILL,5);
    invoice_container[1]= new Invoice("i102",InvoiceType::PAPER_SLIP,4);
    invoice_container[2]= new Invoice("i103",InvoiceType::SMS_GENERATED,10);

    bill_container[0]=new Bill(2000.0f,200.0f,invoice_container[0]);
    bill_container[1]=new Bill(3000.0f,100.0f,invoice_container[1]);
    bill_container[2]=new Bill(2000.0f,200.0f,invoice_container[2]);
}


std::string invoiceNumber(Bill *bills[SIZE])
{
    //variable to store max amount and current value
    float max=0.0f;
    float currenValue=0.0f;
    std::string in_num="";

    if(checkAllNull(bills)){
        throw std::runtime_error("No objects found.");
    }
    else{        
        for(int i=0;i<SIZE;i++){
            if(bills[i]==nullptr){
                continue;
            }
            else{
                currenValue=bills[i]->billAmount();
                if(currenValue>max){
                    max=currenValue;
                    in_num=bills[i]->billAssociatedInvoice()->invoiceNumber();
                }
            }
        }
        //returing the max value
        return in_num;

    }
    throw std::runtime_error("No bill found");

}

//function to find the bill amount
//input : bill array pointer and invoice number
//output : float value with max bill amount
float maxBillAmount(Bill *bills[SIZE], std::string input_number)
{
    if(checkAllNull(bills)){
        throw std::runtime_error("No objects found.");
    }
    else{
        
        for(int i=0;i<SIZE;i++){
            if(bills[i]==nullptr){
                continue;
            }
            else if(bills[i]->billAssociatedInvoice()->invoiceNumber()==input_number){
                return bills[i]->billAmount();
            }
        }
       throw std::runtime_error("No bill found");
    }

}

//function to get max and min bill
//input: array pointer, variable for max and min
//output: void
void getMinandMaxBills(Bill *bills[SIZE], float *minP, float *maxP)
{
    float currentValue=0.0f;
    *minP=bills[0]->billAmount();
    *maxP=bills[0]->billAmount();
    if(checkAllNull(bills)){
        throw std::runtime_error("No objects found.");
    }
    else{
        
        for(int i=0;i<SIZE;i++){
            if(bills[i]==nullptr){
                continue;
            }
            else

            {
                currentValue=bills[i]->billAmount();
                if(currentValue>*maxP){
                    *maxP=currentValue;   
                }
                if(currentValue<*minP){
                    *minP=currentValue;
                }
        }
    }
}
}



//function to return invoice container
//input : bill array pointer and threshold value and invoice array pointer
//output : invoice array pointer
void invoiceInstances(Bill *bills[SIZE], float amount, Invoice* invoices[SIZE])
{
    int k=0;
    if(checkAllNull(bills)){
        throw std::runtime_error("No objects found.");
    }
    else{
        for(int i=0;i<SIZE;i++){
            if(bills[i]==nullptr){
                continue;
            }
            else if (bills[i]->billAmount()>amount){
                invoices[k]=bills[i]->billAssociatedInvoice();
            }
        }
    }
}