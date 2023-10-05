#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"

#define SIZE 3

/*
function to create 3 objects of Employee i array
Link one project to one employee
Input : arrays (one for employees)
Output: void
*/
void CreateObjects(Employee* emp_arr[SIZE]);

bool CheckNull(Employee* arr[SIZE]);


/*
A function to return a pointer to the employee with the highest salary
*/
Employee* EmployeeWithHighestSalary(Employee* emp_arr1[SIZE]);


/*
A function to return the count of all employees in the arraywhose department value matches the second parameter
*/
int CountEmployeeWithGivenDepartment(Employee* emp_arr1[SIZE], Department dept_type);

/*
Find the average budget for all projects
*/
float AverageBudget(Employee* emp_arr1[SIZE]);

/*
Function to deallocate the heap ob objects
*/
void FreeMemory(Employee* emp_arr1[SIZE]);

#endif // FUNCTIONALITIES_H
