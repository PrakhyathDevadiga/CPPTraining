#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include "Department.h"
#include "Project.h"
class Employee
{
private:
    std::string _id;
    std::string _name;
    float _salary;
    Department _dept;
    Project* _project;
    
public:
    Employee() =delete; 
    Employee(const Employee&) = delete;
    Employee(
        std::string _id,
    std::string _name,
    float _salary,
    Department _dept,
    Project* _project
    );


    ~Employee() {
        std::cout << "Employee with id: " << _id << " is destroyed\n";
    }
};

#endif // EMPLOYEE_H
