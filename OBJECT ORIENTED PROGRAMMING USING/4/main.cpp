#include "Invoice.h"
#include "Client.h"
#include "Item.h"

int main() {
    Invoice i1(Client("Inesoca Maloca","Rua dos malocos 3456-123"),{});
    i1.add(Item(Product("salmao",2),10));
    i1.add(Item(Product("sofa",500),4));
    i1.add(Item(Product("protetor solar",5),3));
    i1.showAllnice();
    return 0;
}