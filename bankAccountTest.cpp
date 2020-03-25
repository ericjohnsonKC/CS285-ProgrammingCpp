/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment

    This is the third of three files required
    for an assignment on data abstraction.   
*/

#include <iostream>
#include "bankAccount.h"


int BankAccount::accountNumberGenerator = 1234;
    // Initializes the accountNumberGenerator with 
    // a seed value

std::string name, acctType;
double deposit, intRate;

BankAccount accounts[2];
    // BankAccount accounts[10];
        // Creates an array of 10 BankAccounts, using the 
        // default constructor

int main()
{
    for (int i=0; i < 2; i++)
    {
        std::cout << std::endl;
        std::cout << "Please enter account data for account number ";
        std::cout << accounts[i].getAccountNumber() << ":";
        std::cout << std::endl;
        std::cout << "Account holder name: ";
        std::cin >> name;
        std::cout << "Account type (checking or savings): ";
        std::cin >> acctType;
        std::cout << "Initial deposit amount: ";
        std::cin >> deposit;
        std::cout << "Initial interest rate: ";
        std::cin >> intRate;
        accounts[i].setAccountData(name, acctType, deposit, intRate);
    }

    //Separator for readability:
    std::cout << std::endl;
    std::cout << "PRINTED RESULTS...";
    std::cout << std::endl;

    //  Print account info for all ten accounts
    for (int i=0; i < 10; i++)
    {
        accounts[i].print();
    }
}