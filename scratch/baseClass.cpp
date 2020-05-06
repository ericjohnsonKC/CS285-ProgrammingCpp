#ifndef baseClass_H
#define baseClass_H

#include<iostream>

using namespace std;

template<typename T>
class BaseClass
{
    public:
        void setVar(myVariable<T>)
        {
            baseClassVar<T> = myVariable;
        }
    
    protected:
        <T> baseClassVar;
};







#endif