#ifndef UNTITLED3_VECTOR_H
#define UNTITLED3_VECTOR_H
#include <cstddef> //size_t
#include <stdexcept> //range error

template<class T>
class Vector {
public:
    Vector();
    Vector(unsigned int size);
    Vector(unsigned int size, const T &initial);
    Vector(const Vector<T> & v);
    ~Vector();
    size_t size() const;
    bool empty() const;
    T & front();
    T & back();
    T & at(size_t index);
    void push_back(const T &value);
    void pop_back();
    void clear();
private:
    T *buffer;
    size_t bufferSize;
};

/* -------------------------------------------------------------
                         CONSTRUCTORS
 *----------------------------------------------------------------*/

template<class T>
Vector<T>::Vector() : bufferSize(0) {
    buffer = nullptr; //Starts as nullptr because the vector is empty
}

template<class T>
Vector<T>::Vector(unsigned int size) : bufferSize(size) {
    buffer = new T[size]; //creating a buffer with size size
}

template<class T>
Vector<T>::Vector(unsigned int size, const T &initial) : bufferSize(size)
{
    buffer = new T[size];
    for (unsigned int i = 0; i < bufferSize; i++) {
        buffer[i] = initial;
    }
}

template<class T>
Vector<T>::Vector(const Vector<T>&v) :
        buffer(v.buffer), bufferSize(v.bufferSize) {
}

/* ------------------------------------------------------------------------
                             DESTRUCTOR
     - used to eliminate any dynamic  variables that have
       been created by the object, so that the memory occupied by
       these dynamic variables is returned to the freestore.
 *-------------------------------------------------------------------------*/

template<class T>
Vector<T>::~Vector() {
    delete[] buffer;
    //setting buffer to nullptr in case there is an attempted access to a pointer to buffer
    buffer = nullptr;
}

/* -------------------------------------------------------------
                         METHODS
 *----------------------------------------------------------------*/


template<class T>
size_t Vector<T>::size() const {
    return bufferSize;
}

template<class T>
bool Vector<T>::empty() const {
    return bufferSize == 0; //If size is 0 vector is empty, else it is not
}

template<class T>
T& Vector<T>::front() {
    return buffer[0];
}

template<class T>
T& Vector<T>::back() {
    return buffer[bufferSize - 1];
}

template<class T>
T& Vector<T>::at(size_t index) {
    if (index < bufferSize)
        return buffer[index];
    else
        throw std::out_of_range("Vector out of range");
}

template<class T>
void Vector<T>::push_back(const T &value) {
    T *temp = new T[bufferSize + 1]; //Allocating new, larger array

    //Copying the values that were in buffer to the new array
    for (unsigned int i = 0; i < bufferSize; ++i)
        temp[i] = buffer[i];

    temp[bufferSize] = value; //Adding the last element, that is being pushed back

    delete[] buffer; //Deleting old array
    buffer = temp; //assigning the buffer pointer to the newly created array
    bufferSize++; //Incrementing size by 1
}

template<class T>
void Vector<T>::pop_back() {
    T* temp = new T[bufferSize - 1]; //Allocating new, smaller array

    //Copying the values that were in buffer to the new array (except the last one)
    for (unsigned int i = 0; i < bufferSize - 1; ++i) {
        temp[i] = buffer[i];
    }

    delete[] buffer;  //Deleting old array
    buffer = temp; //assigning the buffer pointer to the newly created array
    bufferSize--; //Decrementing size by 1;
}

template<class T>
void Vector<T>::clear() {
    delete[] buffer; //Freeing allocated memory
    buffer = nullptr; //setting buffer to nullptr in case there is an attempted access to a pointer to buffer
    bufferSize = 0; //Setting size to 0
}

#endif //UNTITLED3_VECTOR_H
