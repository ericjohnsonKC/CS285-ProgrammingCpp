#include "derivedClass.h"

#include<iostream>

using namespace std;


int main()
{
    DerivedClass<int> obj;

    int myNumber = 5;

    obj.setVar(myNumber);

    obj.print();
}