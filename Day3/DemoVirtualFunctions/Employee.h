#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>

class Employee
{
    private:

    public:
        Employee() = default;

        void applyForLeaves(){
            std::cout << "Employee applies for leaves on the portal\n";
        }

        virtual void payTax(){
            std::cout << "Employee pays 20% of salary as tax\n";

        }

        virtual void Display(){
            std::cout << "Employee Display called\n";
        }

        virtual ~Employee(){
            std::cout << "Employee destroyed\n";
        }

};

#endif // EMPLOYEE_H
