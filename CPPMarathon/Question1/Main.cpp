#include <iostream>
#include "Product.h"
#include <iostream>
#include "Functionalities.h"
#define SIZE 5 
// main function
int main(){
    //array pointer to stoe object locations
    Product *product_array[SIZE];

    try{
        createProducts(product_array);

        std::cout << "Average price : " << findAveragePrice(product_array) << "\n";

        std::cout << "Tax of product with minimum value: " << calculateProductTaxAmount(product_array) << "\n";

        std::cout << "Maximum product price: " << maximumProuctPrice(product_array) << "\n";

        deleteAllProducts(product_array);
    }
    catch(std::runtime_error e){
        std::cout << e.what();
    }
}