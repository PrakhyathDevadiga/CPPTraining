#include "Functionalities.h"
#include <iostream>
void createProducts(Product *product_array[SIZE])
{
    //creating 5 objects with all necessary data
    product_array[0]= new Product("p101",ProductType::APPLIANCE,2599.0f,"LG");
    product_array[1]= new Product("p102",ProductType::PERFUME,159.0f,"DENVER");
    product_array[2]= new Product("p103",ProductType::APPLIANCE,2199.0f,"SAMSUNG");
    product_array[3]= new Product("p104",ProductType::PERFUME,359.0f,"FOGG");
    product_array[4]= new Product("p105",ProductType::FMCG,2599.0f,"ITC");

}

float findAveragePrice(Product *product_array[SIZE])
{
    //variable to store the total value of the product
    float totalValue=0.0f;

    //function to iterate thorugh the array and calculate total value
    for(int i=0;i<SIZE;i++){

        //to check whether object is nu;;
        if(product_array[i]==nullptr){
            continue;
        }
        else{
            //incrementing total value
            totalValue += product_array[i]->productPrice();
        }
    }
    //returning average price
    return totalValue/SIZE;
}

bool checkAllNull(Product *product_array[SIZE])
{
    //variable to store the boolean value
    bool flag = true;

    //function to iterate throught the array to check nullptr
    for(int i=0;i<SIZE;i++){
        if(product_array[i]!=nullptr){
            flag= false;
        }
    }
    return flag;
}

float maximumProuctPrice(Product *product_array[SIZE])
{
    //variable to store max value;
    float max=0.0f;

    //variable to store current value
    float current_value=0.0;

     //function to iterate throught the array to check maximum price
    for(int i=0;i<SIZE;i++){
        //to check whether object is nu;;
        if(product_array[i]==nullptr){
            continue;
        }
        else{
            //setting up max value
            current_value=product_array[i]->productPrice();
            if(current_value>max){
                max=current_value;
            }
        }
    }

    //return maximum value
    return max;

}

float calculateProductTaxAmount(Product *product_array[SIZE])
{
    //variable to store min value;
    float min=product_array[0]->productPrice();
    //variable to store current value
    float current_value=0.0f;

     //function to iterate throught the array to check minimum price
    for(int i=0;i<SIZE;i++){
            //setting up min value
            current_value=product_array[i]->productPrice();
            if(current_value<min){
                min=current_value;
            }
    }
    //function to calculate calcuating 10% tax and return ;
    return (min * 0.10);

}

void deleteAllProducts(Product *product_array[SIZE])
{
    //function to iterate throught the array tod delete objects
    for(int i=0;i<SIZE;i++){
        delete product_array[i];
        std::cout << "\n";
    }
}
