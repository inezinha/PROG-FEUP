#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <map>
using namespace std;


class Person{
public:
    Person(string name, unsigned int age);
    string getName() const;
    unsigned int getAge() const;
private:
    string name;
    unsigned int age;
};

Person::Person(string name, unsigned int age) {
    this->name=name;
    this->age=age;
}

string Person::getName() const {
    return name;
}

unsigned int Person::getAge() const {
    return age;
}

bool operator==(const Person p1, const Person p2){
    return (p1.getName()==p2.getName() && p1.getAge()==p2.getAge());
}


template <typename T>
unsigned int countValues(T a[], unsigned int nelem, T value) {
    unsigned int i, count = 0;
    for (i = 0; i <= nelem; i++)
        if (a[i] == value)
    count++;
    return count;
}

class Player:public Person{
public:
    Player(string name, unsigned int age, string team):Person(name,age){
        this->team=team;
    }
    string getTeam()const;
private:
    string team;
};

string Player::getTeam() const {
    return team;
}

int main(){
    Person p1("Ana",12);
    Person p2("Sara",22);
    Person p3("Lola",43);
    Person p4("gina",8);
    Person p5("amelia",6);
    Person a[] = {p1,p2,p3,p2,p4,p5};
    Person valor = p2;
    Player player1("claudia",12,"sera");
    Player player2("joca",33,"andorinhas");
    unsigned int num = 6;
    cout << countValues(a,num,valor)<<endl;

    map<string,Player>pos;
    pos.insert(make_pair("lateral esquerdo",player1));
    pos.insert(make_pair("guarda redes",player2));

    for (auto it= pos.begin();it!=pos.end();it++){
        cout<< it->first << "   " << it->second.getName() << endl;
    }

    return 0;
}