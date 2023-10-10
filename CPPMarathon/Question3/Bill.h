#ifndef BILL_H
#define BILL_H
#include "Invoice.h"
#include <ostream>

class Bill
{
private:
    //attributes
    float _bill_amount;
    float _bill_tax_amount;
    Invoice* _bill_associated_invoice;


public:
    //default constructor
    Bill()=default;
    Bill(const Bill&)=default;

    //constructor
    Bill(float bill_amount, float bill_tax_amount, Invoice* bill_associated_invoice);

    ~Bill() {
        delete _bill_associated_invoice;
        std::cout << "Bill is deleted";
    }

    //getters and setters
    float billAmount() const { return _bill_amount; }
    void setBillAmount(float bill_amount) { _bill_amount = bill_amount; }

    //getters and setters
    float billTaxAmount() const { return _bill_tax_amount; }
    void setBillTaxAmount(float bill_tax_amount) { _bill_tax_amount = bill_tax_amount; }

    //getters and setters
    Invoice* billAssociatedInvoice() const { return _bill_associated_invoice; }
    void setBillAssociatedInvoice(Invoice* bill_associated_invoice) { _bill_associated_invoice = bill_associated_invoice; }

    //to print output stream
    friend std::ostream &operator<<(std::ostream &os, const Bill &rhs);
};

#endif // BILL_H
