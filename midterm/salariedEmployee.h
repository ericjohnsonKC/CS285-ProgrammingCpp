/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a derived class header file
*/

// Create a salariedEmployee class (which inherits from 
//     the Employee class) which hold the annual salary of 
//     the employee. To define the class, include the 
//     appropriate data members, member functions, 
//     constructors, and access modifiers. Figure weekly pay 
//     by dividing the annual salary by 52. The output for 
//     the salaried employee should display the name, gross 
//     pay, tax amount (compute at 30%), and net pay.

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