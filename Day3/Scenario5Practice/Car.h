#ifndef CAR_H
#define CAR_H
#include <iostream>

#include "CarCategory.h"
class Car
{
private:
    std::string _car_chasis_number;
    std::string _car_brand;
    std::string _car_model;
    CarCateogry _car_category;
    float _car_price;
    int _car_seat_count;
    int _car_fuel_capacity;

public:

    //defaulted constructor for shallow copy
    Car(const Car& )=default;

    //Constructor with all attributes
    Car(std::string _car_chasis_number,
        std::string _car_brand,
        std::string _car_model,
        CarCateogry _car_category,
        float _car_price,
        int _car_seat_count,
        int _car_fuel_capacity);

    //Constructor with 4 attributes
    Car(std::string _car_chasis_number, std::string _car_brand, std::string _car_model, float _car_price);

    
     
    //+ overloading to add sum of 2 cars
    float operator+ (Car& obj){
        return this->carPrice()+ obj.carPrice();
    }

    //destructor
    ~Car() {
        std::cout << "Car with chasis number: " << _car_chasis_number << " is deleted\n";
    }

    //getters and setters for all attribautes
    std::string carChasisNumber() const { return _car_chasis_number; }
    void setCarChasisNumber(const std::string &car_chasis_number) { _car_chasis_number = car_chasis_number; }

    std::string carBrand() const { return _car_brand; }
    void setCarBrand(const std::string &car_brand) { _car_brand = car_brand; }

    std::string carModel() const { return _car_model; }
    void setCarModel(const std::string &car_model) { _car_model = car_model; }

    CarCateogry carCategory() const { return _car_category; }
    void setCarCategory(const CarCateogry &car_category) { _car_category = car_category; }

    float carPrice() const { return _car_price; }
    void setCarPrice(float car_price) { _car_price = car_price; }

    int carSeatCount() const { return _car_seat_count; }
    void setCarSeatCount(int car_seat_count) { _car_seat_count = car_seat_count; }

    int carFuelCapacity() const { return _car_fuel_capacity; }
    void setCarFuelCapacity(int car_fuel_capacity) { _car_fuel_capacity = car_fuel_capacity; }

    //friend function with << overloading
    friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};

//function to convert enum values to string
std::string getCarCategory(const CarCateogry value);

#endif // CAR_H

