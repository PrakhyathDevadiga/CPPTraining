/*
scenario 1: Define data model with functionalities for that model(class or template)
*/
/*
can every single obejct do this or should single object to be able to do this?
if every object is expected to do the functionality then add it here
*/


#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"
void CreateObjects(Vehicle* container[3]);

/*
functionalties to find average of price values of 3 objects in the container array
*/
float AveragePrice(Vehicle* container[3]);

#endif // FUNCTIONALITIES_H
