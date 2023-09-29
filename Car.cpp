#include<iostream>
#include "CarType.h"

class Car
{
private:
    CarType _car_type;
    float _car_price;
    std:: string _car_color;

public:
    Car()=default;
    ~Car() {}
};