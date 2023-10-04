#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Customer.h"


void createCustomer(Customer *customers[5]);

Customer** readCustomer(Customer *customers[5], CustomerType customer_type);

Customer readCustomerInRange(Customer *customer[5]);

float getAverageStoreCredits(Customer *Customer[5]);

#endif // FUNCTIONALITIES_H
