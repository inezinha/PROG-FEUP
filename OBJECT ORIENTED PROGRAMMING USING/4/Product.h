#ifndef CLIONPROJECTS_PRODUCT_H
#define CLIONPROJECTS_PRODUCT_H

#include <string>
#include <iostream>
using namespace std;

class Product{
public:
    Product();
    Product(string description, double price);
    string getDescription();
    double getPrice();
private:
    string description;
    double price;
};
#endif //CLIONPROJECTS_PRODUCT_H
