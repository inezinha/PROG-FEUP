#ifndef UNTITLED2_DATE_H
#define UNTITLED2_DATE_H
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
    bool isEqualTo(const Date &date);
    bool isNotEqualTo(const Date &date);
    bool isAfter(const Date &date);
    bool  isBefore(const Date &date);
    void showMod();
private:
    unsigned int year;
    unsigned int month;
    unsigned int day;
};

#endif //UNTITLED2_DATE_H