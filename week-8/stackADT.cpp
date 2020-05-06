/*  Author: Eric Johnson
    Date: 5/5/2020
    Grantham University
    CS285 Advanced Programming in HTML
    Week 8 Assignment

    This assignment is on the stack data type.
*/

#ifndef stackADT_H
#define stackADT_H

#include <iostream>

using namespace std;


template<class Type>
class stackADT
{
    public: 
        virtual void initializeStack() = 0;

        virtual bool isEmptyStack() const = 0;

        virtual bool isFullStack() const = 0;

        virtual void push(const Type& newItem) =  0;

        virtual Type top() const = 0;

        virtual void pop() = 0;
};



#endif
