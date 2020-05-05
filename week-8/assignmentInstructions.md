# Week 8 Assignment

 

Use the stackADT class and stackType classes given to you in Ch. 18 and code supplied here to complete this assignment.

 
```C++
#include <iostream>

#include "myStack.h"

 

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
```
 

 

Modify the stack implementation such that it uses a vectors as the container instead of an array.

 

Overload the pure virtual function push such that it takes a vector as an argument which pushes multiple values onto the stack.  

 

Throw exceptions when:

 

·         An attempt is made to pop from an empty stack (display message)

·         An attempt is made to push onto a full stack (display message)

·         top() is called on an empty stack (display message).

·         A negative or zero value for stack size is passed to the constructor (In this case, when handling the error, automatically recall the constructor with a value of 100).

 

Using the STL queue container, add multiple stackType classes to a queue.   Demonstrate an ability to use STL queue methods such as front() and pop().

 

 

Useful notes:

 

Leverage the functions which are already given to you.

 

Submission requirements:

 

Submit all files required to make this program run as required.    Your solution can be a single file.

Submit source code, a screenshot with a time stamp of code execution, and a text file of the code. All code should include comments.

 