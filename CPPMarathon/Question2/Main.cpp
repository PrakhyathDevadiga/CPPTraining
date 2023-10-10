#include <iostream>
#include "TouristVehicle.h"
#include "Functionalities.h"
#define SIZE 3
int main(){
    TouristVehicle* container[SIZE]={nullptr};
    TouristVehicle* result [SIZE]={nullptr};
    try{
        createTouristVehicle(container);


        std::cout<< "Vehicle with 4 seats: ";
        vehicleWithGoodCapacity(container,result);
        for(int i=0;i<SIZE;i++){
            if(result[i]==nullptr){
                continue;
            }
            else{
                std::cout << *result[i] << "\n";
            }
        }


        std::cout << "Average booking price of CAB: " << averageBookingPrice(container) <<"\n";

        std::cout << "Tourist Vehcile with highest per hour booking cost: " << *maxPerHourBooking(container) <<"\n";
    
        deleteObjects(container);
    }

    catch(std::runtime_error e){
        std::cout << e.what() << "\n";
    }
}