#include "/workspaces/CPPTraining/Day3/Scenario4/Vehicle.h"

#include <iostream>

/*
use case 1: wuth varibales of orimitive tyoes which are not pointers
*/
void Demo(){
    //n1 is a constant integer
    const int n1=10;
    //grade is a constant character
    const char grade='A';

    //allowed 
    std::cout << n1 << "\t" << grade << "\n";

    //not allowed
    // n1= 20; //since n1 is immutable (constant), it cannot be chnaged once initialized
    // grade='B'; //since grade is immutable (constant), it cannot be chnaged once initialized
}

int main(){
    Demo();
}