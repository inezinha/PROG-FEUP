#ifndef CLIONPROJECTS_ITEM_H
#define CLIONPROJECTS_ITEM_H

#include "Product.h"


class Item{
public:
    Item();
    Item(Product product, unsigned int num);
    string getDescription();
    double getPrice();
    unsigned int getNum();
    double getTotal();
private:
    unsigned int num;
    double price,total;
    string description;
};

#endif //CLIONPROJECTS_ITEM_H
