/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This header file contains the class definition
    for an assignment on class inheritance.  The 
    assignment requires seven source code files - 
    this header, two other headers, three class 
    implementation files, and a main test file.
*/

#ifndef SavingsAccount_h
#define SavingsAccount_h
#include <iostream>
#include "bankAccount.h"

class SavingsAccount: public BankAccount
{
    public:  
        double getInterestRate();
            // Returns interest rate.
        void setInterestRate(double intRate);
            // assigns value of intRate to
            // InterestRate variable.
        std::string withdraw(double amount);
            // Checks if there is sufficient funds.
            // If not, returns error message.
            // If so, reduces balance by withdrawal 
            // amount.
        void postInterest();
            // Multiplies balance times interest
            // rate and adds the resutling amount
            // to the balance.
        void print();
            // Prints account number, balace, 
            // and interestRate.
        SavingsAccount(int acctNum = 0, double initialDeposit = 0, double intRate = 0);
            // Constructor.  Intitializes account
            // number, initial deposit, and interest
            // rate.
    private:
        double interestRate;
};

#endif