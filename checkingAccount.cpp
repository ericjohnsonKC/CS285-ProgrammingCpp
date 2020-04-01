/*  Author: Eric Johnson, Date: 3/31/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 3 assignment 

    This is the class implementation file for 
    an assignment on polymorphism.  It 
    contains member function definitions for 
    the CheckingAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include "checkingAccount.h"

using namespace std;



double CheckingAccount::getMinimumBalance()
{
    return minimumBalance;
}
    
void CheckingAccount::setMinimumBalance(double minBal)
{
    minimumBalance = minBal;
}

double CheckingAccount::getInterestRate()
{
    return interestRate;
}
   
void CheckingAccount::setInterestRate(double intRate)
{
    interestRate = intRate;
}
    
double CheckingAccount::getServiceCharge()
{
    return serviceCharge;
}
   
void CheckingAccount::setServiceCharge(double svcChg)
{
    serviceCharge = svcChg;
}
    
void CheckingAccount::postInterest()
{
    double interest = getBalance() * interestRate;
    deposit(interest);
}
    
void CheckingAccount::writeCheck(double amount)
{
    withdraw(amount);
}
     
void CheckingAccount::withdraw(double amount)
{
    if (getBalance() < amount)
        cout << "Error: Insufficient funds.";
    else 
    {    
        if ((getBalance() - amount) < minimumBalance)
        {  
            if ((getBalance() - amount - serviceCharge) < 0)
            {    
                cout << "Error: Below minimum balance, service charge would apply, insufficient funds.";
            }
            else
                BankAccount::withdraw(amount + serviceCharge);
        }
        else
            BankAccount::withdraw(amount);          
    }
}
    
void CheckingAccount::print()
{
    BankAccount::print();
    cout << "\nInterest Rate: " << interestRate << endl;
}

void CheckingAccount::createMonthlyStatement()
{
    postInterest();
    BankAccount::withdraw(fee);
}

CheckingAccount::CheckingAccount(int acctNum, string acctOwnerName, double initialDeposit, double intRate, double minBal, double svcChg, double monthlyFee)
    : BankAccount(acctNum, acctOwnerName, initialDeposit)
{
    setInterestRate(intRate);
    setMinimumBalance(minBal);
    setServiceCharge(svcChg);
    fee = monthlyFee;
}
