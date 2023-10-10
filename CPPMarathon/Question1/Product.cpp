#include "Product.h"

//constructor defintion for Product obejcts
Product::Product(std::string product_id, ProductType product_type, float product_price, std::string product_brand)
: _product_id(product_id), _product_type(product_type), _product_price(product_price), _product_brand(product_brand)
{
}

//Output stream definition for printing the Product object's content
std::ostream &operator<<(std::ostream &os, const Product &rhs) {
    os << "_product_id: " << rhs._product_id
       << " _product_type: " << printProductType(rhs._product_type)
       << " _product_price: " << rhs._product_price
       << " _product_brand: " << rhs._product_brand;
    return os;
}

//printProductType definition
std::string printProductType(const ProductType value)
{
    if(ProductType::APPLIANCE == value){
        return "APPLIANCE";
    }
    else if(ProductType::PERFUME == value){
        return "PERFUME";
    }
    else{
        return "FMCG";
    }
}

