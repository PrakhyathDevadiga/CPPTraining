#include "Functionalities.h"
int main(){
 
 Car* garage[5];
 createCarObjects(garage);

 std::cout << "Average car fuel capacity is: " << findAverageFuelCapacity(garage);

 std::cout << "\nCar count of type sedan: " << findCountOfGivenBrand(garage,CarCateogry::SEDAN);

 std::cout << "\nBest passanegr car of type sedan is: \n" << *findBestPassangerCar(garage,CarCateogry::SEDAN);

}