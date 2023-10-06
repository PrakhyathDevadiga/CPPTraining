#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "Employee.h"
class Manager : virtual public Employee
{
private:
    int _team_size;
public:
    //Manager(int size):_team_size(size){}; //can be used if employee has default constructor
    Manager(std::string id, std::string name, int team_size) : Employee(id,name), _team_size(team_size)
    {

    }

    void CalculateTax() override{
        std::cout << "Manager pays 20% tax\n";
    }
   
   virtual ~Manager() {
        std::cout << "Manager with id: " << id() << " is destroyed\n";
    }

   int teamSize() const { return _team_size; }

   friend std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
       os << static_cast<const Employee &>(rhs)
          << " _team_size: " << rhs._team_size;
       return os;
   }

    

};

#endif // MANAGER_H
