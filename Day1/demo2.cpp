#include <iostream>
int main(){
    int arr[5]={1,2,3,4,5};   //arrays are actually pointers
    std::cout 
        << "Content of arr: (address of first location): " 
        << arr 
        <<"\n";

    std::cout
        <<"Address of first location: "
        <<(arr+0)   //0x100H + 0*4=0x100H
        <<"\n";

    std::cout
        <<"Content of first location: "
        <<*(arr+0)   
        <<"\n";
    
    
}