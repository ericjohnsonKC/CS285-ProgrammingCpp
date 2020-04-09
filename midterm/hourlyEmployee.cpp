/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a derived class implementation file.
*/

#include "hourlyEmployee.h"

#include <iostream>

using namespace std;


ostream& operator<< (ostream& osObj, HourlyEmployee thisHrlyEmp)
{
    osObj << "Name: " << thisHrlyEmp.getName() << endl;
    osObj << "Hours worked: " << thisHrlyEmp.hoursWorked << endl;
    osObj << "Hourly rate: " << thisHrlyEmp.hourlyRate << endl;
    osObj << "Overtime pay: " << thisHrlyEmp.overtimePay << endl;
    osObj << "Regular (gross) pay: " << thisHrlyEmp.regularPay << endl;
    osObj << "Tax amount: " << thisHrlyEmp.taxAmount << endl;
    osObj << "Net pay: " << thisHrlyEmp.netPay << endl;

    return osObj;
}

void HourlyEmployee::setHoursWorked(double& hrsWrkd)
{
    hoursWorked = hrsWrkd;
}

void HourlyEmployee::setHourlyRate(double& hrlyRate)
{
    hourlyRate = hrlyRate; 
}

double HourlyEmployee::getHoursWorked() const
{
    return hoursWorked;
}

double HourlyEmployee::getHourlyRate() const
{
    return hourlyRate;
}

double HourlyEmployee::getOvertimePay() const
{
    return overtimePay;
}

double HourlyEmployee::getRegularPay() const
{
    return regularPay;
}

double HourlyEmployee::getTaxAmount() const
{
    return taxAmount;
}

double HourlyEmployee::getNetPay() const
{
    return netPay;
}


HourlyEmployee HourlyEmployee::calculatePay()
{
    if (hoursWorked <= 40)
        regularPay = hoursWorked * hourlyRate;
    else
    {
        overtimePay = (hoursWorked - 40) * (1.5 * hourlyRate);
        regularPay = (hourlyRate * 40) + overtimePay;    
    }

    taxAmount = regularPay * taxRate;
    netPay = regularPay - taxAmount;

    return *this;    
}

HourlyEmployee::HourlyEmployee(string thisName, double hrsWrkd, double hrlyRate, double tax)
    : Employee(thisName)
{
    hoursWorked = hrsWrkd;
    hourlyRate = hrlyRate;
    taxRate = tax;
    overtimePay = regularPay = taxAmount = netPay = 0;
}