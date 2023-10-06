#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"
#include "Manager.h"
#include "Executive.h"
#include <ostream>

/*
In multiple inheritance in CPP, the most derived class is responsible for instantiating the most base class/classes
*/

class Director : public Manager, public Executive
{
private:
    float _budget;

public:
    Director(std::string id, std::string name, int size, std::string location, float budget) 
    : Employee(id, name), _budget(budget), 
        Manager(id, name, size),
        Executive(id, name, location)
        {
    }

    void CalculateTax(){
        std::cout << " Direcctor pays 50% as tax";
    }

    ~Director() {
        std::cout << "Director with id: " << id() << " is deleted\n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Director &rhs) {
        os << static_cast<const Manager &>(rhs)
           << static_cast<const Executive &>(rhs)
           << " _budget: " << rhs._budget;
        return os;
    }

    
};
#endif // DIRECTOR_H
