/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This is the class implementation file for 
    an assignment on inheritance.  It 
    contains member function definitions for 
    the SavingsAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include "savingsAccount.h"
          
double SavingsAccount::getInterestRate()
{
    return interestRate;
}
void SavingsAccount::setInterestRate(double intRate)
{
    interestRate = intRate;
}

std::string SavingsAccount::withdraw(double amount)
{
    if (amount > getBalance())
        return "Amount exceeds account balance. Insufficient funds";
    updateBalance(amount * -1);
    return "Withdrawal successful.";
}

void SavingsAccount::postInterest()
{
    double interest = getBalance() * interestRate;
    updateBalance(interest);
}
   
void SavingsAccount::print()
{
    std::cout << std::endl;
    std::cout << "AccountNumber: " << getAccountNumber() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
    std::cout << "Interest rate: " << getInterestRate() << std::endl;
}

SavingsAccount::SavingsAccount(int acctNum, double initialDeposit, double intRate)
    : BankAccount(acctNum, initialDeposit)
{
    interestRate = intRate;
} 
