#include <iostream>

#include "Vehicle.h"
#include "VehicleType.h"

void Demo(){
    Vehicle v1("v101","Maruti",89000.0f,VehicleType::CAR);
    Vehicle v2("v102","Honda",100001.0f,VehicleType::CAR);

    Vehicle* v3=new Vehicle("v103","Maruti",89000.0f,VehicleType::CAR);
    Vehicle* v4=new Vehicle("v104","Honda",100001.0f,VehicleType::CAR);

   // float ans=v1+v2;

    std:: cout << v1+v2 << "\n";
    std::cout << "--------------\n";
    //std::cout << (*v3) + (*v4) << "\n";

   // std::cout << v1 + (*v4) << "\n";


}

int main(){
    Demo();
}