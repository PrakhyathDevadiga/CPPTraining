#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "Car.h"
#include "CarType.h"
#include "VehicleType.h"

    void CreateCars(Vehicle * garage[3]);

    float calculateAveragePrice(Vehicle * garage[3]);  


    void CallCalculateTax(Vehicle *garage[3]);
    
    /*
    delete all acquired memory
    */
    void FreeMemory(Vehicle * garage[3]);

#endif // FUNCTIONALITIES_H
