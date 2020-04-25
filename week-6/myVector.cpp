/*  Author: Eric Johnson
    Date: 4/24/2020
    Grantham University
    CS285 Advanced Programming in C++
    Week 6 Assignment

    This week's assignment is on
    sorting and searching algorithms
    and the vector templated data type.

    This file is a header and implementation
    file for a custom myVector class inherited
    from the standard vector class.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;



// Class myVector header ##################

template <typename T>
class myVector: public vector<T>{

    public:
        int seqSearch(T searchItem);
        int binarySearch(T searchItem);
        void bubbleSort();
        void insertionSort();
};


//  Class myVector implementation ##########

template <typename T>
int myVector<T>::seqSearch(T searchItem){
    // Implement seq search
}

template <typename T>
void myVector<T>::bubbleSort(){
    // Implement bubble sort
}

template <typename T>
void myVector<T>::insertionSort(){
    // Implement insertion sort
}

template <typename T>
int myVector<T>::binarySearch(T searchItem){
    // Implement binary search
}

