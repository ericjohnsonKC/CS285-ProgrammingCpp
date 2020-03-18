/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 
*/

#include <iostream>
#include <string>
#include "CS285_johnsonE_wk1.h"

using namespace std;

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
    
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    cout << endl;

    if (depositAmount >= 0)
        updateBalance(depositAmount);
    else
        cout << "Please enter a valid amount." << endl;    
}

void BankAccount::withdraw()
{
    double withdrawAmount = 0;

    cout << "Enter withdraw amount: ";
    cin >> withdrawAmount;
    cout << endl;

    if (withdrawAmount >= 0)
        withdrawAmount *= -1;
        updateBalance(withdrawAmount);
    else
        cout << "Please enter a valid amount." << endl;   
}

double BankAccount::getInterest()
{
    double interest = balance * interestRate
    cout << "Interest: $" + interest << endl;
}

void BankAccount::updateBalance(double debit)
{
    balance += debit;
}

void BankAccount::print()
{
    cout << endl;
    cout << "Account holder's name: " + accountHolderName << endl;
    cout << "Account type: " + accountType << endl;
    cout << "Account number: " + accountNumber << endl;
    cout << "Balance: " + balance << endl;
    cout << "Interest rate: " + interestRate << endl;    
}

int BankAccount::getAccountNumber()
{
    return accountNumber;
}

string BankAccount::getAccountHolderName()
{
    return accountHolderName;
}

string BankAccount::getAccountType()
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