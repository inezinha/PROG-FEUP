#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

typedef struct {
    string clientBI, dateBegin, dateEnd;
} RentRecord;

class Vehicle{
public:
    Vehicle();
    Vehicle(string matr, string marca, string mod, RentRecord registo);
    string getMatricula()const;
    string getMarca()const;
    string getModelo()const;
    RentRecord getRegisto()const;
private:
    string matricula;
    string marca;
    string modelo;
    RentRecord registo;
};

Vehicle::Vehicle()=default;

Vehicle::Vehicle(string matr, string marca, string mod, RentRecord registo){
    this->matricula=matr;
    this->marca=marca;
    this->modelo=mod;
    this->registo=registo;
}

string Vehicle::getMatricula() const {
    return matricula;
}

string Vehicle::getMarca() const {
    return marca;
}

string Vehicle::getModelo() const {
    return modelo;
}

RentRecord Vehicle::getRegisto() const {
    return registo;
}

class Client{
public:
    Client();
    Client(string bi,string name);
    string getBI()const;
    string getName()const;
private:
    string BI;
    string name;
};

Client::Client()=default;

Client::Client(string bi, string name){
    this->BI=bi;
    this->name=name;
}

string Client::getBI() const {
    return BI;
}

string Client::getName() const {
    return name;
}

vector<Vehicle>showAvailableVehicles(vector<Vehicle>carros,string data){
    for (int i=0;i<carros.size();i++){
        if (carros[i].getRegisto().dateEnd < data){
            cout<<carros[i].getMatricula()<<endl;
            cout<<carros[i].getMarca()<<endl;
            cout<<carros[i].getModelo()<<endl;
            cout<<endl;
        }
    }
}

int main(){
    vector<Vehicle>carros;
    vector<Client>clientes;

    Client c1("1234", "ines sofia");
    clientes.push_back(c1);
    Client c2("09284", "inesoca maloca");
    clientes.push_back(c2);

    RentRecord r1{c1.getBI(), "2000-04-30", "2000-10-05"};
    RentRecord r2{c2.getBI(), "2000-07-09", "2002-01-03"};

    Vehicle v1("17-LV-00","opel","redondo",r1);
    carros.push_back(v1);
    Vehicle v2("00-IS-00","nissan","cascai",r2);
    carros.push_back(v2);

    showAvailableVehicles(carros,"2003-12-01");

    return 0;
}