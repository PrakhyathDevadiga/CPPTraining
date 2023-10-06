#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "Card.h"
#include "Category.h"
#include "Issuer.h"
#include <ostream>

class DebitCard : public Card
{
private:
    Category _category;

public:
    DebitCard(
        int number,
        int cvv_number,
        Issuer issuer,
        float annual_charge,
        int limit,
        Category category
    );

    float CalculateTaxOnCharge() override;

    ~DebitCard() {
        std::cout << "Debit card with id: " << number() << " is deleted";
    }

    Category category() const { return _category; }

    friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);

};

std::string getCategory(const Category& value);

#endif // DEBITCARD_H
