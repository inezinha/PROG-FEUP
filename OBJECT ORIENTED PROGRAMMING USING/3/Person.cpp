#include "Person.h"

Person::Person()=default;

Person::Person(string name, char gender, Date birthdate){
    this->name=name;
    this->gender=gender;
    this->birthdate=birthdate;
}

void Person::setGender(){
    this->gender=gender;
}

void Person::setBirthDate(){
    this->birthdate=birthdate;
}

string Person::getName() {
    return name;
}

char Person::getGender(){
    return gender;
}

Date Person::getBirthDate(){
    return birthdate;
}

void Person::showAll() {
    cout<<"Name: "<<name<<endl<<"Gender: "<<gender<<endl<<"Birthdate: ";
    birthdate.show();
    cout<<endl;
}
