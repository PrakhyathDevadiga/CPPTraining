#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include "ProductType.h"

//product class
class Product
{
private:
    //attributes for Product objects
    std::string _product_id;
    ProductType _product_type;
    float _product_price;
    std::string _product_brand;

public:
    //Defaulted default constructor
    Product()=default;

    //Copy constructor
    Product(const Product&)=default;

    //constructor qith all 4 attributes
    Product(
        std::string product_id,
        ProductType product_type,
        float product_price,
        std::string product_brand
    );

    
    //Destructor for Product objects
    ~Product() {
        std::cout << "Product with id: " << _product_id << " is deleted";
    }

    //Getter and Setter for _product_id
    std::string productId() const { return _product_id; }
    void setProductId(const std::string &product_id) { _product_id = product_id; }

    //Getter and Setter for _product_id
    ProductType productType() const { return _product_type; }
    void setProductType(const ProductType &product_type) { _product_type = product_type; }

    //Getter and Setter for _product_id
    float productPrice() const { return _product_price; }
    void setProductPrice(float product_price) { _product_price = product_price; }

    //Getter and Setter for _product_id
    std::string productBrand() const { return _product_brand; }
    void setProductBrand(const std::string &product_brand) { _product_brand = product_brand; }

    //declaration of output stream definition for printing the object contents
    friend std::ostream &operator<<(std::ostream &os, const Product &rhs);
    
};

//function declaration for printing enum values
std::string printProductType(const ProductType value);

#endif // PRODUCT_H
