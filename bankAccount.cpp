/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 

    This is the class implementation file for 
    an assignment on data abstraction.  It 
    contains member function definitions for 
    the class members prototyped in the header file.
*/

#include <iostream>
#include <string>
#include "bankAccount.h"


// Member functions for the class BankAccount are
// defined below.  The class definition is referenced
// above in the include statement to the .h file.


double BankAccount::deposit(double amount)
{
    if (amount >= 0)
    {
        updateBalance(amount);
        return balance;
    }
    else
        return balance;    
}

double BankAccount::withdraw(double amount)
{
    if (amount >= 0)
    {    
        amount *= -1;
        updateBalance(amount);
        return balance;
    }
    else
        return balance;   
}

double BankAccount::getInterest()
{
    return balance * interestRate;
    
}

double BankAccount::updateBalance(double debit)
{
    balance += debit;
    return balance;
}

void BankAccount::print()
{
    std::cout << std::endl;
    std::cout << "Account holder's name: " << accountHolderName << std::endl;
    std::cout << "Account type: " << accountType << std::endl;
    std::cout << "Account number: ";
    std::cout << accountNumber << std::endl;
    std::cout << "Balance: ";
    std::cout << balance << std::endl;
    std::cout << "Interest rate: ";
    std::cout << interestRate << std::endl;    
}

int BankAccount::getAccountNumber()
{
    return accountNumber;
}

std::string BankAccount::getAccountHolderName()
{
    return accountHolderName;
}

std::string BankAccount::getAccountType()
{
    return accountType;
}

double BankAccount::getBalance()
{
    return balance;
}

double BankAccount::getInterestRate()
{
    return interestRate;
}

// Below is the constructor method.  It takes 
// no parameters, but it requires user input
// to assign all of the member variables.
// There are no setter/mutator methods for this
// class.

BankAccount::BankAccount(std::string name, std::string acctType, double deposit, double intRate)
{
    setAccountData(name, acctType, deposit, intRate);
}

void BankAccount::setAccountData(std::string name, std::string acctType, double deposit, double intRate)
{
    accountHolderName = name;
    accountType = acctType;
    accountNumber = accountNumberGenerator;
    accountNumberGenerator += 100;
    balance = deposit;
    interestRate = intRate;
}