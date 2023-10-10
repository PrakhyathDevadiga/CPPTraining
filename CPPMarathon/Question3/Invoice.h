#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include "InvoiceType.h"
class Invoice
{
private:
    std::string _invoice_number;
    InvoiceType _invoice_type;
    int _invoice_items;

public:
    Invoice()=default;
    Invoice(const Invoice& )=default;

    Invoice(std::string invoice_number, InvoiceType invoice_type, int invoice_items);

    

    ~Invoice() {
        std::cout << "Invoice with number: " << _invoice_number << " is deleted";
    }

    //getters and setters
    std::string invoiceNumber() const { return _invoice_number; }
    void setInvoiceNumber(const std::string &invoice_number) { _invoice_number = invoice_number; }

    //getters and setters
    InvoiceType invoiceType() const { return _invoice_type; }
    void setInvoiceType(const InvoiceType &invoice_type) { _invoice_type = invoice_type; }

    //getters and setters
    int invoiceItems() const { return _invoice_items; }
    void setInvoiceItems(int invoice_items) { _invoice_items = invoice_items; }

    friend std::ostream &operator<<(std::ostream &os, const Invoice &rhs);
};

std::string printEnums(const InvoiceType value);

#endif // INVOICE_H
