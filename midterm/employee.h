/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a base class header file
*/

#ifndef employee_h
#define employee_h

#include <iostream>

using namespace std;

class Employee
{
    public:
        void setName(string& thisName);
            // Sets the name variable
        
        void setDepartment(string& thisDept);
            // Sets the department variable

        void setTitle(string& thisTitle);
            // Sets the title variable

        string getName() const;
            // Returns name variable
        
        string getDepartment() const;
            // Returns department variable

        string getTitle() const;
            // Returns title variable

        Employee(string thisName = "", string thisDept = "", string thisTitle = "");
            // Constructor with default values

    private:
        string name;
        string department;
        string title;
};

#endif