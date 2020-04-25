/*  Author: Eric Johnson
    Date: 4/14/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 5 Assignment

    This is an class implementation 
    file for creating fractions and doing 
    arithmetic on them. 
*/

#include "fraction.h"
#include "fractionException.h"
   
#include <exception>
#include <iostream>

using namespace std;
    

ostream& operator<< (ostream& osObj, Fraction& thisFraction)
{
    osObj << thisFraction.numerator << "/" << thisFraction.denominator;
    
    return osObj;
}

istream& operator>> (istream& isObj, Fraction& thisFraction) 
{
    char ch;
    
    
    isObj >> thisFraction.numerator;
    isObj.get(ch);
    isObj >> thisFraction.denominator;
   
    return isObj;
}

void Fraction::setValues(int& numeratorParam, int& denominatorParam) 
{
    string errorMessage = "Error: Division by zero.";
    
    if (denominatorParam == 0)
        throw fractionException(errorMessage);
    numerator = numeratorParam;
    denominator = denominatorParam;
}

int Fraction::getNumerator() const
{
    return numerator;
}

int Fraction::getDenominator() const
{
    return denominator;
}

Fraction Fraction::operator++ ()
{
    ++numerator;

    return *this;
}

Fraction Fraction::operator++ (int dummyParameter)
{
    Fraction temp = *this;

    numerator++;

    return temp;

}

Fraction Fraction::operator-- ()
{
    numerator--;

    return *this;
}

Fraction Fraction::operator-- (int dummyParameter)
{
    Fraction temp = *this;

    numerator--;

    return temp;
}

bool Fraction::operator== (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                       + (otherFraction.numerator % otherFraction.denominator);

    return (thisFrac == otherFrac);  
}

bool Fraction::operator!= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                       + (otherFraction.numerator % otherFraction.denominator);

    return (thisFrac != otherFrac); 
}

bool Fraction::operator<= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac <= otherFrac);   
}

bool Fraction::operator< (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac < otherFrac);
}

bool Fraction::operator>= (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac >= otherFrac);
}        

bool Fraction::operator> (const Fraction& otherFraction) const
{
    double thisFrac = (numerator / denominator) + (numerator % denominator);
    double otherFrac = (otherFraction.numerator / otherFraction.denominator)
                    + (otherFraction.numerator % otherFraction.denominator);

return (thisFrac > otherFrac);
}       

Fraction Fraction::operator+ (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = (numerator * otherFraction.denominator) 
                          + (otherFraction.numerator * denominator);
    tempFrac.denominator = (denominator * otherFraction.denominator);

    return tempFrac;
}

Fraction Fraction::operator- (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = (numerator * otherFraction.denominator) 
                          - (otherFraction.numerator * denominator);
    tempFrac.denominator = (denominator * otherFraction.denominator);

    return tempFrac;
}

Fraction Fraction::operator* (const Fraction& otherFraction) const
{
    Fraction tempFrac;

    tempFrac.numerator = numerator * otherFraction.numerator;
    tempFrac.denominator = denominator * otherFraction.denominator;

    return tempFrac;
}

Fraction Fraction::operator/ (const Fraction& otherFraction) const 
{
    string errorMessage = "Error: Division by zero";
    
    if (otherFraction.numerator == 0)
        throw fractionException(errorMessage);
    
    Fraction tempFrac;

    tempFrac.numerator = numerator * otherFraction.denominator;
    tempFrac.denominator = denominator * otherFraction.numerator;

    return tempFrac;
}

Fraction::Fraction(int numeratorParam, int denominatorParam)
{
    setValues(numeratorParam, denominatorParam);
}