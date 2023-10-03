#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type) : _id(id),_brand(brand),_price(price),_type(type)
{

}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type) : _id(id),_brand(brand),_type(type)

{
}

std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "_id: " << rhs._id
       << " _brand: " << rhs._brand
       << " _price: " << rhs._price
       << " _type: " << DiplayEnum(rhs._type);
    return os;
}

std::string DiplayEnum(const VehicleType value)
{
    if(value==VehicleType::BIKE)
        return "BIKE";
    if(value==VehicleType::CAR)
        return "CAR";
    else 
        return "OTHER";    
}
