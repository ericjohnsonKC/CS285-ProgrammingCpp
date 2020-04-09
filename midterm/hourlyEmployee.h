/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a derived class header file
*/

#ifndef hourlyEmployee_h
#define hourlyEmployee_h

#include "employee.h"

#include <iostream>

using namespace std;


class HourlyEmployee: public Employee
{
    friend ostream& operator<< (ostream& osObj, HourlyEmployee thisHrlyEmp);
        // Overloads the output stream insertion operator.
    
    public:

        void setHoursWorked(double& hrsWrkd);
            // Sets value of hoursWorked.

        void setHourlyRate(double& hrlyRate);
            // Sets value of hourlyRate.
        
        double getHoursWorked() const;
            // Returns hoursWorked.

        double getHourlyRate() const;
            // Returns hourlyRate.
        
        double getOvertimePay() const;
            // Returns overtimePay.

        double getRegularPay() const;
            // Returns regularPay.

        double getTaxAmount() const;
            // Returns taxAmount.

        double getNetPay() const;
            // Returns netPay.

        HourlyEmployee calculatePay();
            // Calculates pay.
            // Hourly rate * hours worked.
            // Overtime is 1.5 * hourly rate
            // for hours worked over 40.

        HourlyEmployee(string name = "", double hrsWrkd = 0, double hrlyRate = 0, double payrollTax = 0);
            // Constructor with default values.


    private:

        double hoursWorked;
        double hourlyRate;
        double overtimePay;
        double regularPay;
        double taxAmount;
        double netPay;
        double taxRate;
    
};

#endif
