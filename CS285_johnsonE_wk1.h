/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    public:
        void deposit();
        void withdraw();
        double getInterest() const;
        void print() const;
        int getAccountNumber() const;
        string getAccountType() const;
        double getBalance() const;
        double getInterestRate() const;
        BankAccount(string, string, double, double);
        BankAccount();
        
    private:
        string accountHolderName;
        int accountNumber;
        string accountType;
        double balance;
        double interestRate;
        static int accountNumber;

        void updateBalance(double);

};