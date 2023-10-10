#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "TouristVehicle.h"
#include "TouristVehicleType.h"
#include <iostream>
#define SIZE 3
//function to create 3 toursitvehicles
//input : primitive array which store addresses of objects
//output : void
void createTouristVehicle(TouristVehicle* _tv_array[SIZE]);

//function to check all values are null or not
bool checkAllNull(TouristVehicle* _tv_array[SIZE]);

//function to find and return pointers to all instances of touristVehicle with minimum 4 seat count
//input : primitive array which store addresses of objects and a primitive array to return the points
//output : void
void vehicleWithGoodCapacity(TouristVehicle* _tv_array[SIZE], TouristVehicle* result[SIZE]);

//function to average per hour booking of car type
//input : primitive array which store addresses of objects
//output : average value of float type
float averageBookingPrice(TouristVehicle* tv_array[SIZE]);

//function to find and return the tourist vehicle instance wiht maximum per hour booking
//input : primitive array which store addresses of objects and a primitive array to return the points
//output : touris vehicle pointer
TouristVehicle* maxPerHourBooking(TouristVehicle* _tv_array[SIZE]);


//function to delete all objects
void deleteObjects(TouristVehicle* _tv_array[SIZE]);
#endif // FUNCTIONALITIES_H
