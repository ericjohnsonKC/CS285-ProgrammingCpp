/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment

    This is the third of three files required
    for an assignment on data abstraction.   
*/

#include <iostream>
#include "CS285_johnsonE_wk1.h"

// Initialize the accountNumberGenerator with 
// a seed value
int BankAccount::accountNumberGenerator = 1234;

int main()
{
    //  Create an array of 10 BankAccount objects (using default constructor)
    BankAccount accounts[10];

    //Seperator for readability:
    std::cout << std::endl;
    std::cout << "PRINTED RESULTS...";
    std::cout << std::endl;

    //  Print account info for all ten accounts
    for (int i=0; i < 10; i++)
    {
        accounts[i].print();
    }
}