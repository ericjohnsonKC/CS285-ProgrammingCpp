/*  Author: Eric Johnson, Date: 3/16/2020
    Grantham University, Student ID: 150737
    CS285 Programming in C++ Week 1 assignment 
*/

#include <iostream>
#include "CS285_johnsonE_wk1.h"
using namespace std;

int main()
{
    //  Create an array of 10 BankAccount objects (using default constructor)
    BankAccount accounts[10];

    // Hardcode account data for all ten account objects
    accounts[0].accountHolderName = "Eric Johnson";
    accounts[0].accountType = "checking";
    accounts[0].balance = 100.00;
    accounts[0].interestRate = .01;

    accounts[1].accountHolderName = "Walter Payton";
    accounts[1].accountType = "savings";
    accounts[1].balance = 200.00;
    accounts[1].interestRate = .02;

    accounts[2].accountHolderName = "Barry Sanders";
    accounts[2].accountType = "checking";
    accounts[2].balance = 300.00;
    accounts[2].interestRate = .03;

    accounts[3].accountHolderName = "Troy Polamaulu";
    accounts[3].accountType = "savings";
    accounts[3].balance = 400.00;
    accounts[3].interestRate = .04;


    accounts[4].accountHolderName = "Reggie White";
    accounts[4].accountType = "checking";
    accounts[4].balance = 500.00;
    accounts[4].interestRate = .05;

    accounts[5].accountHolderName = "Deion Sanders";
    accounts[5].accountType = "savings";
    accounts[5].balance = 600.00;
    accounts[5].interestRate = .06;

    accounts[6].accountHolderName = "Ronnie Lot";
    accounts[6].accountType = "checking";
    accounts[6].balance = 700.00;
    accounts[6].interestRate = .07;

    accounts[7].accountHolderName = "Warren Sapp";
    accounts[7].accountType = "savings";
    accounts[7].balance = 800.00;
    accounts[7].interestRate = .08;

    accounts[8].accountHolderName = "Michael Vick";
    accounts[8].accountType = "checking";
    accounts[8].balance = 900.00;
    accounts[8].interestRate = .09;

    accounts[9].accountHolderName = "Morten Andersen";
    accounts[9].accountType = "savings";
    accounts[9].balance = 1000.00;
    accounts[9].interestRate = .10;

    //  Print account info for all ten accounts
    for (int i=0; i < 10; i++)
    {
        accounts[i].print();
    }
}