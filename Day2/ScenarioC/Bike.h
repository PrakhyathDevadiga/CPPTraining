#ifndef BIKE_H
#define BIKE_H
#include "BikeType.h"
#include "Vehicle.h"
#include <ostream>
class Bike : public Vehicle
{
private:
    float _bike_milage;
    BikeType _bike_type;
public:
    //4+2 CNSTRUCTOR
    Bike(std:: string id, std::string brand, float price,
    VehicleType type, float milage, BikeType bike_type);

    //3+2 CONSTRUCTOR
    Bike(std:: string id, std::string brand, VehicleType type, 
    float milage, BikeType bike_type);

    float CalculateTax() override;

    
    ~Bike() {
        std::cout<< "Bike with id: " << id() << " is destroyed";
    }

    friend std::ostream &operator<<(std::ostream &os, const Bike &rhs);
};

std::string DisplayEnum(const BikeType value);
#endif // BIKE_H
