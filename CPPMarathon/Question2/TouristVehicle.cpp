#include "TouristVehicle.h"

//for comments refer .h file

TouristVehicle::TouristVehicle(std::string number, touristVehicleType type, int seat_count, float per_hour_booking_charge)
: _number(number), _type(type), _seat_count(seat_count), _per_hour_booking_charge(per_hour_booking_charge)
{
}

std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << printEnum(rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _per_hour_booking_charge: " << rhs._per_hour_booking_charge;
    return os;
}


std::string printEnum(const touristVehicleType value)
{
    if(touristVehicleType::BIKE==value){
        return "BIKE";
    }
    else if(touristVehicleType::BUS==value){
        return "BUS";
    }
    else {
        return "CAR";
    }
}


