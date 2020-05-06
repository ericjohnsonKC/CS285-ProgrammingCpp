#ifndef derivedClass_H
#define derivedClass_H

#include "baseClass.cpp"

#include<iostream>

using namespace std;

template <typename T>
class DerivedClass: public BaseClass<T>
{
    public:

        void print();

};





#endif