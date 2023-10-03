#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include "CarType.h"
#include "VehicleType.h"

    void CreateCars(Car *container[3]);

    float calculateAveragePrice(Car *container[3]);  


    void CallCalculateTax(Car *arr[3]);


    /*
    delete all acquired memory
    */
    void FreeMemory(Car *container[3]);

#endif // FUNCTIONALITIES_H
