/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This header file contains the class definition
    for an assignment on class inheritance.  The 
    assignment requires seven source code files - 
    this header, two other headers, three class 
    implementation files, and a main test file.
*/

#ifndef CheckingAccountH
#define CheckingAccountH
#include "bankAccount.h"
#include <iostream>
#include <string>

class CheckingAccount: public BankAccount
{
    public:
        double getMinimumBalance();
            // Returns minimum balance.
        void setMinimumBalance(double minBal);
            // Sets the value of the variable
            // minimumBalance.
        double getInterestRate();
            // Returns the interest rate.
        void setInterestRate();
            // Sets the value of the variable
            // interestRate.
        double getServiceCharge();
            // Returns the service charge.
        void setServiceCharge();
            // Sets the value of the variable
            // serviceCharge.
        double postInterest();
            // Multiplies interest rate times
            // the current balance, returns the
            // resulting amount of interest 
            // earned.
        void writeCheck(double amount);
            // Calls the withdraw function, 
            // reducing account balance by
            // the check/withdrawal amount.
        void withdraw();
            // Checks to ensure sufficient funds
            // first and reports a warning if not.
            // If sufficient funds available to make
            // withdrawal, then checks to see if 
            // balance will go below minimumBalance.
            // If so, checks to see if balance will go
            // below zero after withdrawal and service
            // charge is applied. If so, reports error.
            // If not, balance is adjusted and service 
            // charge is applied.  Otherwise withdrawal
            // will simply reduce balance by the amount
            // withdrawn.
        void print();
            // Prints accountNumber, balance, 
            // interestRate, minimumBalance, and
            // serviceCharge.
        CheckingAccount()

    private:
};

#endif