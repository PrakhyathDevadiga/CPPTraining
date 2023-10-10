#include "Bill.h"

Bill::Bill(float bill_amount, float bill_tax_amount, Invoice * bill_associated_invoice)
: _bill_amount(bill_amount), _bill_tax_amount(bill_tax_amount), _bill_associated_invoice(bill_associated_invoice)
{

}

std::ostream &operator<<(std::ostream &os, const Bill &rhs) {
    os << "_bill_amount: " << rhs._bill_amount
       << " _bill_tax_amount: " << rhs._bill_tax_amount
       << " _bill_associated_invoice: " << *rhs._bill_associated_invoice;
    return os;
}
