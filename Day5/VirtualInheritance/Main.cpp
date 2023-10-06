//5th qn virtual inheritance

#include <iostream>
#include "Director.h"
#include "Employee.h"

int main(){
    // In multiple inhertance if you want to access all the data members of e1 object don't use upcasting
    // If you want to use upcasting don't use multiple inheritance 
    // beacuse printing is possible for base class variables in the case both multiple inheritance and upcasting is used
    // in multiple inheritance if you use upcasting only the base class attribute is available to print
    Director *e1= new Director(
        "D191",
        "Prakhyath",
        16,
        "Pune",
        97778766.0f
    );

    std::cout << "ID from Employee: " << e1->id() << "\n";
    std::cout << "Name from Employee: " << e1->name() << "\n";
    std::cout << "Team Size from Manager section: " << e1->teamSize() << "\n";
    std::cout << "Location from executive section: " << e1->location() << "\n";
    std::cout << "Budget from director section: " << e1->budget() << "\n";

    std::cout << "Calling CalculateTax inherited from the manager class\n";
    e1->Manager::CalculateTax();


    std::cout << "Calling CalculateTax inherited from the excutive class\n";
    //e1->Executive::CalculateTax();

    std::cout << "Director's implementation of CalculateTax:\n";
    e1->CalculateTax();


    std::cout << "\nDirector: " << *e1 << "\n";
    delete e1;
}