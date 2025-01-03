#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_

#include <iostream>

using namespace std;

template <typename T>
class SimpleVector
{
public:
    SimpleVector();
    SimpleVector(int capacity);
    ~SimpleVector();

    void push_back(T &value);
    void pop_back();
    int size() const;
    int capacity() const;

    T getValue(int index) const;

private:
    T *arr;
    int currentSize;
    int currentCapacity;
};

template <typename T>
SimpleVector<T>::SimpleVector()
{
    arr = new T[10];
    currentCapacity = 10;
    currentSize = 0;
}

template <typename T>
SimpleVector<T>::SimpleVector(int capacity) : currentCapacity(capacity)
{
    arr = new T[capacity];
    currentSize = 0;
}

template <typename T>
SimpleVector<T>::~SimpleVector()
{
    delete[] arr;
}

template <typename T>
void SimpleVector<T>::push_back(T &value)
{
    if (currentSize == currentCapacity)
    {
        cout << "vector size is full" << endl;
        return;
    }
    else
    {
        arr[currentSize] = value;
        currentSize++;
    }
}

template <typename T>
void SimpleVector<T>::pop_back()
{
    if (currentSize == 0)
    {
        cout << "vector size : 0 " << endl;
        return;
    }
    currentSize--;
}

template <typename T>
int SimpleVector<T>::size() const
{
    return currentSize;
}

template <typename T>
int SimpleVector<T>::capacity() const
{
    return currentCapacity;
}

template <typename T>
T SimpleVector<T>::getValue(int index) const
{
    if (index < 0 || index >= currentSize)
    {
        cout << "Get Value is Failed" << endl;
        return T();
    }

    int result = arr[index];

    return result;
}

#endif