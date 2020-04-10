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

template<typename T>
class Fraction
{
    friend ostream& operator<< (ostream& osObj, Fraction<T>& thisFraction);
        // Overloads the output stream insertion operator.  
        // The output is in the format:
        // numerator/denominator
        // Ex: 1/2 or 2/3, etc.
    
    friend istream& operator>> (istream& isObj, Fraction<T>& thisFraction);
        // Overloads the input stream insertion operator.
        // The input is taken from the user in the format:
        // numerator/denominator
        // Ex: 1/2 or 2/3, etc.
    
    public:
        void setValues(T& numeratorParam, T& denominatorParam);
            // Sets the values of the member private
            // variables numerator and denominator.

        T getNumerator() const;
            // Returns the value of numerator.

        T getDenominator() const;
            // Returns the value of denominator.

        Fraction operator++ ();
            // Pre-increment operator.
            // Increments the value of the 
            // numerator by 1 BEFORE using
            // the object in an expression.

        Fraction operator++ (T dummyParameter);
            // Post-increment operator.
            // Increments the value of the 
            // numerator by 1 AFTER using 
            // the object in an expression.

        Fraction operator-- ();
            // Pre-decrement operator.
            // Decrements the value of the 
            // numerator by 1 BEFORE using
            // the object in an expression.

        Fraction operator-- (T dummyParameter);
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
        
        Fraction (T numeratorParam = 0, T denominatorParam = 1);
            // Constructor with default values.
   
    private:
        T numerator;
        T denominator;
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

template<typename T>
ostream& operator<< (ostream& osObj, Fraction<T>& thisFraction)
{
    osObj << thisFraction.numerator << "/" << thisFraction.denominator;
    
    return osObj;
}
template<typename T>
istream& operator>> (istream& isObj, Fraction<T>& thisFraction)
{
    char ch;
    
    isObj >> thisFraction.numerator;
    isObj.get(ch);
    isObj >> thisFraction.denominator;
    
    return isObj;
}
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
    ++numerator;

    return *this;
}

template <typename T>
Fraction<T> Fraction<T>::operator++ (T dummyParameter)
{
    Fraction temp = *this;

    numerator++;

    return temp;

}

template <typename T>
Fraction<T> Fraction<T>::operator-- ()
{
    numerator--;

    return *this;
}

template <typename T>
Fraction<T> Fraction<T>::operator-- (T dummyParameter)
{
    Fraction temp = *this;

    numerator--;

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
