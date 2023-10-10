#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Product.h"
#include "ProductType.h"
#include <iostream>
#define SIZE 5

//function to create 5 objects
//input : primitive array which store the addresses of the objects created
//output : void
void createProducts(Product* product_array[SIZE]);

//function to find and returnn the average productPrice of all products
//input : primitive array which store the addresses of the objects created
//output: average price of float type
float findAveragePrice(Product* product_array[SIZE]);

//function to check if all objects are null
//input : primitive array pointer which store the addresses of the objects created
//output : boolean value i.e true or false
bool checkAllNull(Product* product_array[SIZE]);

//function to return the maximum productPrice vale among all producst
//input : primitive array which store the addresses of the objects created
//output : maximum price of float type
float maximumProuctPrice(Product* product_array[SIZE]);

//function to return the product tax amount of product with minimum product
//input : primitive array which store the addresses of the objects created
//output :   tax amount of float type
float calculateProductTaxAmount(Product* product_array[SIZE]);

//function to dleete all allocation from heap
//input : primitive array pointer which store the addresses of the objects created
void deleteAllProducts(Product* product_array[SIZE]);

#endif // FUNCTIONALITIES_H
