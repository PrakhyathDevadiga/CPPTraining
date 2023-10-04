#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <iostream>
class Manager : public Employee
{
    private:

    public:
        Manager() = default;

        void applyForLeaves(){
            std::cout << "Manager takes leaves when they want tp\n";
        }

        void payTax(){
            std::cout << "Manager pays 15% of salary as tax\n";

        }

        // virtual void Display(){
        //     std::cout << "Manager Display called\n";
        // }

        ~Manager(){
            std::cout << "Manager destroyed\n";
        }

};


#endif // MANAGER_H
