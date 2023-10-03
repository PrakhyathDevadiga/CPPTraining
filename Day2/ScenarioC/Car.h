#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include <ostream>

class Car : public Vehicle
{
private:
    CarType _car_type;
public:
    Car( std:: string id,
    std::string brand,
    float price,
    VehicleType type, CarType cType);

    Car( std:: string id,
    std::string brand,
    VehicleType type, CarType cType);

    //CLASS LEVEL FUCNTION. EVERY CAR SHOULD CALL IT
    float CalculateTax() override;

    ~Car() {
        //calling getter since it is a private pro
        std::cout << "Car part of Vehicle with Id: "
            << id()
            << " is destroyed\n";
    }

    CarType carType() const { return _car_type; }

    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

    
};

std::string DiplayEnum(const CarType value);


#endif // CAR_H
