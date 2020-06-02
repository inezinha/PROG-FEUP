#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H
#include <utility>
#include "Date.h"
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Person{
private:
    string name;
    char gender;
    Date birthdate;
public:
    Person();
    Person(string name,char gender,Date birthdate);
    void setName();
    void setGender();
    void setBirthDate();
    string getName();
    char getGender();
    Date getBirthDate();
    void showAll();
};

#endif //UNTITLED2_PERSON_H


