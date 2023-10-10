#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include "TouristVehicleType.h"
#include <iostream>
//toristvehicle class
class TouristVehicle
{
private:
    //attributes
    std::string _number;
    touristVehicleType _type;
    int _seat_count;
    float _per_hour_booking_charge;
public:
    //default constructor
    TouristVehicle()=default;

    //copy constructor
    TouristVehicle(const TouristVehicle&) = default;

    //constructor with all 4 attributes
    TouristVehicle(
        std::string number,
        touristVehicleType type,
        int seat_count,
        float per_hour_booking_charge
    );

    ~TouristVehicle() {
        std::cout << "Tourist vehicle with number: " << _number <<" is deleted";
    }

    //getters and setters for variables
    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    //getters and setters for variables
    touristVehicleType type() const { return _type; }
    void setType(const touristVehicleType &type) { _type = type; }

    //getters and setters for variables
    int seatCount() const { return _seat_count; }
    void setSeatCount(int seat_count) { _seat_count = seat_count; }

    //getters and setters for variables
    float perHourBookingCharge() const { return _per_hour_booking_charge; }
    void setPerHourBookingCharge(float per_hour_booking_charge) { _per_hour_booking_charge = per_hour_booking_charge; }

    //output stream function
    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

//to print the Vehicle type
std::string printEnum(const touristVehicleType value);

#endif // TOURISTVEHICLE_H
