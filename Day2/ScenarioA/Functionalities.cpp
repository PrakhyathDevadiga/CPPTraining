#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"
 void CreateObjects(Vehicle *container[3])
 {
    //container's 0 index holds address if this object
    container[0]= new Vehicle("v101","Maruti",Type::CAR,870000.0f);
    container[1]= new Vehicle("v102","Honda",Type::CAR,970000.0f);
    container[2]= new Vehicle("v103","Toyota",Type::CAR,1270000.0f);
    std::cout << container[0] << "/n";
    std::cout << *container[0] << "/n";
 }

 float AveragePrice(Vehicle *container[3])
 {
    float total=0.0f;
    for(int i=0;i<3;i++){
        //if  the refence is to object use arraw than dot
        //total += ( container[i] )->price();
      total += ( *container[i] ).price();
    }
 
    return total/3;
 
 }
