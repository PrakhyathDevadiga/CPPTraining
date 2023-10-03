#include<iostream>
#include "Car.h"
#include "Functionalities.h"
int main()
{
    Car* cars[3];
    CreateCars(cars);
    CallCalculateTax(cars);
    std::cout<<"Average price is: " << calculateAveragePrice(cars) <<"\n";
    FreeMemory(cars);
};