/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a derived class implementation file.
*/

#include "salariedEmployee.h"

#include <iostream>

using namespace std;

ostream& operator<< (ostream& osObj, SalariedEmployee& thisEmp)
{
    osObj << "Name: " << thisEmp.getName() << endl;
    osObj << "Salary: " << thisEmp.salary << endl;
    osObj << "Weekly pay (gross): " << (thisEmp.salary / 52) << endl; 
    osObj << "Tax amount: " << thisEmp.taxAmount << endl;
    osObj << "Net pay: " << thisEmp.netPay << endl;

    return osObj;
}

void SalariedEmployee::setSalary(double& thisSalary)
{
    salary = thisSalary;
}
        
double SalariedEmployee::getSalary() const
{
    return salary;
}

double SalariedEmployee::getTaxAmount() const
{
    return taxAmount;
}

double SalariedEmployee::getNetPay() const
{
    return netPay;
}

SalariedEmployee SalariedEmployee::calculatePay()
{
    double weeklyPay; 
    weeklyPay = (salary / 52);
    
    taxAmount = weeklyPay * taxRate;
    netPay = weeklyPay - taxAmount;
    
    return *this;
}

SalariedEmployee::SalariedEmployee(string thisName, double thisSalary, double payrollTax)
    : Employee (thisName)
{
    salary = thisSalary;
    taxRate = payrollTax;
}