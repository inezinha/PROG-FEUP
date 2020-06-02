#include "Invoice.h"
#include "Client.h"
#include "Item.h"

int main() {
    Client Client("DEI- FEUP ", "Rua Dr. Roberto Frias, s/n \n4200 - 465 Porto ");
    Product Product1("Computer", 999.90);
    Product Product2("Printer", 149.90);
    Item Item1(Product1, 10);
    Item Item2(Product2, 1);
    Invoice Invoice(Client, { Item1,Item2 });
    Invoice.showAllnice();
    return 0;
}