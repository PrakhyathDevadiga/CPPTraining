#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "CustomerType.h"
#include <iostream>
#include "CreditCard.h"
class Customer
{
private:
    std::string _name;
    std::string _id;
    CustomerType _customer_type;
    CreditCard* _credit_card;

public:
    //constructor
    Customer() =default;
    Customer(const Customer&)=default;

    //constructor with all  4 attributes
    Customer(
        std::string name,
        std::string id,
        CustomerType customer_type,
        CreditCard* credit_card
    );

    //destructor
    ~Customer() {
        delete _credit_card;
        std::cout << "Customer with id: " << _id << " is deleted\n";
    }

    std::string name() const { return _name; }
    void setName(const std::string &name) { _name = name; }

    std::string id() const { return _id; }
    void setId(const std::string &id) { _id = id; }

    CustomerType customerType() const { return _customer_type; }
    void setCustomerType(const CustomerType &customer_type) { _customer_type = customer_type; }

    CreditCard* creditCard() const { return _credit_card; }
    void setCreditCard(CreditCard* credit_card) { _credit_card = credit_card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);
      
};

std::string getEnums(const CustomerType value);

#endif // CUSTOMER_H
