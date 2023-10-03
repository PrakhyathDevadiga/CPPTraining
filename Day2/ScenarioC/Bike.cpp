#include "Bike.h"
#include "Vehicle.h"
#include "BikeType.h"
#include "VehicleType.h"


Bike::Bike(std::string id, std::string brand, float price, VehicleType type, float milage, BikeType bike_type) : Vehicle(id,brand,price,type) , _bike_milage(milage), _bike_type(bike_type){
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float milage, BikeType bike_type) : Vehicle(id,brand,type){
}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _bike_milage: " << rhs._bike_milage
       << " _bike_type: " << DisplayEnum (rhs._bike_type);
    return os;
}
 
std::string DisplayEnum(const BikeType value)
{
    if(value==BikeType::ATV)
        return "ATV";
    else if(value==BikeType::COMMUTE)
        return "COMMUTE";
    else 
        return "SPORTS";
}

float Bike::CalculateTax()
{
    return 0.05f * price();
}
