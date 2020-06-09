#include <iostream>
#include "Date.h"
using namespace std;

int main(){
    Date d1("2020/9/4");
    Date d2(2000,7,7);
    Date d3;
    Date d4;
    Date d5;
    d1.setDay(4);
    d1.setMonth(3);
    d1.setYear(3);
    d1.show();
    d2.show();
    d1.setDate(2008,5,7);
    d1.show();
    cout << "\n" << d2.getDay() << " " << d2.getMonth() << " " << d2.getYear() << "\n";
    cout<<d1.isValid()<<endl;
    cout<<(d1==d2)<<endl;
    cout<<(d1!=d2)<<endl;
    cout<<(d1>d2)<<endl;
    cout<<(d1>=d2)<<endl;
    cout<<(d1<=d2)<<endl;
    cout<<(d2<d1)<<endl;
    d3.show();
    d3.showMod();
   // Testing Overloaded input (and output)
    cout << "overloading input (and output) operator\n";
    cout << " date d4 ? ";
    cin >> d4;
    cout << " d4 = " << d4 << endl;
    cout << " date d5 ? ";
    cin >> d5;
    cout << " d5 = " << d5 << endl;
    cout << endl;
    // Testing Overloaded increment operators
    cout <<endl<< "testing increment operators\n";
    d1 = ++d1;
    cout << " d1 = " << d1 << "; ++d1 = " << d1 << endl;
    d2 = --d2;
    cout << " d2 = " << d2 << "; --d2 = " << d3 << endl;
    cout << endl;

}