#include "Employee.h"

Employee::Employee(std::string id, std::string name, float salary, Department dept, Project* project) :
_id(id), _name(name), _salary(salary), _dept(dept), _project(project)
{
}
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _dept: " << "xxx"
       << " _project: " << *rhs._project;
    return os;
}
