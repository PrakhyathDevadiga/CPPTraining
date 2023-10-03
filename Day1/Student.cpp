#include <istream>
#include "Department.h"

class Student
{
private:
    int _roll_number;
    std:: string _name;
    float _fees;
    char _grade;
    Department _dept; //IT, CS, AI_ML (enum - categorical data (fixed no. of data))
public:
    Student() =default;             //default version
    Student(int rnum, std:: string name, float fees, char grade, Department dept) {
            this->_name=name;
            this->_fees=fees;
            this->_roll_number=rnum;
            this->_grade=grade;
            this->_dept=dept;
        }

    ~Student() {
        std::cout << "Student with roll number: " 
            <<this->_roll_number
            <<" is now destroyed\n";
    }
};

int main(){
    //stack
    Student s1(101,"Prakhyath",87777.0f,'A',Department::CS);
    Student s3(103,"Ganavi",87777.0f,'A',Department::CS); //datatype-student

    //heap
    Student* s2=new Student(202,"Rohan",87669.0f,'A',Department::AI_ML); //datatype- Student pointer
    Student* s4=new Student(203,"Rita",87669.0f,'B',Department::IT); //datatype- Student pointer


    delete s2;     //destructor will be called
    Student arr[2]={s1,s3}; //stack allocated Student obejcts
    Student* heapArr[2]={s2,s4}; //array should store only one datatype

    //Student* temp[3]={s1,s2,s3}; //not possible


}