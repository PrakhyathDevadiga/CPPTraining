#include <iostream>
#include <list>
#include<vector>

//alias for data type(not for variable)
using ls = std::list<std::string>;

// template<class T> similar to below
template<typename T>
class Employee
{
private:
    T _skills;
    std::string _id;
    float _age;

public:
    Employee(T skills,std::string id,float age) : _skills(skills), _id(id), _age(age) {}
    
    ~Employee() {
        std::cout << "Employee with ID: " << _id << " is destroyed\n";
    }

    template<typename F>
    friend std::ostream &operator << ( std::ostream &os, const Employee<F> &rhs ) {
        //os << "_skills: " << rhs._skills; //doesn't work

        //for each loops
        os << "_skills: ";
        for(std::string element : rhs._skills)
        {
            os  <<element<<"\t";
        }

        os  << " _id: " << rhs._id
            << " _age: " << rhs._age;
        return os;
    }    
};


int main(){
    //object of class Employee od list of strings  
    ls skills={"Coding","AI","Vision control"};
    Employee<ls>* e1 =new Employee<ls>(skills ,"emp101", 28.2f);
    std::cout << *e1 <<"\n";
}