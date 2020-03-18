/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 
*/

#include <iostream>
#include <string>
#include "CS285_johnsonE_wk1.h"

/*
        void deposit(double);
        void withdraw(double);
        double getInterest() const;
        double updateBalance();
        void print() const;
        int getAccountNumber() const;
        string getAccountType() const;
        double getBalance() const;
        double getInterestRate() const;
        BankAccount(string, string, double, double);
        BankAccount();
*/

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
    {    withdrawAmount *= -1;
        updateBalance(withdrawAmount);
    }
    else
        std::cout << "Please enter a valid amount." << std::endl;   
}

double BankAccount::getInterest()
{
    double interest = balance * interestRate;
    std::cout << "Interest: $" + interest << std::endl;
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
    std::cout << "Account number: " + accountNumber << std::endl;
    std::cout << "Balance: " + balance << std::endl;
    std::cout << "Interest rate: " + interestRate << std::endl;    
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

BankAccount(string name, string type, double bal, double rate, int acctGenSeed)
{
    accountHolderName = name;
    accountType = type;
    balance = bal;
    interestRate = rate;

}

BankAccount()
{
    accountHolderName = "";
    accountType = "";
    balance = 0;
    interestRate = 0;
    accountNumberGenerator = 1;
    accountNumber = accountNumberGenerator
    accountNumberGenerator++;
}