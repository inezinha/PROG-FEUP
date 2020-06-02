#include "Invoice.h"

Invoice::Invoice()=default;

Invoice::Invoice(Client client, vector<Item>items){
    this->clientName=client.getName();
    this->adress=client.getAdress();
    this->items=items;
    for (int i=0;i<items.size();i++)
        totalissimo += items[i].getTotal();
}

void Invoice::showAllnice() {
    cout<<left<<clientName<<endl<<left<<adress<<endl<<endl;
    cout<<setw(20)<<left<<"Description"<<setw(10)<<left<<"Price"<<setw(10)<<left<<"Qty"<<setw(10)<<left<<"Total"<<endl;
    cout << "-------------     -------   -------    --------"<<endl;
    for(int i=0;i<items.size();i++){
        cout<<setw(20)<<left<<items[i].getDescription()<<setw(10)<<left<<items[i].getPrice()<<setw(10)<<left<<items[i].getNum()<<setw(10)<<left<<items[i].getTotal()<<endl;
    }
    cout<<endl<<"Amont due: "<<totalissimo<<" euros";
}

void Invoice::add(Item item) {
    items.push_back(item);
}