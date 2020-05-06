/*  Author: Eric Johnson
    Date: 5/5/2020
    Grantham University
    CS285 Advanced Programming in HTML
    Week 8 Assignment

    This assignment is on the stack data type.
*/

#include <iostream>

#include "stackType.cpp"

 

using namespace std;

  

int main()

{ 

stackType<int> stack1(50);

stackType<int> stack2(50);

 

stack1.initializeStack();

stack1.push(23);

stack1.push(45);

stack1.push(38);

 

stack2 = stack1; 

 

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

 

stack2.pop();

stack2.push(32);

 

cout << "**** After pop and push operations on stack2 ****" << endl;

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

 

stack2.push(11);

 

cout << "**** After another push operation on stack2 ****" << endl;

if (stack1 == stack2)

cout << "stack1 and stack2 are identical" << endl;

else

cout << "stack1 and stack2 are not identical" << endl;

return 0;

}