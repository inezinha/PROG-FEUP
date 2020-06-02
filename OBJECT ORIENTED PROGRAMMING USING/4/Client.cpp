#include "Client.h"

Client::Client()=default;

Client::Client(string name, string adress) {
    this->name=name;
    this->adress=adress;
}

void Client::setName() {
    this->name=name;
}

void Client::setAdress() {
    this->adress=adress;
}

string Client::getName() {
    return name;
}

string Client::getAdress() {
    return adress;
}

/*void Client::showAll() {
    cout<<name<<endl<<adress;
}*/
