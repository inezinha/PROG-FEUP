#include "Client.h"

Client::Client()=default;

Client::Client(string name, string adress) {
    this->name=name;
    this->adress=adress;
}

string Client::getName() {
    return name;
}

string Client::getAdress() {
    return adress;
}

