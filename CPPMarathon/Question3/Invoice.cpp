#include "Invoice.h"
std::ostream &operator<<(std::ostream &os, const Invoice &rhs) {
    os << "_invoice_number: " << rhs._invoice_number
       << " _invoice_type: " << printEnums(rhs._invoice_type)
       << " _invoice_items: " << rhs._invoice_items;
    return os;
}
std::string printEnums(const InvoiceType value)
{
    if(InvoiceType::PAPER_SLIP==value){
        return "PAPER_SLIP";
    }

    else if(InvoiceType::SMS_GENERATED==value){
        return "SMS_GENERATED";
    }
    else{
        return "E_BILL";
    }
}


Invoice::Invoice(std::string invoice_number, InvoiceType invoice_type, int invoice_items)
: _invoice_number(invoice_number), _invoice_type(invoice_type), _invoice_items(invoice_items)
{
}
