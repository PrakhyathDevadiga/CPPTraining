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
    Employee(const Employee&)=delete ;
    Employee(
        std::string id,
    std::string name,
    float salary,
    Department dept,
    Project* project
    );


    ~Employee() {
        std::cout << "Employee with id: " << _id << " is destroyed\n";
    }

    Project* project() const { return _project; }
    void setProject(Project* project) { _project = project; }

    float salary() const { return _salary; }

    Department dept() const { return _dept; }

    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);

    
};

#endif // EMPLOYEE_H
