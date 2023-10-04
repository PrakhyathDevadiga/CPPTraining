#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"
class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _vehicle_type;
public:
    Vehicle() =delete; //disabled default constructor
    Vehicle(const Vehicle& ) =default; //defaulted copy constructor
    
    Vehicle(std::string _id,
    std::string _brand,
    float _price,
    VehicleType _vehicle_type);

    ~Vehicle() {
        std::cout << "Vehicle with id: " << _id << " is deleted";
    }


    float CalculateTax();

    float CalculateTax(float tax_parcent);

    float CalculateTax(float cgst, float tax_parcent);

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType vehicleType() const { return _vehicle_type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
    
    
};

std::string DisplayEnum(const VehicleType value);



#endif // VEHICLE_H
