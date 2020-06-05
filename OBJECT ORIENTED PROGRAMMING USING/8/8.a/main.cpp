#include <iostream>
#include "Vector.h"

template<class T> class Vector;
using namespace std;

//Template function for printing Vectors
template<typename T>
void printVec( Vector<T>&v){
    for(unsigned int i = 0; i < v.size(); ++i)
        cout << i << ": " << v.at(i) << endl;
}

int main(){
    Vector<int> v1(5,2);
    printVec(v1);
    cout << "size: " << v1.size() <<endl;
    cout<< " ----pushback---- " << endl;
    v1.push_back(5);
    v1.push_back(69);
    printVec(v1);
    cout << "size: " << v1.size() <<endl;
    cout<< " -----popback-----" << endl;
    v1.pop_back();
    v1.pop_back();
    printVec(v1);
    cout << "size: " << v1.size() << endl;
}