#include<iostream>
#include "CarType.h"
#include "Vehicle.cpp"

class Car : public Vehicle
{
private:
    CarType _car_type;
    float _car_price;
    std:: string _car_color;
    Vehicle vehicle;
    
public:
    Car(){}
    ~Car() {}
};