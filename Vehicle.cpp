#include<iostream>
#include "VehicleType.h"
#include "Insurance.cpp"

class Vehicle
{
private:
    int _vehicle_id;
    int _vehicle_registration;
    VehicleType vehicle_type;
    Insurance _vehicle_insurance_plan;

public:

    Vehicle()=default;
    ~Vehicle(){}
};