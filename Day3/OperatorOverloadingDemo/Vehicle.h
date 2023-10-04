#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"


std::string DisplayEnum(const VehicleType value);

class Vehicle
{
private:
    std::string _id;
    std::string _brand;
    float _price;
    VehicleType _vehicle_type;
public:
    //Vehicle= default; //default constructor
    //Vehicle() =delete; //disabled default constructor
    Vehicle(const Vehicle& ) =default; //defaulted copy constructor
    
    Vehicle(std::string _id,
    std::string _brand,
    float _price,
    VehicleType _vehicle_type);

    ~Vehicle() {
        std::cout << "Vehicle with id: " << _id << " is deleted\n";
    }


    float CalculateTax();

    float CalculateTax(float tax_parcent);

    float CalculateTax(float cgst, float tax_parcent);

    std::string id() const { return _id; }




    //operator overloading
    //e1 + e2
    float operator+(Vehicle& e2){
        //currents object's price + passed object's price
        return this->price() + e2.price();
    }


    //overloading operator+
     float operator+(Vehicle* e2){
        //currents object's price + passed object's price
        return this->price() + e2->price();
    }


    std::string brand() const { return _brand; }

    float price() const { return _price; }

    VehicleType vehicleType() const { return _vehicle_type; }


    friend std::ostream& operator<<(std::ostream& os , Vehicle& obj){
        os << "Id: " << obj._id << "\t" << "Brand: " << obj._brand << "\t" << "Price: " << obj._price << "\t"
         << "Type: " << DisplayEnum(obj._vehicle_type);

         return os; 
    }

};




#endif // VEHICLE_H
