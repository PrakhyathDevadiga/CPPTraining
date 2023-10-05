#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#include <iostream>
int main(){
    Employee* emp_arr[3];
    Project* project_arr[3];
    CreateObjects(emp_arr,project_arr);

    Employee* highest_paid_employee = EmployeeWithHighestSalary(emp_arr);
    std::cout << "Employee with max salary: " << *highest_paid_employee ;

    std::cout << "\n------------------------\n";

    std::cout << "Count of employee is Development department: " << CountEmployeeWithGivenDepartment(emp_arr,Department::DEVELOPMENT);

    std::cout << "\n------------------------\n";

    std::cout << "Average budget: " << AverageBudget(project_arr);

    std::cout << "\n------------------------\n";

    FreeMemory(emp_arr);
}
