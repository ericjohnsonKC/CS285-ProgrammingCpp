/*  Author: Eric Johnson, Date: 3/31/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 3 assignment 

    This is the class implementation file for 
    an assignment on polymorphism.  It 
    contains member function definitions for 
    the BankAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include "bankAccount.h"

using namespace std;


// Member functions for the class BankAccount are
// defined below.  The class definition is referenced
// above in the #include statement to the .h file.


//  void BankAccount::setAccountNumber(int acctNum)
//  {
//      accountNumber = acctNum;
//  }
           
int BankAccount::getAccountNumber()
{
    return accountNumber;
}
            
double BankAccount::getBalance()
{
    return balance;
}
           
string BankAccount::getName()
{
    return name;
}

void BankAccount::setName(string acctOwnerName)
{
    name = acctOwnerName;
}

void BankAccount::deposit(double amount)
{
    balance += amount;
}
void BankAccount::withdraw(double amount)
{
    balance -= amount;
}
                   
void BankAccount::print()
{
    cout << "\nAccount Number: " << accountNumber;
    cout << "\nBalance: " << balance;
}

BankAccount::BankAccount(int acctNum, string acctOwnerName, double initialDeposit)
{
    accountNumber = acctNum;
    name = acctOwnerName;
    balance = 0;
    if (initialDeposit > 0)
        deposit(initialDeposit);
    else
        cout << "Invalid initial deposit amount";  
}

