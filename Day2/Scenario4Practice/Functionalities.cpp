#include "Functionalities.h"
#include "Customer.h"
void createCustomer(Customer *customers[5])
{
        customers[0]= new Customer(101,"Prakhyath",CustomerType::PREMIUM,100000.0f);
        customers[1]= new Customer(102,"Ganavi",CustomerType::VIP,200000.0f);
        customers[2]= new Customer(103,"Prajwal",CustomerType::REGULAR,20000.0f);
        customers[3]= new Customer(104,"Niketh",CustomerType::REGULAR,50000.0f);
        customers[4]= new Customer(105,"Pawan",CustomerType::REGULAR,40000.0f);
}

Customer** readCustomer(Customer *customers[5], CustomerType customer_type)
{
    static Customer* returnCustomers[5];
    int j=0;
    for(int i=0;i<5;i++){
        if((customers[i])->customerType()==customer_type){
            returnCustomers[j]=customers[i];
            j++;
        }
        else{
            returnCustomers[j]= nullptr;
            j++;
        }
    }

    return returnCustomers;
}

// Customer readCustomerInRange(Customer *customer[5])
// {
// }

// float getAverageStoreCredits(Customer *Customer[5])
// {
// }
