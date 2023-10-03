#include<iostream>
#include "Car.h"
#include "Functionalities.h"
#include "Vehicle.h"
int main()
{
    Vehicle* garage[3];
    CreateCars(garage);
    CallCalculateTax(garage);
    std::cout<<"Average price is: " << calculateAveragePrice(garage) <<"\n";
    FreeMemory(garage);
};