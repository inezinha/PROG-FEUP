#ifndef UNTITLED4_DATE_H
#define UNTITLED4_DATE_H
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <ctime>
using namespace std;

class Date {
    friend bool isLeap(int year);
    friend int daysMonth(int year, int month);
public:
    Date();
    Date(unsigned int year, unsigned int month,unsigned int day);
    Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
    void setYear(unsigned int year) ;
    void setMonth(unsigned int month) ;
    void setDay(unsigned int day) ;
    void setDate(unsigned int year, unsigned int month, unsigned int day) ;
    unsigned int getYear() const;
    unsigned int getMonth() const;
    unsigned int getDay() const;
    string getDate() const;  // returns the date in format "yyyy/mm/dd"
    void show() const;// shows the date on the screen in format "yyyy/mm/dd"
    bool isValid();
    void showMod();
    Date& operator++();
    Date& operator--();
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

bool operator==(const Date& left, const Date& right);
bool operator!=(const Date& left, const Date& right);
bool operator<(const Date& left, const Date& right);
bool operator<=(const Date& left, const Date& right);
bool operator>(const Date& left, const Date& right);
bool operator>=(const Date& left, const Date& right);
ostream& operator<<(ostream& out, const Date& value);
istream& operator>>(istream& in, Date& value);

#endif //UNTITLED4_DATE_H
