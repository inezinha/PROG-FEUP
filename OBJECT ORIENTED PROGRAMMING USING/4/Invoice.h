#ifndef CLIONPROJECTS_INVOICE_H
#define CLIONPROJECTS_INVOICE_H

#include "Item.h"
#include "Client.h"
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

class Invoice{
public:
    Invoice();
    Invoice(Client client, vector<Item>items);
    void showAllnice();
    void add(Item item);

private:
    string clientName, adress;
    vector<Item>items;
    double totalissimo;
};

#endif //CLIONPROJECTS_INVOICE_H
