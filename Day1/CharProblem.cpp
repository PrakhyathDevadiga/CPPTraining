#include <iostream>

int main(){
    //initialization symbol should be taken care
    //char arr[6]={'h','e','l','l','o'};  //now it is treated as string
    char arr[6]="hello";  //now it is treated as string

    //string rule is applied rather than pointer array
    //strings are represented as pointer to the pointer
    std::cout <<(void*)arr <<"\n";
    std::cout <<&arr << "\n";
    std::cout <<arr[1] <<"\n";
    std::cout <<(void*)(arr+1);
}