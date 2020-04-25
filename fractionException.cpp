/*  Author: Eric Johnson
    Date: 4/14/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 5 Assignment

    This is a class implementation 
    file for the Exception class.
*/

#include "fractionException.h"

#include <exception>
#include <iostream>

using namespace std;


const char* fractionException::what() const throw() {
    return errorMessage.c_str();
}
        
fractionException::fractionException() {
    errorMessage = "Invalid or undefined division operation.";
}
        
fractionException::fractionException(string& errorMsg) {
    errorMessage = errorMsg;
}