/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 

    This header file contains the class definition
    for an assignment on data abstraction.  The 
    assignment requires three files - this header 
    file, an implementation file with member function
    definitions, and a separate main program file.
*/

#ifndef H_bankAccount
#define H_bankAccount
#include <iostream>
#include <string>

class BankAccount
{
    public:
        void deposit(double amount);
            // Takes a deposit amount and updates account balance.
            // Postcondition: Account balance reflects the deposit
            // amount.
        void withdraw(double amount);
            // Takes a withdrawal amount and updates account balance.
            // Postcondition: Account balance reflects the deposit
            // amount.
        double getInterest();
            // Multiplies interest rate times balance.
            // Postcondition:  Returns interest amount.
        void print();
            // Prints account holder name, account number, account
            // type, balance, and interest rate.
            // Postcondition: Accoung info is printed to the screen.
        int getAccountNumber();
            // Postcondition: returns account number.
        std::string getAccountHolderName();
            // Postcondition: returns account holder name.
        std::string getAccountType();
            // Postcondition: returns account type (checking/savings).
        double getBalance();
            // Postcondition: returns account balance.
        double getInterestRate();
            // Postcondition: returns interest rate.
        static int accountNumberGenerator;
            // This variable is used to provide account numbers
            // for account object intitialization.
        BankAccount();
            // Default constructor.  Calls setAccountInfo() to 
            // initialize member variables.
        void setAccountData();
            // Setter method for account data.
            // Postcondition: Initializes member variables.
    private:
        std::string accountHolderName;
        int accountNumber;
        std::string accountType;
        double balance;
        double interestRate;
        
        void updateBalance(double);
            // Used to update account balance when deposit() or 
            // withdraw() are called.
            // Postcondition: The balance is updated to reflect
            // Deposit or withdrawal amount.

};

#endif