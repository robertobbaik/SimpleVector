#include <iostream>
#include "SimpleVector.h"

using namespace std;

int main()
{
    SimpleVector<int> *simpleVector = new SimpleVector<int>(10);

    for (int i = 0; i < simpleVector->capacity(); i++)
    {
        simpleVector->push_back(i);

        cout << "simpleVector [" << i << "] : " << simpleVector->getValue(i) << endl;
    }

    cout << "capacity : " << simpleVector->capacity() << endl;
    cout << "size : " << simpleVector->size() << endl;

    for (int i = 0; i < 5; i++)
    {
        simpleVector->pop_back();
    }

    int a = 1;
    simpleVector->push_back(a);

    cout << "capacity : " << simpleVector->capacity() << endl;
    cout << "size : " << simpleVector->size() << endl;

    for (int i = 0; i < simpleVector->size(); i++)
    {
        cout << "simpleVector [" << i << "] : " << simpleVector->getValue(i) << endl;
    }

    return 0;
}