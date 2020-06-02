#ifndef CLIONPROJECTS_ITEM_H
#define CLIONPROJECTS_ITEM_H

#include "Product.h"


class Item{
public:
    Item();
    Item(Product product, unsigned num);
    void setDescription(Product product);
    void setPrice(Product product);
    void setNum();
    void setTotal();
    string getDescription();
    double getPrice();
    int getNum();
    double getTotal();
private:
    unsigned num;
    double price,total;
    string description;
};

#endif //CLIONPROJECTS_ITEM_H
