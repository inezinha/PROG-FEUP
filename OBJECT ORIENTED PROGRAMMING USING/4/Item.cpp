#include "Item.h"

Item::Item() = default;

Item::Item(Product product, unsigned int num) {
    this->description= product.getDescription();
    this->price=product.getPrice();
    this->num=num;
    this->total=num*price;
}

string Item::getDescription() {
    return description;
}

double Item::getPrice() {
    return price;
}

unsigned int Item::getNum() {
    return num;
}

double Item::getTotal() {
    return total;
}
