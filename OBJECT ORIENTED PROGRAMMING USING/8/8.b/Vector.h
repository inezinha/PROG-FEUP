#ifndef UNTITLED3_VECTOR_H
#define UNTITLED3_VECTOR_H
#include <cstddef> //size_t
#include <stdexcept> //range error
#include <cstdlib>

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
    size_t capacity() const;
private:
    T *buffer;
    size_t bufferSize;
    size_t bufferCapacity;
};

/* -------------------------------------------------------------
                         CONSTRUCTORS
 *----------------------------------------------------------------*/

template<class T>
Vector<T>::Vector() : bufferSize(0), bufferCapacity(0) {
    buffer = nullptr; //Starts as nullptr because the vector is empty
}

template<class T>
Vector<T>::Vector(unsigned int size) : bufferSize(size), bufferCapacity(size) {
    buffer = new T[size]; //creating a buffer with size size
}

template<class T>
Vector<T>::Vector(unsigned int size, const T &initial) : bufferSize(size), bufferCapacity(size)
{
    buffer = (T*) std::malloc(bufferSize * sizeof *buffer);
    for (unsigned int i = 0; i < bufferSize; i++) {
        buffer[i] = initial;
    }
}

template<class T>
Vector<T>::Vector(const Vector<T>&v) :
        buffer(v.buffer), bufferSize(v.bufferSize), bufferCapacity(v.bufferCapacity) {
}

/* ------------------------------------------------------------------------
                             DESTRUCTOR
     - used to eliminate any dynamic  variables that have
       been created by the object, so that the memory occupied by
       these dynamic variables is returned to the freestore.
 *-------------------------------------------------------------------------*/

template<class T>
Vector<T>::~Vector() {
    free(buffer);
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
size_t Vector<T>::capacity() const {
    return bufferCapacity;
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
    if(bufferCapacity == 0){
        buffer = (T*) std::malloc(sizeof *buffer);
        bufferCapacity = 1;
        bufferSize = 1;
        buffer[0] = value;
        return;
    }

    if (bufferSize + 1 <= bufferCapacity) {
        buffer[bufferSize] = value;
        bufferSize++;
        return;
    }

    //If the vector does not have enough size to hold the new element, allocate double the allocated space at the time
    buffer = (T*) std::realloc(buffer, 2 * bufferCapacity * sizeof *buffer);
    bufferCapacity *= 2; //Doubling the bufferCapacity to match the newly allocated space

    //Now that the space is allocated and the capacity updated, add the element at the end of the array
    buffer[bufferSize] = value;
    bufferSize++; //One more element was allocated, updating size
}

template<class T>
void Vector<T>::pop_back() {
    bufferSize--;
}

template<class T>
void Vector<T>::clear() {
    free(buffer); //Freeing allocated memory
    buffer = nullptr; //setting buffer to nullptr in case there is an attempted access to a pointer to buffer
    bufferSize = 0; //Setting size to 0
    bufferCapacity = 0;
}

#endif //UNTITLED3_VECTOR_H
