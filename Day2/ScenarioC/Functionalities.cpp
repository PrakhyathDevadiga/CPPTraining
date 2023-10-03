#include "Functionalities.h"
#include "Car.h"
#include "Bike.h"
void CreateCars(Vehicle* garage[3])
{
    garage[0]=new Car("v101","Suzuki",160000.0f,VehicleType::CAR,CarType::SEDAN);
    garage[1]=new Bike("bk111","Bajaj",30000.0f, VehicleType::BIKE,35.0f, BikeType::COMMUTE);
    garage[2]=new Car("v103","Ferrari",300000.0f,VehicleType::CAR,CarType::SUV);

     for(int i=0;i<3;i++){
        std::cout << *garage[i] <<"\n";
    }
}

float calculateAveragePrice(Vehicle* garage[3])
{
    float total=0.0f;
    for(int i=0;i<3;i++){
        total += (garage[i])->price();        
    }

    total = total/3;
    return total;
}

void CallCalculateTax(Vehicle* garage[3])
{
 for(int i=0;i<3;i++){
        std::cout << (garage[i])->brand() << " tax is: " << (garage[i])->CalculateTax() << "\n";
    }   
}

void FreeMemory(Vehicle* garage[3])
{
      for(int i=0;i<3;i++){
            delete garage[i];
        }
}
