/*  Author: Eric Johnson
    Date: 3/24/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 2 Assignment - Class Inheritance

    This is a test file for testing the 
    implementation of the classes
    BankAccount, CheckingAccount, and 
    SavingsAccount.
*/

#include <iostream>
#include "checkingAccount.h"
#include "savingsAccount.h"

// The following variables are used
// to initialize accounts.
int acctNumGen = 1000;
const double CHK_MIN_BAL = 25;
const double CHK_INT_RATE = .002;
const double CHK_SVC_CHG = 5;
const double SVG_INT_RATE = .01;

int main()
{
    CheckingAccount jackAccount(acctNumGen++, 1000, CHK_INT_RATE, CHK_MIN_BAL, CHK_SVC_CHG);
    CheckingAccount lisaAccount(acctNumGen++, 450, CHK_INT_RATE, CHK_MIN_BAL, CHK_SVC_CHG);
    SavingsAccount samirAccount(acctNumGen++, 9300, SVG_INT_RATE);
    SavingsAccount ritaAccount(acctNumGen++, 32, SVG_INT_RATE);
    jackAccount.deposit(1000);
    lisaAccount.deposit(2300);
    samirAccount.deposit(800);
    ritaAccount.deposit(500);
    jackAccount.postInterest();
    lisaAccount.postInterest();
    samirAccount.postInterest();
    ritaAccount.postInterest();
    std::cout << "****************************" << std::endl;
    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();
    std::cout << "*****************************" << std::endl;
    jackAccount.writeCheck(250);
    lisaAccount.writeCheck(350);
    samirAccount.withdraw(120);
    ritaAccount.withdraw(290);
    std::cout << "*******After withdrawals**********" << std::endl;
    jackAccount.print();
    lisaAccount.print();
    samirAccount.print();
    ritaAccount.print();
    std::cout << "*****************************" << std::endl;
    return 0;
}