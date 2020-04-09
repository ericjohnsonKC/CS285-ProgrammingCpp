/*  Author: Eric Johnson
    Date: 4/8/2020
    Grantham University 
    CS285 Advanced Programming in C++
    Week 4 Midterm Project

    This is a base class implementation file.
*/

#include "employee.h"

#include <iostream>

using namespace std;


void Employee::setName(string& thisName)
{
    name = thisName;
}
 
void Employee::setDepartment(string& thisDept)
{
    department = thisDept;
}

void Employee::setTitle(string& thisTitle)
{
    title = thisTitle;
}
    
string Employee::getName() const
{
    return name;
}
    
string Employee::getDepartment() const
{
    return department;
}    

string Employee::getTitle() const
{
    return title;
}
    

Employee::Employee(string thisName, string thisDept, string thisTitle)
{
    name = thisName;
    department = thisDept;
    title = thisTitle;
}
