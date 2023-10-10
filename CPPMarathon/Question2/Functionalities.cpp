#include "Functionalities.h"


void createTouristVehicle(TouristVehicle *_tv_array[SIZE])
{
    _tv_array[0]=new TouristVehicle("t101",touristVehicleType::CAB,5,1000.0f);
    _tv_array[1]=new TouristVehicle("t102",touristVehicleType::BUS,25,4500.0f);
    _tv_array[2]=new TouristVehicle("t103",touristVehicleType::CAB,4,8000.0f);
}

bool checkAllNull(TouristVehicle *_tv_array[SIZE])
{
    for (int i=0;i<SIZE;i++){
        if(_tv_array[i]!=nullptr)
        {
            return false;
        }
        
    }
    return true;
}

//function to find and return pointers to all instances of touristVehicle with minimum 4 seat count
//input : primitive array which store addresses of objects and a primitive array to return the points
//output : primitive array pointer to return the result
void vehicleWithGoodCapacity(TouristVehicle *_tv_array[SIZE], TouristVehicle *result[SIZE])
{
    int k=0;
    if(checkAllNull(_tv_array)){
        std::runtime_error("All null objects");
    }
    for(int i=0;i<SIZE;i++){
        if(_tv_array[i]==nullptr){ //checking null
            continue;
        }
        else if(_tv_array[i]->seatCount()>=4)  //condition check
        {
            result[k++]=_tv_array[i];
        }
    }
}


//function to average per hour booking of car type
//input : primitive array which store addresses of objects
//output : average value of float type
float averageBookingPrice(TouristVehicle *tv_array[SIZE])
{
    //VARIABLE TO STORE total price
    float total=0.0f;
    int count=0;
    if(checkAllNull(tv_array)){
        std::runtime_error("All null objects");
    }
    for(int i=0;i<SIZE;i++){
        if(tv_array[i]==nullptr){
            continue;
        }
        else if(tv_array[i]->type()==touristVehicleType::CAB)
        {
            total +=tv_array[i]->perHourBookingCharge() ; 
            count++; 
        }
    }

    //calculating average and returning
    return total/count;
}

void deleteObjects(TouristVehicle *_tv_array[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete _tv_array[i];
        std::cout << "\n";
    }
}

//function to find and return the tourist vehicle instance wiht maximum per hour booking
//input : primitive array which store addresses of objects and a primitive array to return the points
//output : touris vehicle pointer

TouristVehicle *maxPerHourBooking(TouristVehicle *_tv_array[SIZE])
{
    float max=0.0f;
    float currentValue=0.0f;
    TouristVehicle* result=nullptr;
    if(checkAllNull(_tv_array)){
        std::runtime_error("All null objects");
    }
    for(int i=0;i<SIZE;i++){
        if(_tv_array[i]==nullptr){
            continue;
        }
        else {
            //getting current price
            currentValue=_tv_array[i]->perHourBookingCharge();
            if(currentValue>max){
                //setting values
                max=currentValue;
                result=_tv_array[i];
            }
        } 
    }  
    return result;
}


