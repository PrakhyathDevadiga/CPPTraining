#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"
#include "Project.h"


/*
function to create 3 objects of Projects in an array
function to create 3 objects of Employee in a separate array
Link one project to one employee
Input : 2 arrays (one for employees), (second for Project)
Output: void
*/
void CreateObjects(Employee* emp_arr[3], Project* project_arr[3]);

/*
A function to return a pointer to the employee with the highest salary
*/
Employee* EmployeeWithHighestSalary(Employee* emp_arr1[3]);


/*
A function to return the count of all employees in the arraywhose department value matches the second parameter
*/
int CountEmployeeWithGivenDepartment(Employee* emp_arr1[3], Department dept_type);

/*
Find the average budget for all projects
*/
float AverageBudget(Project* project_arr1[3]);

/*
Function to deallocate the heap ob objects
*/
void FreeMemory(Employee* emp_arr1[3]);

#endif // FUNCTIONALITIES_H
