#include "Functionalities.h"

void createVehciles(Vehicle *garage[3])
{
    garage[0]= new Vehicle("v101","Suzuki",200000.0f,VehicleType::CAR);
    garage[1]= new Vehicle("v102","Yamaha",50000.0f,VehicleType::BIKE);
    garage[2]= new Vehicle("v103","Benz",5000000.0f,VehicleType::CAR);


}

float getAveragePrice(Vehicle *garage[3])
{
    float total;
    for(int i=0;i<3;i++){
        total +=garage[i]->price();
    }

    return total/3;
        
}

Vehicle** getMinPriceCar(Vehicle *garage[3])
{
    static Vehicle *minValueCar[1];
    minValueCar[0]=garage[0];
    for(int i=1;i<3;i++){
        if( ((minValueCar[0])->price()) > ((garage[i])->price()))
            minValueCar[0]=garage[i];
    }

    return minValueCar;
}
