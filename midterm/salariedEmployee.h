/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a derived class header file
*/

#ifndef salariedEmployee_h
#define salariedEmployee_h

#include "employee.h"

#include <iostream>

using namespace std;

class SalariedEmployee: public Employee
{
    friend ostream& operator<< (ostream& osObj, SalariedEmployee& thisEmp);
        // Overloads the output stream insertion operator.

    public:
        void setSalary(double& thisSalary);
            // Sets the salary.
        
        double getSalary() const;
            // Returns salary.

        double getTaxAmount() const;
            // Returns taxAmount.

        double getNetPay() const;
            // Returns netPay.

        SalariedEmployee calculatePay();
            // Calculates weekly pay.
            // Divides salary by 52,
            // Multiplies by payroll tax rate,
            // Subtracts tax amount to get
            // net pay.

        SalariedEmployee(string thisName = "", double thisSalary = 0, double payrollTax = 0);
            // Constructor with default values.

    private:
        double salary;
        double taxAmount;
        double taxRate;
        double netPay;
};

#endif