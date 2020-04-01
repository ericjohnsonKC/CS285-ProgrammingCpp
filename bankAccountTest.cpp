/*  Author: Eric Johnson
    Date: 3/31/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 3 Assignment - Polymorphism

    This is a test file for testing the 
    implementation of the classes
    BankAccount, CheckingAccount, and 
    SavingsAccount.
*/

#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"

using namespace std;



// The following variables are used
// to initialize accounts.
int acctNumGen = 1000;
const double CHK_MIN_BAL = 25;
const double CHK_INT_RATE = .002;
const double CHK_SVC_CHG = 5;
const double CHK_FEE = 15;
const double SVG_INT_RATE = .01;


int main()
{
    BankAccount *accountsList[6];
    accountsList[0] = new CheckingAccount(acctNumGen++, "Bill", 25000, .012, 100, 10, CHK_FEE);
    accountsList[1] = new CheckingAccount(acctNumGen++, "Bob", 10000, .0099, 100, 15, CHK_FEE);
    accountsList[2] = new SavingsAccount(acctNumGen++, "Susan", 20000, .031);
    accountsList[3] = new SavingsAccount(acctNumGen++, "Steve", 50000, .041);
    accountsList[4] = new CheckingAccount(acctNumGen++, "Sally", 4999, .079, 100, 20, CHK_FEE);
    accountsList[5] = new SavingsAccount(acctNumGen++, "Fred", 2000, .011);

    cout << "January:\n---------------" << endl;
    for (int i =0; i < 6; i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }

    cout << "February:\n---------------" << endl;
    for (int i =0; i < 6; i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }


    for (int i = 0; i < 6; i++)
    {
        accountsList[i]->withdraw(500);
    }

    cout << "March:\n---------------" << endl;
    for (int i =0; i < 6; i++)
    {
        accountsList[i]->createMonthlyStatement();
        accountsList[i]->print();
        cout << endl;
    }
    return 0;
}