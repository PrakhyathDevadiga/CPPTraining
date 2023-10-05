#include "Employee.h"
#include "Project.h"
#include "Functionalities.h"
#include <iostream>

#define SIZE 3

int main(){
    Employee* emp_arr[SIZE]={};

    try{
            CreateObjects(emp_arr);


    Employee* highest_paid_employee = EmployeeWithHighestSalary(emp_arr);
    std::cout << "Employee with max salary: " << *highest_paid_employee ;

    std::cout << "\n------------------------\n";

    std::cout << "Count of employee is Development department: " << CountEmployeeWithGivenDepartment(emp_arr,Department::DEVELOPMENT);

    std::cout << "\n------------------------\n";

    std::cout << "Average budget: " << AverageBudget(emp_arr);

    std::cout << "\n------------------------\n";

    }
    catch (std::runtime_error& ex){
        std::cout << ex.what();
    }

    FreeMemory(emp_arr);

}
