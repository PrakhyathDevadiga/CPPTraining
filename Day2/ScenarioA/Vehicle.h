
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

    std::string id() const { return _id; }

    std::string brand() const { return _brand; }

    float price() const { return _price; }

    Type type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
        os << "_id: " << rhs._id
           << " _brand: " << rhs._brand
           << " _price: " << rhs._price
           << " _type: ";
        return os;
    }

    
};

#endif // VEHICLE_H