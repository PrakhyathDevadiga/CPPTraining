#include "Manager.h"
#include "Employee.h"
int main(){
    Employee* arr[2];

    arr[0]=new Employee();
    arr[1]=new Manager();

    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();

    arr[0]->payTax();
    arr[1]->payTax();

    arr[0]->Display();
    arr[1]->Display();

    delete arr[0];
    delete arr[1];

}