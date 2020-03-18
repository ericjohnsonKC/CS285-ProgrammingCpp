/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 
*/

#include <iostream>
#include <string>

class BankAccount
{
    public:
        void deposit();
        void withdraw();
        double getInterest();
        void print() const;
        int getAccountNumber() const;
        std::string getAccountType() const;
        double getBalance() const;
        double getInterestRate() const;
        static int accountNumberGenerator;
        BankAccount(std::string, std::string, double, double, int);
        BankAccount();
        
    private:
        std::string accountHolderName;
        int accountNumber;
        std::string accountType;
        double balance;
        double interestRate;
        

        void updateBalance(double);

};