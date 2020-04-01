/*  Author: Eric Johnson, Date: 3/31/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 3 assignment 

    This is the class implementation file for 
    an assignment on polymorphism.  It 
    contains member function definitions for 
    the SavingsAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include "savingsAccount.h"

using namespace std;


          
double SavingsAccount::getInterestRate()
{
    return interestRate;
}

void SavingsAccount::setInterestRate(double intRate)
{
    interestRate = intRate;
}

void SavingsAccount::withdraw(double amount)
{
    if (amount > getBalance())
        cout << "Amount exceeds account balance. Insufficient funds";
    else 
        BankAccount::withdraw(amount);
}

void SavingsAccount::postInterest()
{
    deposit(getBalance() * interestRate);
    
}
   
void SavingsAccount::print()
{
    BankAccount::print();
    cout << "\nInterest rate: " << getInterestRate() << endl;
}

void SavingsAccount::createMonthlyStatement()
{
    postInterest();
}

SavingsAccount::SavingsAccount(int acctNum, string acctOwnerName, double initialDeposit, double intRate)
    : BankAccount(acctNum, acctOwnerName, initialDeposit)
{
    interestRate = intRate;
} 
