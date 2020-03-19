/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 

    This header file contains the class definition
    for an assignment on data abstraction.  The 
    assignment requires three files - this header 
    file, an implementation file with member function
    definitions, and a separate main program file.
*/

#include <iostream>
#include <string>

class BankAccount
{
    public:
        void deposit();
        void withdraw();
        double getInterest();
        void print();
        int getAccountNumber();
        std::string getAccountHolderName();
        std::string getAccountType();
        double getBalance();
        double getInterestRate();
        static int accountNumberGenerator;
        BankAccount();
        
    private:
        std::string accountHolderName;
        int accountNumber;
        std::string accountType;
        double balance;
        double interestRate;
        

        void updateBalance(double);

};