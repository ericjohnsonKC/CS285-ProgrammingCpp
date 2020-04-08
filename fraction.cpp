/*  Author: Eric Johnson
    Date: 4/7/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 4 Assignment

    This is a template class header file
    for creating fractions and doing 
    arithmetic on them.
*/

#ifndef fraction_h
#define fraction_h

#include <iostream>

using namespace std;

// template<class dataType>
class Fraction
{
    friend ostream& operator<< (ostream& osObj, Fraction& thisFraction);
        // Overloads the output stream insertion operator.  
        // The output is in the format:
        // numerator/denominator
        // Ex: 1/2 or 2/3, etc.
    
    friend istream& operator>> (istream& isObj, Fraction& thisFraction);
        // Overloads the input stream insertion operator.
        // The input is taken from the user in the format:
        // numerator/denominator
        // Ex: 1/2 or 2/3, etc.
    
    public:
        void setValues(int& numeratorParam, int& denominatorParam);
            // Sets the values of the member private
            // variables numerator and denominator.

        int getNumerator() const;
            // Returns the value of numerator.

        int getDenominator() const;
            // Returns the value of denominator.

        Fraction operator++ ();
            // Pre-increment operator.
            // Increments the value of the 
            // numerator by 1 BEFORE using
            // the object in an expression.

        Fraction operator++ (int dummyParameter);
            // Post-increment operator.
            // Increments the value of the 
            // numerator by 1 AFTER using 
            // the object in an expression.

        Fraction operator-- ();
            // Pre-decrement operator.
            // Decrements the value of the 
            // numerator by 1 BEFORE using
            // the object in an expression.

        Fraction operator-- (int dummyParameter);
            // Post-decrement operator.
            // Decrements the value of the 
            // numerator by 1 AFTER using 
            // the object in an expression.

        bool operator== (const Fraction& otherFraction) const;
            // Overloads the equality operator.
            // Returns true the fractions are 
            // EQUAL in reduced form.

        bool operator!= (const Fraction& otherFraction) const;
            // Overload the non-equality operator.
            // Returns true if the fraction are
            // NOT EQUAL in reduced form.

        bool operator<= (const Fraction& otherFraction) const;
            // Overloads the less than or equal operator.
            // Returns true if less than or equal to the 
            // other fraction. 

        bool operator< (const Fraction& otherFraction) const;
            // Overloads the less than operator.
            // Returns true if less than the 
            // other fraction.

        bool operator>= (const Fraction& otherFraction) const;
            // Overloads the greater than or equal operator.
            // Returns true if greater than the 
            // other fraction.

        bool operator> (const Fraction& otherFraction) const;
            // Overloads the greater than operator.
            // Returns true if greater than the 
            // other fraction.

        Fraction operator+ (const Fraction& otherFraction) const;
            // Overloads the addition operator.
            // Calculates a common denominator, then 
            // adds the numerators.

        Fraction operator- (const Fraction& otherFraction) const;
            // Overloads the subtraction operator.
            // Calculates a common denominator, then 
            // subtracts the otherFraction numerator 
            // from the numerator.

        Fraction operator* (const Fraction& otherFraction) const;
            // Overloads the multiplication operator.
            // Multiplies the numerators and multiplies
            // the denominators.

        Fraction operator/ (const Fraction& otherFraction) const;
            // Overloads the division operator.
            // Multiplies the calling Fraction object 
            // by the inverse of the otherFraction object.
        
        Fraction (int numeratorParam = 0, int denominatorParam = 1);
            // Constructor with default values.
   
    private:
        int numerator;
        int denominator;
};

#endif
// End of header file
//----------------------------------------------------------------

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

//#include "fraction.h"
    // Commented out after moving implementation
    // into the header file.
//#include <iostream>
    // Commented out for same reason as above.

//using namespace std;
    // Commented out for same reason as above.

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
    Fraction tempFrac;

    tempFrac.numerator = numerator * otherFraction.denominator;
    tempFrac.denominator = denominator * otherFraction.numerator;

    return tempFrac;
}

Fraction::Fraction(int numeratorParam, int denominatorParam)
{
    setValues(numeratorParam, denominatorParam);
}