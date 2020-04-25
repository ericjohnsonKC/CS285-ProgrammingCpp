/*  Author: Eric Johnson
    Date: 4/14/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 5 Assignment

    This is a test program file for 
    testing exception handling.
*/

#include "fractionException.h"
#include "fraction.h"

#include <exception>
#include <iostream>
#include <iomanip>

using namespace std;


int main () {
    try {
        Fraction num1(1,0);

        Fraction num2(0,3);

        Fraction num3;

        cout << fixed;

        cout << showpoint;

        cout << setprecision(2);


        num3 = num1 / num2;

        
        cout << num1 << " / " << num2 << " = " << num3 << endl;

    }

    catch (fractionException e) {

        cout << "Exception caight in main: " << e.what() << endl;

    }

    return 0;
}