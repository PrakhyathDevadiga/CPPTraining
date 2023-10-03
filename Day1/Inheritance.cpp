#include <iostream>
#include<list>
#include<vector>
class Student
{
private:
    int _id;
    std:: string _name;

public:
    Student(int id, std:: string name) {
        this->_id=id;
        this->_name=name;
    }
    ~Student() {}
};


class Engineer : public Student{
    private:
        std:: string _course_name;

    public:
        Engineer(int id, std:: string name, std:: string course_name)
        : Student(id,name){
            this->_course_name=course_name;
        }
        ~Engineer(){}
};

int main(){
    Engineer *e1= new Engineer(101,"Prakhyath","BTECH: CS");
    Student *c1=new Student(102,"Ganavi");

    Student* arr[2]={e1,c1};   //upcasting (storing child details in parent) e1 us a studnet , c1 is a student

    std::list<Student*> data1={e1, c1};
    std::vector<Student*> data2={e1, c1};



}
