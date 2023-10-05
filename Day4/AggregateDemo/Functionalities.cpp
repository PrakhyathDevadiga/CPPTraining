#include "Functionalities.h"
#include "Employee.h"
void CreateObjects(Employee *emp_arr[3], Project *project_arr[3])
{
    

    //3 project objects
    project_arr[0]= new Project("CPP Project",70,20000000.f);
    project_arr[1]= new Project("JAVA Project",40,10000000.f);
    //project_arr[2]= new Project("PYTHON Project",30,10000000.f);
    project_arr[2]= new Project("PYTHON Project",30,10000000.f);



    //creating 3  employee objects 
    emp_arr[0]= new Employee("emp101", "Prakhyath",30000.0f,Department::DEVELOPMENT,project_arr[0]);
    emp_arr[1]= new Employee("emp102", "Ganavi",50000.0f,Department::DEVELOPMENT,project_arr[1]);
    emp_arr[2]= new Employee("emp103", "Prath",60000.0f,Department::TESTING,project_arr[2]);
   

}

Employee *EmployeeWithHighestSalary(Employee *emp_arr1[3])
{
    //employee pointer to store the result
    Employee* highestPaidEmployee=emp_arr1[0];

    //iterating through array
    for(int i=0;i<3;i++){
        if(emp_arr1[i]->salary() > highestPaidEmployee->salary()){
            highestPaidEmployee=emp_arr1[i];
        }
    }
    return highestPaidEmployee;
}

int CountEmployeeWithGivenDepartment(Employee *emp_arr1[3],Department dept_type)
{
    int count=0;
    for(int i=0;i<3;i++){
        if(emp_arr1[i]->dept()==dept_type){
            count++;
        }
    }
    return count;
}

float AverageBudget(Project *project_arr1[3])
{
    float total_budget=0.0f;
    for(int i=0;i<3;i++){
        total_budget += project_arr1[i]->budget();
    }
    return total_budget/3;
}

void FreeMemory(Employee *emp_arr1[3])
{
    for(int i=0;i<3;i++){
        delete emp_arr1[i]->project();
        delete emp_arr1[i];
    }
}
