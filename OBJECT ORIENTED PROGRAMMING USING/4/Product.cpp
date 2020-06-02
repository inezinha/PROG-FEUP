#include "Product.h"

Product::Product()=default;

Product::Product(string description, double price){
    this->description=description;
    this->price=price;
}

void Product::setDescription(){
    this->description=description;
}

void Product::setPrice() {
    this->price=price;
}

string Product::getDescription(){
    return description;
}

double Product::getPrice() {
    return price;
}

