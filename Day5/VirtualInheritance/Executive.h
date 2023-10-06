#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <iostream>
#include "Employee.h"

class Executive : virtual public Employee
{
private:
    std::string _location;
public:
    Executive(std::string id, std::string name, std::string location ) : Employee(id,name), _location(location){

    }

    void CalculateTax() override{
        std::cout << "Executive pays 40% tax\n";
    }

    virtual ~Executive() {
        std::cout << "Executive with id: " << id() << " is destroyed\n";
    }

    std::string location() const { return _location; }

    friend std::ostream &operator<<(std::ostream &os, const Executive &rhs) {
        os << static_cast<const Employee &>(rhs)
           << " _location: " << rhs._location;
        return os;
    }

    
};

#endif // EXECUTIVE_H
