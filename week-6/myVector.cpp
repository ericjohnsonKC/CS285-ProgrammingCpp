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



// Class myVector header...

template <typename T>
class myVector: public vector<T>{

    static bool isSorted;

    public:
        int seqSearch(T searchItem);
        int binarySearch(T searchItem);
        void bubbleSort();
        void insertionSort();
};


//  Class myVector implementation...

template <typename T>
int myVector<T>::seqSearch(T searchItem){
    int loc;
    bool found = false;

    loc = 0;
     
    while (loc < listLength && !found)
        if (list[loc] == searchItem)
            found = true;
        else
            loc++;
        if (found)
            return loc;
        else
            return -1;
}

template <typename T>
void myVector<T>::bubbleSort(){
    int temp;

    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
            if (list[index] > list[index + 1])
            {
                temp = list[index];
                list[index] = list[index + 1];
                list[index + 1] = temp;
            }
    }
}

template <typename T>
void myVector<T>::insertionSort(){
    // Implement insertion sort

// void insertionSort(int list[], int length);

// int main(){
//     int list[] = {20, 36, 24, 65, 78,
//                   45, 58, 90, 2, 15};
    
//     insertionSort(list, 10);

//     cout << "After sorting, the list "
//          << "elements are: " << endl;

//     for (int i = 0; i < 10; i++)
//         cout << list[i] << " " << endl;

//     return 0;
// }


}

template <typename T>
int myVector<T>::binarySearch(T searchItem){
    // Implement binary search

// int binarySearch (const int list[], int listLength, int searchItem)
// {
//     int first = 0;
//     int last = listLength - 1;
//     int mid;

//     bool found = false;

//     while (first <= last && !found)
//     {
//         mid = (first + last) / 2;

//         if (list[mid] == searchItem)
//             found = true;
//         else if (list[mid] > searchItem)
//             last = mid -1;
//         else
//             first = mid + 1;        
//     }

//     if (found)
//         return mid;
//     else
//         return -1;   
// }



}



//  Test program for the myVector class...

int main(){
    
    // Define test vector(s)
    myVector<string> nameList;

    //  Add values to the vector(s)

    //  Test sort methods

    //  Test search methods

    //  Print sorted vector using range
    //  based for loop
        //  Define new test vector(s)

        //  Define an iterator to each of
        //  the above vector containers

        //  Add values to the vector(s)
        //  Test the STL sort method
        //  Test the STL binary_search algorithm
        //  Print the resulting vector(s) using 
        //  an iterator
    
    return 0;
}