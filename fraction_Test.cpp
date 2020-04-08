/*  Author: Eric Johnson
    Date: 4/7/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 4 Assignment

    This is a test program file for 
    creating fractions and doing 
    arithmetic on them.
*/

#include "fraction.cpp"

#include <iostream>

using namespace std;

int main()
{
    // Test the constructors:
    Fraction frac_1(1, 2);
    Fraction frac_2(2, 3);

    cout << "Fraction #1: " << frac_1 << endl;
    cout << "Fraction #2: " << frac_2 << endl << endl;

    Fraction frac_3;
    cout << "Enter a fraction: ";
    cin >> frac_3;

    cout << "You entered: " << frac_3 << endl;
    frac_3++;
    cout << "After incrementing: " << frac_3 << endl;
    frac_3--;
    cout << "After decrementing: " << frac_3 << endl << endl;

    cout << "Now lets compare and do math on two fractions..." << endl;
    cout << "Enter fraction #1: ";
    cin >> frac_1;
    cout << "Enter fraction #2: ";
    cin >> frac_2;
    cout << endl;
    cout << frac_1 << " == " << frac_2 << " ?";
    if (frac_1 == frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;
    
    cout << frac_1 << " != " << frac_2 << " ?";
    if (frac_1 != frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_1 << " <= " << frac_2 << " ?";
    if (frac_1 <= frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_1 << " < " << frac_2 << " ?";
    if (frac_1 < frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_1 << " >= " << frac_2 << " ?";
    if (frac_1 >= frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_1 << " > " << frac_2 << " ?";
    if (frac_1 > frac_2)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    frac_3 = frac_1 + frac_2;
    cout << frac_1 << " + " << frac_2 << " = " << frac_3 << endl << endl;

    frac_3 = frac_1 - frac_2;
    cout << frac_1 << " - " << frac_2 << " = " << frac_3 << endl << endl;

    frac_3 = frac_1 * frac_2;
    cout << frac_1 << " * " << frac_2 << " = " << frac_3 << endl << endl;

    frac_3 = frac_1 / frac_2;
    cout << frac_1 << " / " << frac_2 << " = " << frac_3 << endl << endl;

    return 0;
}