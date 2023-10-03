#include "Vehicle.h"
#include "Type.h"
#include "Functionalities.h"
int main(){
    
    /*
    A)developer makes a container of objects. Container us copied when create when create object is called
    from CreatObject function to main function

    B)user create an empty container. User passes its reference to the fucntion developer
    accesss this reference puts the object in container
    */

   Vehicle* arr[3];

   CreateObjects(arr);
   std::cout << "Average price: " << AveragePrice(arr);
}