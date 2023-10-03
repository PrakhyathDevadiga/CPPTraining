#include "Functionalities.h"
//
void CreateCars(Car *container[3])
{
    container[0]=new Car("v101","Suzuki",160000.0f,VehicleType::CAR,CarType::SEDAN);
    container[1]=new Car("v102","Honda",200000.0f,VehicleType::CAR,CarType::HATCHBACK);
    container[2]=new Car("v103","Ferrari",300000.0f,VehicleType::CAR,CarType::SUV);
}

float calculateAveragePrice(Car *container[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += (container[i])->price();        
    }

    total = total/3;
    return total;
}

void CallCalculateTax(Car *container[3])
{
 for(int i=0;i<3;i++){
        std::cout << (container[i])->brand() << " tax is: " << (container[i])->CalculateTax() << "\n";
    }   
}

void FreeMemory(Car *container[3])
{
      for(int i=0;i<3;i++){
            delete container[i];
        }
}
