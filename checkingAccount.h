/*  Author: Eric Johnson, Date: 3/31/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 3 assignment 

    This header file contains the class definition
    for an assignment on polymorphism.  The 
    assignment requires seven source code files - 
    this header, two other headers, three class 
    implementation files, and a main test file.
*/

#ifndef CheckingAccount_h
#define CheckingAccount_h
#include "bankAccount.h"

using namespace std;



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
        
        void setInterestRate(double intRate);
            // Sets the value of the variable
            // interestRate.
        
        double getServiceCharge();
            // Returns the service charge.
        
        void setServiceCharge(double svcChg);
            // Sets the value of the variable
            // serviceCharge.
        
        void postInterest();
            // Multiplies interest rate times
            // the current balance, then adds
            // resulting amount of interest 
            // earned to the balance.
        
        void writeCheck(double amount);
            // Calls the withdraw function, 
            // reducing account balance by
            // the check/withdrawal amount.
        
        void withdraw(double amount);
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
        
        void createMonthlyStatement();
            // Posts the interest and deducts
            // the monthly fee from the balance.
        
        CheckingAccount(int acctNum = 0, string acctOwnerName = "", double initialDeposit = 0, double intRate = 0, double minBal = 0, double svcChg = 0, double monthlyFee = 0);
            // Constructor.  Sets accountNumber, 
            // accout owner's name, balance
            // (by making an initial deposit), interestRate,
            // minimumBalance, serviceCharge, and monthly
            // fee.
    
    private:
        double interestRate;
        double minimumBalance;
        double serviceCharge;
        double fee;

};

#endif