#include "Functionalities.h"
#include "Employee.h"

#define SIZE 3

void CreateObjects(Employee *emp_arr[SIZE])
{
    emp_arr[0]= new Employee("emp101", "Prakhyath",400000.0f,Department::DEVELOPMENT,new Project("CPP Project",70,20000000.f));
    emp_arr[1]= new Employee("emp102", "Ganavi",50000.0f,Department::DEVELOPMENT,new Project("PYTHON Project",50,10000000.f));
    emp_arr[2]= new Employee("emp103", "Prath",60000.0f,Department::TESTING,new Project("JAVA Project",40,10000000.f));
   
}

bool CheckNull(Employee *arr[SIZE])
{
    bool flag=true;
    for(int i=0;i<SIZE;i++){
        if(arr[i] != nullptr){
            flag=false;
        }
    }
    return flag;
}

Employee *EmployeeWithHighestSalary(Employee *emp_arr1[SIZE])
{
    if(CheckNull(emp_arr1)){  
        //data is empty
        //return nullptr; not good apporach
        throw std::runtime_error("Data is empty!");
    }

    //employee pointer to store the result ans set the first employee as max
    Employee* highestPaidEmployee=emp_arr1[0];
    int max=emp_arr1[0]->salary();  //saves time

    //iterating through array
    for(int i=0;i<SIZE;i++){
        //float current= emp_arr1[i]->salary();  //saves time
        if(emp_arr1[i]->salary() > highestPaidEmployee->salary() /*max*/ )  
        //slower as getters is called SIZE times for highestPaidEmployee //saves memory
        //(you can use a float variable to store the highestPaidEmployee salary)
        {
            //max= currentSal; //more speed
            highestPaidEmployee=emp_arr1[i];
        }
    }
    return highestPaidEmployee;
}

int CountEmployeeWithGivenDepartment(Employee *emp_arr1[SIZE],Department dept_type)
{
    if(CheckNull(emp_arr1)){  
        //data is empty
        //return nullptr; not good apporach
        throw std::runtime_error("Data is empty!");
    }
    
    int count=0;
    for(int i=0;i<SIZE;i++){
        if(emp_arr1[i]->dept()==dept_type){
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee *emp_arr1[SIZE])
{
    if(CheckNull(emp_arr1)){  
        //data is empty
        //return nullptr; not good apporach
        throw std::runtime_error("Data is empty!");
    }

    float total_budget=0.0f;
    for(int i=0;i<SIZE;i++){
        total_budget +=  emp_arr1[i]->project()->budget();
    }
    return total_budget/SIZE;
}

void FreeMemory(Employee *emp_arr1[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete emp_arr1[i];
    }
}
