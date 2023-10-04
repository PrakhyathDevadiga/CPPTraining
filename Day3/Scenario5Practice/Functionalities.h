#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"


void createCarObjects(Car* garage[5]);

int findAverageFuelCapacity(Car* garage[5]);

int findCountOfGivenBrand(Car* garage[5],CarCateogry car_cateogry);

Car* findBestPassangerCar(Car* garage[5],CarCateogry car_cateogry);

#endif // FUNCTIONALITIES_H
