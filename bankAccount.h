/*  Author: Eric Johnson, Date: 3/31/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 3 assignment 

    This header file contains the class definition
    for an assignment on polymorphism.  The 
    assignment requires seven source code files - 
    this header, two other headers, three class 
    implementation files, and a main test file.
*/

#ifndef BankAccount_h
#define BankAccount_h

using namespace std;

class BankAccount
{
    public:                 
        int getAccountNumber();
            // Returns the account number.
        
        double getBalance();
            // Returns the balance.
        
        string getName();
            // Returns acct owner name.
        
        void setName(string acctOwnerName);
            // Sets the name variable to 
            // acctOwnerName.
        
        void deposit(double amount);
            // Updates balance to reflect
            // deposit amount.
        
        virtual void withdraw(double amount);
            // Updates balance to reflect 
            // withdrawal amount.
        
        virtual void print();
            // Prints account number and 
            // balance.
        
        virtual void createMonthlyStatement() = 0;
            // Note that this is a pure virtual function.
        
        BankAccount(int acctNum = 0, string name = "", double initialDeposit = 0);
            // Constructor.  
    
    private:
       int accountNumber; // Holds account number
       string name;  // Account owner's name
       double balance; // Balance of the account.
};

#endif