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
#include "CS285_johnsonE_wk1.h"


// Member functions for the class BankAccount are
// defined below.  The class definition is referenced
// above in the include statement to the .h file.


void BankAccount::deposit()
{
    double depositAmount = 0;
    
    std::cout << "Enter deposit amount: ";
    std::cin >> depositAmount;
    std::cout << std::endl;

    if (depositAmount >= 0)
        updateBalance(depositAmount);
    else
        std::cout << "Please enter a valid amount." << std::endl;    
}

void BankAccount::withdraw()
{
    double withdrawAmount = 0;

    std::cout << "Enter withdraw amount: ";
    std::cin >> withdrawAmount;
    std::cout << std::endl;

    if (withdrawAmount >= 0)
    {    
        withdrawAmount *= -1;
        updateBalance(withdrawAmount);
    }
    else
        std::cout << "Please enter a valid amount." << std::endl;   
}

double BankAccount::getInterest()
{
    double interest = balance * interestRate;
    std::cout << "Interest: $";
    std::cout << interest << std::endl;
}

void BankAccount::updateBalance(double debit)
{
    balance += debit;
}

void BankAccount::print()
{
    std::cout << std::endl;
    std::cout << "Account holder's name: " + accountHolderName << std::endl;
    std::cout << "Account type: " + accountType << std::endl;
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

BankAccount::BankAccount()
{
    std::cout << std::endl;
    std::cout << "Account holder name: ";
    std::cin >> accountHolderName;
    std::cout << "Account type: ";
    std::cin >> accountType;
    std::cout << "Balance: ";
    std::cin >> balance;
    std::cout << "Interest rate: ";
    std::cin >> interestRate;
    accountNumber = BankAccount::accountNumberGenerator;
    BankAccount::accountNumberGenerator++;
}