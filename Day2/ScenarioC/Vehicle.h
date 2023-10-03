
#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "VehicleType.h"

class Vehicle
{
private:

    std::string _id;
    std::string _brand;
     float _price;
    VehicleType _type;

public:
    //copy constructor
    Vehicle(const Vehicle& obj)= default;

    //default constrctor and don't use in this project as it is not required
    //Vehicle()=default;
    Vehicle(std::string id,std::string brand, float price, VehicleType type);

    Vehicle(std::string id,std::string brand, VehicleType type);

    virtual float CalculateTax()=0; //pure virtual function (known as Abstract method in Java)


    virtual ~Vehicle() {
        std::cout << "Object with ID: "
        << _id
        << " is destroyed\n";

    }

    std:: string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);

};

/*It takes one enum value and prints it's enum part. Based on the logic written insiede the body */
std::string DiplayEnum(const VehicleType value);

#endif // VEHICLE_H
