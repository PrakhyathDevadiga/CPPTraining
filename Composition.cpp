/*
Composition : 
Class A is made by using class B in such a way
that class B cannot exist indendently but class
 A has its own existance

*/
#include<iostream>
class DebitCard
{
private:
    int _cvv_number;
    std:: string _card_number;
public:
    DebitCard(int cvv, std::string number) : _card_number(number), _cvv_number(cvv){

    }
    ~DebitCard() {
        std:: cout << "Debit card destroyed\n";
    }
};


class Account
{
private:
    DebitCard* obj; //DebitCard*, DebitCard&  stack allocated debit card  

    //card is a DebitCard pointer
    //DebitCard* card= NEW DebitCard();

    //reference
    //DebitCard& c1=obj; c1 is alternate name for obj;
    //DebitCard&& c1=std::move(obj); c1 is a rvalue reference of card (modern cpp)

    std:: string _name;
public:
    Account(DebitCard* card, std:: string name ) 
    : obj(card) /* without default constructor in debit card class */
    , _name(name){
    }

    ~Account() {
    }

    friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
        os << "obj: " << rhs.obj
           << " _name: " << rhs._name;
        return os;
    }
    
};

int main(){
    Account* ac1= new Account(
        new DebitCard(781,"4321 56"),
        "Prakhyath"
    );


    DebitCard* db= new DebitCard(201, "4312 43");
    Account* ac2= new Account(db,"Ganavi"); 

    std:: cout << *ac1 << "\n";
    std:: cout << *ac2;

}