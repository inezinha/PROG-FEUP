#include "Date.h"

Date::Date(){ //get date from computer :D thank you stackoverflow *-*
    time_t t = time(0);
    tm* now = localtime(&t);
    year = now->tm_year+1900;
    month = now->tm_mon+1;
    day = now->tm_mday;
}

Date::Date(unsigned int year, unsigned int month,unsigned int day){
    this->year = year;
    this->month = month;
    this->day = day;
}

Date::Date(string yearMonthDay){
    char ch = '/';
    istringstream temp(yearMonthDay);
    if(temp>>year>>ch>>month>>ch>>day){
        this->year=year;
        this->month=month;
        this->day=day;
    }
}

void Date::setYear(unsigned int year){
    this->year=year;
}

void Date::setMonth(unsigned int month){
    this->month=month;
}

void Date::setDay(unsigned int day){
    this->day=day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day){
    this->year=year;
    this->month=month;
    this->day=day;
}

unsigned int Date::getYear() const{
    return year;
}

unsigned int Date::getMonth() const{
    return month;
}

unsigned int Date::getDay() const{
    return day;
}

string Date::getDate() const{
    stringstream temp;
    temp << setfill('0') << setw(4) << year << '/' << setw(2) << month<< '/' << setw(2) << day<<endl;
    return temp.str();
}

void Date::show() const{
    cout<<getDate();
}

bool isLeap(int year){
    if (year%400==0){
        return true;
    }
    else if (year%4==0){
        if(year%100==0)
            return false;
        else
            return true;
    }
    else{
        return false;
    }
}

int daysMonth(int year, int month){
    if (month == 2){
        if(isLeap(year)){
            return 29;
        }
        else{
            return 28;
        }
    }

    if (month%2==0){
        return 30;
    }
    else{
        return 31;
    }
}

bool Date::isValid() {
    if (day <= daysMonth(year, month) && month>=1 && month<=12){
        return true;
    }
    else
        return false;
}

bool Date::isEqualTo(const Date &date) {
    if (year == date.year && month == date.month && day == date.day){
        return true;
    }
    else
        return false;
}

bool Date::isNotEqualTo(const Date &date) {
    if (year != date.year || month != date.month || day != date.day){
        return true;
    }
    else
        return false;
}

bool Date::isAfter(const Date &date) {
    if (year > date.year || (year == date.year && month > date.month) || (year == date.year && month == date.month && day > date.day)){
        return true;
    }
}

bool Date::isBefore(const Date &date) {
    if (!(year > date.year || (year == date.year && month > date.month) || (year == date.year && month == date.month && day > date.day))){
        return true;
    }

}

void Date::showMod() {
    cout << setfill('0') << setw(4) << year << setw(2) << month<< setw(2) << day<<endl;
}