//when you have use function for infinite number of types
#include <iostream>

template <typename T>
void display(T arr[3]){
    for(int i=0;i<3;i++){
        std::cout << "Address: " << arr[i] <<"\n";
    }
}


class Car
{
private:
    /* data */
public:
    Car(/* args */) {}
    ~Car() {}
};

class Employee
{
private:
    /* data */
public:
    Employee(/* args */) {}
    ~Employee() {}
};

int main(){
    Car* arr1[3];
    Employee* arr2[3];

    for(int i=0;i<3;i++){
        arr1[i]=new Car();
        arr2[i]=new Employee();
    }

    display<Car*>(arr1);  //older method and we have to use this in java11
    //display(arr1); //new method
    display<Employee*>(arr2);

}