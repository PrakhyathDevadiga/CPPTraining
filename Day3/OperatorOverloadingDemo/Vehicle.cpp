#include "Vehicle.h"

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType vehicle_type) :
_id(id), _brand(brand), _price(price), _vehicle_type(vehicle_type)
{
}

float Vehicle::CalculateTax()
{
    return 0.18f * _price;
}

float Vehicle::CalculateTax(float tax_parcent)
{
    return tax_parcent * _price;
}

float Vehicle::CalculateTax(float cgst, float sgst)
{
    return (cgst * _price) + (sgst * _price * 3);
}


std::string DisplayEnum(const VehicleType value)
{
    if(VehicleType::BIKE==value)
        return "BIKE";
    else if(VehicleType::CAR==value)
        return "CAR";
    else 
        return "OTHER";
}
