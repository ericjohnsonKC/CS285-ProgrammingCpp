/*  Author: Eric Johnson
    Date: 4/14/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 5 Assignment

    This is a class header file
    for creating fractions and doing 
    arithmetic on them.
*/

#ifndef fraction_h
#define fraction_h

#include <exception>

#include <iostream>


using namespace std;


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