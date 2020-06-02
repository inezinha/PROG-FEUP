#include "Item.h"

Item::Item() = default;

Item::Item(Product product, unsi num) {
    this->description= product.getDescription();
    this->price=product.getPrice();
    this->num=num;
    this->total=num*price;
}

void Item::setDescription(Product product){
    this->description = product.getDescription();
}

void Item::setPrice(Product product){
    this->price = product.getPrice();
}

void Item::setNum() {
    this->num=num;
}

void Item::setTotal() {
    this->total=price*num;
}

string Item::getDescription() {
    return description;
}

double Item::getPrice() {
    return price;
}

int Item::getNum() {
    return num;
}

double Item::getTotal() {
    return total;
}
