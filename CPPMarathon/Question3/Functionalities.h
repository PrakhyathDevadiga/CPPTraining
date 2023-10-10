#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Bill.h"
#include "Invoice.h"
#include "InvoiceType.h"
#define SIZE 3

//function to check whether all objects are null
bool checkAllNull(Bill* bill_container[SIZE]);

//function to delete all the objects
void deleteBilles(Bill* bill_container[SIZE]);


//function to create 5 bills
//input : bill array pointer and invoice array pointer
///output : void
void createBills(Bill* bill_container[SIZE], Invoice* invoice_container[SIZE]);

//function to find and return invocie number with the highest billamount from bills
//input : bill array pointer
//output : string with 
std::string invoiceNumber(Bill* bills[SIZE]);

//function to find the bill amount
//input : bill array pointer and invoice number
//output : float value with max bill amount
float maxBillAmount(Bill* bills[SIZE], std::string input_number);

//function to return invoice container
//input : bill array pointer and threshold value
//output : void
void invoiceInstances(Bill* bills[SIZE], float amount, Invoice* invoices[SIZE]);

//function to get max and min bill
//input: array pointer, variable for max and min
//output: void
void getMinandMaxBills(Bill* bills[SIZE], float *minP, float *maxP);



#endif // FUNCTIONALITIES_H
