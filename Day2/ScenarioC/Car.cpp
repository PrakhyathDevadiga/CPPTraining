#include "Car.h"
#include "Vehicle.h"

Car::Car(std::string id, std::string brand, float price, VehicleType type, CarType cType) : Vehicle(id, brand, price, type), _car_type(cType)
{

}

Car::Car(std::string id, std::string brand, VehicleType type, CarType cType) : Vehicle(id, brand, type), _car_type(cType)
{
}

float Car::CalculateTax()
{
    return 0.1f * price();
}
std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " _car_type: " << DiplayEnum(rhs._car_type);
    return os;
}

std::string DiplayEnum(const CarType value)
{
    if(value==CarType::SUV)
        return "SUV";
    else if(value==CarType::SEDAN)
        return "SEDAN";
    else {
        return "HATCHBACK";
    }
}
