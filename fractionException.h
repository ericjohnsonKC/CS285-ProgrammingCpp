/*  Author: Eric Johnson
    Date: 4/14/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 5 Assignment

    This is a test program file for 
    testing exception handling.
*/

#ifndef fractionException_h
#define fractionException_h
#include <iostream>
#include <exception>

using namespace std;


class fractionException: public exception{

    public:
        virtual const char* what() const throw();
            // Returns error message.

        fractionException();
            // Constructor with default
            // error message.
        
        fractionException(string& errorMsg);
            // Constructor that takes 
            // custom error message.
            // Sets error message to 
            // parameter given.

    private: 
        string errorMessage;
};

#endif