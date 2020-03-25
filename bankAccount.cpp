/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This is the class implementation file for 
    an assignment on inheritance.  It 
    contains member function definitions for 
    the BankAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include <string>
#include "bankAccount.h"


// Member functions for the class BankAccount are
// defined below.  The class definition is referenced
// above in the #include statement to the .h file.


 void BankAccount::setAccountNumber(int acctNum)
 {
     accountNumber = acctNum;
 }
           
int BankAccount::getAccountNumber()
{
    return accountNumber;
}
            
double BankAccount::getBalance()
{
    return balance;
}
           
void BankAccount::withdraw(double amount)
{
    balance -= amount;
}
            
void BankAccount::deposit(double amount)
{
    balance += amount;
}
            
void BankAccount::print()
{
    std::cout << std::endl; // For readability
    std::cout << "Account Number: " << accountNumber;
    std::cout << std::endl;
    std::cout << "Balance: " << balance;
    std::cout << std::endl;
}
            
BankAccount::BankAccount(int acctNum, double initialDeposit)
{
    setAccountNumber(acctNum);
    balance = 0;
    deposit(initialDeposit);
}
            