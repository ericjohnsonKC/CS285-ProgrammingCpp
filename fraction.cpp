/*  Author: Eric Johnson
    Date: 4/7/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 4 Assignment

    This is a template class implementation 
    file for creating fractions and doing 
    arithmetic on them.  It has been moved
    into the header in order to be implemnted
    as a class template.
*/

#include "fraction.h"
   
#include <iostream>
    
using namespace std;
    


template <typename T>
void Fraction<T>::setValues(T& numeratorParam, T& denominatorParam)
{
    numerator = numeratorParam;
    denominator = denominatorParam;
}

template <typename T>
T Fraction<T>::getNumerator() const
{
    return numerator;
}

template <typename T>
T Fraction<T>::getDenominator() const
{
    return denominator;
}

template <typename T>
Fraction<T> Fraction<T>::operator++ ()
{
    numerator += 1;

    return *this;
}

template <typename T>
Fraction<T> Fraction<T>::operator++ (int dummyParameter)
{
    Fraction temp = *this;

    numerator += 1;

    return temp;

}

template <typename T>
Fraction<T> Fraction<T>::operator-- ()
{
    numerator -= 1;

    return *this;
}

template <typename T>
Fraction<T> Fraction<T>::operator-- (int dummyParameter)
{
    Fraction temp = *this;

    numerator -=1;

    return temp;
}

template <typename T>
bool Fraction<T>::operator== (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                       + (otherFraction.numerator % otherFraction.denominator);

    return (thisFrac == otherFrac);  
}

template <typename T>
bool Fraction<T>::operator!= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                       + (otherFraction.numerator % otherFraction.denominator);

    return (thisFrac != otherFrac); 
}

template <typename T>
bool Fraction<T>::operator<= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac <= otherFrac);   
}

template <typename T>
bool Fraction<T>::operator< (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac < otherFrac);
}

template <typename T>
bool Fraction<T>::operator>= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac >= otherFrac);
}        

template <typename T>
bool Fraction<T>::operator> (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac > otherFrac);
}       

template <typename T>
Fraction<T> Fraction<T>::operator+ (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = (numerator * otherFraction.denominator) 
                          + (otherFraction.numerator * denominator);
    tempFrac.denominator = (denominator * otherFraction.denominator);

    return tempFrac;
}

template <typename T>
Fraction<T> Fraction<T>::operator- (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = (numerator * otherFraction.denominator) 
                          - (otherFraction.numerator * denominator);
    tempFrac.denominator = (denominator * otherFraction.denominator);

    return tempFrac;
}

template <typename T>
Fraction<T> Fraction<T>::operator* (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = numerator * otherFraction.numerator;
    tempFrac.denominator = denominator * otherFraction.denominator;

    return tempFrac;
}

template <typename T>
Fraction<T> Fraction<T>::operator/ (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = numerator * otherFraction.denominator;
    tempFrac.denominator = denominator * otherFraction.numerator;

    return tempFrac;
}

template <typename T>
Fraction<T>::Fraction(T numeratorParam, T denominatorParam)
{
    setValues(numeratorParam, denominatorParam);
}