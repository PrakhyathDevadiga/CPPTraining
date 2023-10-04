#include <iostream>

void Demo(){
    int n1=10;
    int n2=20;
//     //const is applied on 'int' not on 'int*)

//     //ptr is a pointer to a Constant integer
//     const int* ptr=&n1;

//     //since int part is constant, I cannot use pointer to change n1's valye
//     //*ptr=100; //this is not possible (pointer is assuming that n1 is constant but it is not the case)
//     ptr=&n2; //this is possible
//     n1=30; //this is pfcouse possible

    // int const *ptr=&n1;
    // //*ptr=100;
    // ptr=&n2;
    // n1=30;

    // int * const ptr=&n1;
    // *ptr=100;
    // //ptr=&n2;
    // n1=30;

    //both integer and pointer is constant
    const int * const ptr=&n1;
    //*ptr=100;
    //ptr=&n2;
    n1=30;



}

int main(){
    
}