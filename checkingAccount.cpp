/*  Author: Eric Johnson, Date: 3/24/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 2 assignment 

    This is the class implementation file for 
    an assignment on inheritance.  It 
    contains member function definitions for 
    the CheckingAccount class members prototyped 
    in the header file.
*/

#include <iostream>
#include "checkingAccount.h"

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
    updateBalance(interest);
}
    
void CheckingAccount::writeCheck(double amount)
{
    withdraw(amount);
}
     
std::string CheckingAccount::withdraw(double amount)
{
    double bal = getBalance();
    if (amount > bal)
        return "Error: Withdrawal amount exceeds balance. Insufficient funds.";
    if ((bal - amount) < minimumBalance)
    {
        if ((bal - amount - serviceCharge) < 0)
            return "Error: Withdrawal requires service charge for exceeding minimum balance.  Insufficient funds.";
        amount *= -1;
        updateBalance(amount - serviceCharge);
    }
    amount *= -1;
    updateBalance(amount);
    return "Withdrawal successful.";
}
    
void CheckingAccount::print()
{
    std::cout << std::endl;
    std::cout << "Account Number: " << getAccountNumber() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
    std::cout << "Interest Rate: " << interestRate << std::endl;
    std::cout << "Minimum Balance: " << minimumBalance << std::endl;
    std::cout << "Service Charge: " << serviceCharge << std::endl;
}

CheckingAccount::CheckingAccount(int acctNum, double initialDeposit, double intRate, double minBal, double svcChg)
    : BankAccount(acctNum, initialDeposit)
{
    setInterestRate(intRate);
    setMinimumBalance(minBal);
    setServiceCharge(svcChg);
}
