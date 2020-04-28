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
#include <algorithm>
#include <iterator>

using namespace std;



// Class myVector header...
template <typename T>
class myVector: public vector<T>{

    public:
        
        static bool isSorted;

        int seqSearch(T searchItem);
        int binarySearch(T searchItem);
        void bubbleSort();
        void insertionSort();
};

//----------------------------------------------------------------

// Test program for the myVector class...
int main(){
    
    // Define test vector(s)
    cout << "defining two test vectors...\n";
    myVector<string> nameList_1;
    myVector<string> nameList_2;
    cout << endl;

    //myVector<bool>::isSorted = false;

    //  Add values to the vector(s)
    cout << "adding values to vector #1...\n";
    nameList_1.push_back("Ruth");
    nameList_1.push_back("Gehrig");
    nameList_1.push_back("Mantle");
    nameList_1.push_back("Rivera");
    nameList_1.push_back("Jeter");
    nameList_1.push_back("Rizzuto");
    nameList_1.push_back("Berra");
    cout << endl;

    //  Test sort methods...

    //  Testing bubble sort method...
    cout << "printing vector #1 before sorting with range-based for loop...\n";
    for (auto name : nameList_1)
    {
        cout << name << " ";
    }
    cout << endl << endl;

    cout << "sorting vector #1 with custom bubble sort member function...\n";
    nameList_1.bubbleSort();
    cout << endl;

    //  Print sorted vector using range
    //  based for loop...
    cout << "printing vector #1 after sorting with range-based for loop ...\n";
    for (auto name : nameList_1)
    {
        cout << name << " ";
    }
    cout << endl << endl;
    
    cout << "adding values to vector #2...\n";
    nameList_2.push_back("Ryan");
    nameList_2.push_back("Koufax");
    nameList_2.push_back("Martinez");
    nameList_2.push_back("Maddux");
    nameList_2.push_back("Johnson");
    nameList_2.push_back("Feller");
    nameList_2.push_back("Kershaw");
    cout << endl;

    //  Test insertion sort method...
    cout << "printing vector #2 before sorting with range-based for loop...\n";
    for (auto name : nameList_2)
    {
        cout << name << " ";
    }
    cout << endl << endl;
    
    cout << "sorting vector #2 with custom insertion sort member function...\n";
    nameList_2.insertionSort();
    cout << endl;

    //  Print sorted vector using range
    //  based for loop...
    cout << "printing vector #2 after sorting with range-based for loop..\n";
    for (auto name : nameList_2)
    {
        cout << name << " ";
    }
    cout << endl << endl;

    // cout << "setting the sorted flag to true...\n";
    // myVector<bool>::isSorted = true;
    // cout << endl;

    //  Test search methods
    cout << "searching vector #1...\n";
    cout << nameList_1.seqSearch("Bonds") << endl;
    cout << endl;
    cout << "searching vector #1...\n";
    cout << nameList_1.seqSearch("Jeter") << endl;
    cout << endl;

    cout << "searching vector #2...\n";
    cout << nameList_2.binarySearch("Valenzuela") << endl;
    cout << endl;
    cout << "searching vector #2...\n";
    cout << nameList_2.binarySearch("Ryan") << endl;
    cout << endl;

    //  Print sorted vector using range
    //  based for loop...

    //  Define new test vector(s)...
    cout << "defining two more vectors...\n";
    myVector<string> nameList_3;
    myVector<string> nameList_4;
    cout << endl;

    cout << "adding values to vector #3...\n";
    nameList_3.push_back("taco");
    nameList_3.push_back("burrito");
    nameList_3.push_back("nacho");
    nameList_3.push_back("fajita");
    nameList_3.push_back("quesadilla");
    nameList_3.push_back("enchilada");
    nameList_3.push_back("chorizo");
    cout << endl;

    cout << "adding values to vector #4...\n";
    nameList_4.push_back("spaghetti");
    nameList_4.push_back("fettucini");
    nameList_4.push_back("linguini");
    nameList_4.push_back("angel_hair");
    nameList_4.push_back("penne");
    nameList_4.push_back("rigatoni");
    nameList_4.push_back("ravioli");
    cout << endl;
        
    //  Define an iterator to each of
    //  the above vector containers...
    cout << "defining iterators...\n";
    myVector<string>::iterator strIter;
    myVector<int>::iterator intIter;
    cout << endl;

    cout << "printing vector #3 before adding values...\n";
    for (strIter = nameList_3.begin(); strIter < nameList_3.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl << endl;

    cout << "printing vector #4 before adding values...\n";
    for (strIter = nameList_4.begin(); strIter < nameList_4.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl << endl;
    
    //  Add values to the vector(s)...
    cout << "adding values to the new vectors...\n";
    nameList_3.push_back("carne_asada");
    nameList_4.push_back("pasta_faziole");
    cout << endl;
    
    cout << "printing vector #3 after adding values...\n";
    for (strIter = nameList_3.begin(); strIter < nameList_3.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl << endl;

    cout << "printing vector #4 after adding values...\n";
    for (strIter = nameList_4.begin(); strIter < nameList_4.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl << endl;
        
    // //  Test the STL sort method
    cout << "testing the STL sort method...\n" << endl;

    cout << "sorting vector #3 and vector_4 with STL sort()...\n";
    sort(nameList_3.begin(), nameList_3.end());
    sort(nameList_4.begin(), nameList_4.end());
    cout << endl;

    //  Test the STL binary_search algorithm
    cout << "testing the STL binary_search algorithm...\n";
    binary_search(nameList_4.begin(), nameList_4.end(), "calzone");
    binary_search(nameList_4.begin(), nameList_4.end(), "ravioli");
    cout << endl;

    //  Print the resulting vector(s) using 
    //  an iterator
    cout << "printing the resulting vectors using an iterator...\n" << endl;
    cout << "vector #3 after sorting and searching (using an iterator): " << endl;
    for (strIter = nameList_3.begin(); strIter < nameList_3.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl << endl;

    cout << "vector #4 after sorting and searching (using an iterator): " << endl;
    for (strIter = nameList_4.begin(); strIter < nameList_4.end(); strIter++)
    {
        cout << *strIter << " ";
    }
    cout << endl;

    return 0;
}

//----------------------------------------------------------------------------

//  Class myVector implementation...
template <typename T>
int myVector<T>::seqSearch(T searchItem){
    int loc;
    bool found = false;

    loc = 0;
     
    while (loc < this->size() && !found)
        if ((*this)[loc] == searchItem)
            found = true;
        else
            loc++;
        if (found)
            return loc;
        else
            return -1;
}


template <typename T>
int myVector<T>::binarySearch(T searchItem){
    
    int first = 0;
    int last = this->size() - 1;
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if ((*this)[mid] == searchItem)
            found = true;
        else if ((*this)[mid] > searchItem)
            last = mid -1;
        else
            first = mid + 1;        
    }

    if (found)
        return mid;
    else
        return -1;   
}


template <typename T>
void myVector<T>::bubbleSort(){
    T temp;

    for (int iteration = 1; iteration < this->size(); iteration++)
    {
        for (int index = 0; index < this->size() - iteration; index++)
            if ((*this)[index] > (*this)[index + 1])
            {
                temp = (*this)[index];
                (*this)[index] = (*this)[index + 1];
                (*this)[index + 1] = temp;
            }
    }
}

template <typename T>
void myVector<T>::insertionSort(){

    int firstOutOfOrder, location;
    T temp;

    for (firstOutOfOrder = 1; firstOutOfOrder < this->size() - 1; firstOutOfOrder++)
        if ((*this)[firstOutOfOrder] < (*this)[firstOutOfOrder - 1])
        {
            temp = (*this)[firstOutOfOrder];
            location = firstOutOfOrder;

            do{
                (*this)[location] = (*this)[location - 1];
                location--;
            }
            while (location > 0 && (*this)[location - 1] > temp);

            (*this)[location] = temp;
        }
}




