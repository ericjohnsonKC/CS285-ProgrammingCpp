/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This header file contains the class definition
    for an assignment on class inheritance.  The 
    assignment requires seven source code files - 
    this header, two other headers, three class 
    implementation files, and a main test file.
*/

#ifndef BankAccount_h
#define BankAccount_h

class BankAccount
{
    public:         
        void setAccountNumber(int acctNum);
            // Sets the account number.
        int getAccountNumber();
            // Returns the account number.
        double getBalance();
            // Returns the balance.
        void withdraw(double amount);
            // Updates balance to reflect 
            // withdrawal amount.
        void deposit(double amount);
            // Updates balance to reflect
            // deposit amount.
        void print();
            // Prints account number and 
            // balance.
        BankAccount(int acctNum = 0, double initialDeposit = 0);
            // Constructor.  
    
    private:
       int accountNumber;
       double balance;
    
    protected:
        void updateBalance(double amount);
            // Updates the balance by adding
            // the amount to the previous 
            // balance.  For withdrawals, 
            // the argument expected is a 
            // negative number.
};

#endif