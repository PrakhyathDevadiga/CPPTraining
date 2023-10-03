
#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "Type.h"

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    Type _type;

public:
    Vehicle(
        std::string id,
        std::string brand,
        Type type,
        float price
    );

    Vehicle(
        std::string id,
        std::string brand,
        Type type
    );

    //defaulted copy constructor - I will not write the body of copy cosntrucot. Complier should generate a default version
    //of it during compilation 
    //does shallow copy
    Vehicle(const Vehicle&)=default;

    // Vehicle (const Vehicle& obj){
    //     this->_id=obj._id;
    //     this->__brand=obj.__brand;
    //     this->_price=obj._price;
    //     this->_type=obj._type;
    // } ;

    ~Vehicle() {
        std::cout <<"Vehicle with id: " << _id << " is destroyed";

    }
};

#endif // VEHICLE_H