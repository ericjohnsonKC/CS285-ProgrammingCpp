/*  Author: Eric Johnson
    Date: 4/7/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 4 Assignment

    This is a test program file for 
    creating fractions and doing 
    arithmetic on them.
*/

#include "fraction.h"

#include <iostream>

using namespace std;

int main()
{

    /*  This main test file is split in two identical
        parts.  The first run uses integers, the second
        part is basically a copy paste using doubles.
    */

   // Part one, using integers:

    // Test the constructors:
    Fraction<int> frac_1(1, 2);
    Fraction<int> frac_2(2, 3);

    cout << "Fraction #1: " << frac_1 << endl;
    cout << "Fraction #2: " << frac_2 << endl << endl;

    Fraction<int> frac_3;
    cout << "Enter a fraction using integers: ";
    cin >> frac_3;

    cout << "You entered: " << frac_3 << endl;
    frac_3++;
    cout << "After incrementing: " << frac_3 << endl;
    frac_3--;
    cout << "After decrementing: " << frac_3 << endl << endl;

    cout << "Now lets compare and do math on two fractions..." << endl;
    cout << "Enter a fraction using integers; #1 (Ex. 2/3): ";
    cin >> frac_1;
    cout << "Enter a fraction using integers; #2 (Ex. 2/3): ";
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

    // End of part one---------------------------------------------------------------------
    //-------------------------------------------------------------------------------------

    // Part two, using doubles:

    // Test the constructors:
    Fraction<double> frac_4(1.2, 2.3);
    Fraction<double> frac_5(2.4, 3.5);

    cout << "Fraction #1: " << frac_4 << endl;
    cout << "Fraction #2: " << frac_5 << endl << endl;

    Fraction<double> frac_6;
    cout << "Enter a fraction using double precision floats: ";
    cin >> frac_6;

    cout << "You entered: " << frac_6 << endl;
    frac_6++;
    cout << "After incrementing: " << frac_6 << endl;
    frac_6--;
    cout << "After decrementing: " << frac_6 << endl << endl;

    cout << "Now lets compare and do math on two fractions..." << endl;
    cout << "Enter a double precision float type; fraction #1 (Ex: 1.2/2.3) ";
    cin >> frac_4;
    cout << "Enter a double precision float type; fraction #2 (Ex: 1.2/2.3): ";
    cin >> frac_5;
    cout << endl;
    cout << frac_4 << " == " << frac_5 << " ?";
    if (frac_4 == frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;
    
    cout << frac_4 << " != " << frac_5 << " ?";
    if (frac_4 != frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_4 << " <= " << frac_5 << " ?";
    if (frac_4 <= frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_4 << " < " << frac_5 << " ?";
    if (frac_4 < frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_4 << " >= " << frac_5 << " ?";
    if (frac_4 >= frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    cout << frac_4 << " > " << frac_5 << " ?";
    if (frac_4 > frac_5)
        cout << "  TRUE" << endl << endl;
    else
        cout << "  FALSE" << endl << endl;

    frac_6 = frac_4 + frac_5;
    cout << frac_4 << " + " << frac_5 << " = " << frac_6 << endl << endl;

    frac_6 = frac_4 - frac_5;
    cout << frac_4 << " - " << frac_5 << " = " << frac_6 << endl << endl;

    frac_6 = frac_4 * frac_5;
    cout << frac_4 << " * " << frac_5 << " = " << frac_6 << endl << endl;

    frac_6 = frac_4 / frac_5;
    cout << frac_4 << " / " << frac_5 << " = " << frac_6 << endl << endl;

    return 0;
}