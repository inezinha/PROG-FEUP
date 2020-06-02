#ifndef CLIONPROJECTS_CLIENT_H
#define CLIONPROJECTS_CLIENT_H

#include <string>
#include <iostream>
using namespace std;

class Client{
public:
    Client();
    Client(string name, string adress);
    string getName();
    string getAdress();
private:
    string name;
    string adress;
};

#endif //CLIONPROJECTS_CLIENT_H
