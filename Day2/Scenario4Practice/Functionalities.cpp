#include "Functionalities.h"
#include "Customer.h"
void createCustomer(Customer *customers[5])
{
        customers[0]= new Customer(101,"Prakhyath",CustomerType::PREMIUM,100.0f);
        customers[1]= new Customer(102,"Ganavi",CustomerType::VIP,200.0f);
        customers[2]= new Customer(103,"Prajwal",CustomerType::REGULAR,200.0f);
        customers[3]= new Customer(104,"Niketh",CustomerType::REGULAR,500.0f);
        customers[4]= new Customer(105,"Pawan",CustomerType::REGULAR,400.0f);
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

Customer** readCustomerInRange(Customer *customer[5])
{
    static Customer* returnCustomers2[5];
    int j=0;
    for(int i=0;i<5;i++){
        if(((customer[i])->customerStoreCredit())>=100.0f &&((customer[i])->customerStoreCredit())<=200.0f){
            returnCustomers2[j]=customer[i];    
            j++;
        }
        else{
            returnCustomers2[j]= nullptr;
            j++;
        }
    }

    return returnCustomers2;
}

float getAverageStoreCredits(Customer *Customer[5])
{
    float total=0.0f;
    for(int i=0;i<5;i++){
        total += Customer[i]->customerStoreCredit();
    }

    return total/3;
}
