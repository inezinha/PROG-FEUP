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
    Vector<int> vec1;
    cout << "capacity: " << vec1.capacity() << "\t size: " << vec1.size() << endl;

    for (unsigned int i = 0; i < 100; ++i) {
        vec1.push_back(1);
        cout << "capacity: " << vec1.capacity() << "\t size: " << vec1.size() << endl;
    }
    vec1.push_back(2);
    printVec(vec1);
}