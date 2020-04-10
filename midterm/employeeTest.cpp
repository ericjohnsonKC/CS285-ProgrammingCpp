/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a class test program.
*/

#include "hourlyEmployee.h"
#include "salariedEmployee.h"

#include <iostream>

using namespace std;


int main ()
{
    double payrollTaxRate = .3; // Sets tax rate to 30%
    int numberOfHourlyEmployees = 0;
    double totalNetPayroll = 0;


    HourlyEmployee bob("Bob", 37.5, 21, payrollTaxRate);
    bob.calculatePay();
    cout << bob << endl;
    numberOfHourlyEmployees++;
    totalNetPayroll += bob.getNetPay();

    HourlyEmployee susan("Susan", 40, 17, payrollTaxRate);
    susan.calculatePay();
    cout << susan << endl;
    numberOfHourlyEmployees++;
    totalNetPayroll += susan.getNetPay();

    HourlyEmployee maurice("Maurice", 47, 19, payrollTaxRate);
    maurice.calculatePay();
    cout << maurice << endl;
    numberOfHourlyEmployees++;
    totalNetPayroll += maurice.getNetPay();
    cout << "-----------------------------------------" << endl;
    cout << "Number of hourly employees: " << numberOfHourlyEmployees << endl;
    cout << "Average net pay: " << totalNetPayroll/numberOfHourlyEmployees << endl;
    cout << "-----------------------------------------" << endl << endl;

    SalariedEmployee linda("Linda", 88027, payrollTaxRate);
    linda.calculatePay();
    cout << linda << endl;

    SalariedEmployee orville("Orville", 76543, payrollTaxRate);
    orville.calculatePay();
    cout << orville << endl;

    SalariedEmployee poirot("Poirot", 99834, payrollTaxRate);
    poirot.calculatePay();
    cout << poirot << endl;

    poirot.setDepartment("Capers and Mischief");
    poirot.setTitle("Detective");

    cout << "Poirot department: " << poirot.getDepartment() << endl;
    cout << "Poirot title: " << poirot.getTitle() << endl;

    return 0;
}