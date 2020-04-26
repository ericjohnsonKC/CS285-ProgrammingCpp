#   Sorting and Searching with Vectors

Create your own vector class which will test algorithms from Chapter 16 and those from the STL (Appendix H).

Derive class myVector from vector.  myVector must implement the following methods:

    *   int seqSearch(T searchItem);

    *   int binarySearch(T searchItem);

    *   void bubbleSort();

    *   void insertionSort();

Create a test program to create some vectors and test your methods above.   Recall from your reading that binary search only works on a sorted list. Add a static member to the class to “remember” if the list is sorted ( i.e. binarySearch() should first sort the vector if it’s not sorted already).

Use the template below as a starter for your assignment.   All comments in green represent code which you need to implement.


*   Note that the template was not copied here, it was placed in the code file as a starter outline.


#   Useful notes:

this->size();     //length of vector from within myVector class

this->at(index);  //value at specified index of vector from within myVector class

The STL concepts are taken from Appendix H

Submission requirements:

Submit all files required to make this program run as required.    Your solution can be a single file.

Submit source code, a screenshot with a time stamp of code execution, and a text file of the code. All code should include comments.