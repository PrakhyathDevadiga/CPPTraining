#include <iostream>

/*
int &ptr;  //reference
&ptr; // no type to the lefy of & pointer
*/


//call by value: copy passed parameter inyo formal parameter
//copies the data
// void magic(int data){
//     std::cout << "Adrress of data: " << &data << "\n";
//     std::cout << "Content in data: " << data << "\n";

//     data=100;

//         std::cout << "After modification, data is: " << data << "\n";


// }

//call by reference(99% time. good approach)
//doesn't copy the data 
void magic(int& data  /*data is referring to n1 , not even a copy, just a copy*/){
    std::cout << "Adrress of data: " << &data << "\n";
    std::cout << "Content in data: " << data << "\n";

    data=100;

        std::cout << "After modification, data is: " << data << "\n";


}


int main(){
    int n1=10;
    std::cout << "Adrress of n1: " << &n1 << "\n";

    //magic(10); //10 will be copied into scope of magic and reference is not possible
    magic(n1); //n1 will be copied into scope of magic 

    std::cout<< "Value in main after calling magic: " << n1 <<  "\n";


} 