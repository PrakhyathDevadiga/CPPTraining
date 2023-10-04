#include "Car.h"

Car::Car(std::string car_chasis_number, std::string car_brand, std::string car_model, CarCateogry car_category, float car_price, int car_seat_count, int car_fuel_capacity) :
     _car_chasis_number(car_chasis_number),
     _car_brand(car_brand),
     _car_model(car_model),
     _car_category(car_category),
     _car_price(car_price),
     _car_seat_count(car_seat_count),
     _car_fuel_capacity(car_fuel_capacity)
{
}

Car::Car(std::string car_chasis_number, std::string car_brand, std::string car_model, float car_price) :
_car_chasis_number(car_chasis_number),
_car_brand(car_brand),
_car_model(car_model),
_car_price(car_price)
{
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_car_chasis_number: " << rhs._car_chasis_number
       << " _car_brand: " << rhs._car_brand
       << " _car_model: " << rhs._car_model
       << " _car_category: " << getCarCategory(rhs._car_category)
       << " _car_price: " << rhs._car_price
       << " _car_seat_count: " << rhs._car_seat_count
       << " _car_fuel_capacity: " << rhs._car_fuel_capacity;
    return os;
}

std::string getCarCategory(const CarCateogry value)
{
    if(CarCateogry::SEDAN==value)
        return "SEDAN";
    else if(CarCateogry::SUV==value)
        return "SUV";
    else 
        return "SPORTS_HATCHBACK";
}
