#include "Functionalities.h"
#include "Car.h"
#include "CarCategory.h"

void createCarObjects(Car *garage[5])
{
     garage[0]=new Car("c101","BMW","M5",CarCateogry::SEDAN,100000.0f,4,60);
     garage[1]=new Car("c102","AUDI","Q7",CarCateogry::SPORTS_HATCKBACK,500000.0f,6,70);
     garage[2]=new Car("c103","BENZ","TypeA",CarCateogry::SUV,150000.0f,6,50);
     garage[3]=new Car("c104","BMW","M3",CarCateogry::SEDAN,100000.0f,5,80);
     garage[4]=new Car("c105","BMW","M4",CarCateogry::SEDAN,250000.0f,5,70);
}

int findAverageFuelCapacity(Car *garage[5])
{
    int avrageCarFuelCapacity=0;
    for(int i=0;i<5;i++){
        avrageCarFuelCapacity +=garage[i]->carFuelCapacity();
    }
   return avrageCarFuelCapacity/5;
}

int findCountOfGivenBrand(Car *garage[5], CarCateogry car_cateogry)
{
    int carCount=0;
    for(int i=0;i<5;i++){
        if(garage[i]->carCategory()==car_cateogry)
        {
            carCount ++;
        }
    }
    return carCount;
}

Car* findBestPassangerCar(Car *garage[5], CarCateogry car_cateogry2)
{
    int seatCapacity=0;
    Car *bestCar;
    for(int i=1;i<5;i++){
        if(garage[i]->carSeatCount()>=seatCapacity && ( garage[i]->carCategory() == car_cateogry2))
        {
            seatCapacity=garage[i]->carSeatCount();
            bestCar=garage[i];
        }
    }

    return bestCar;
}
