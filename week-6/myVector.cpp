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



//  Test program for the myVector class...
int main(){
    
    // Define test vector(s)
    myVector<string> nameList_1;
    myVector<string> nameList_2;

    //  Add values to the vector(s)
    nameList_1.push_back("Ruth", "Gehrig", "Mantle", "Rivera", "Jeter", "Rizzuto", "Berra");

    //  Test sort methods
    nameList_1.bubbleSort();
    
    nameList_2.push_back("Ryan", "Koufax", "Martinez", "Maddux", "Johnson", "Feller", "Kershaw");

    nameList_2.insertionSort();

    myVector<string>::isSorted = true;

    //  Test search methods
    nameList_1.seqSearch("Bonds");
    nameList_1.seqSearch("Ramirez");

    nameList_2.binarySearch("Valenzuela");
    nameList_2.binarySearch("Scherzer");

    //  Print sorted vector using range
    //  based for loop...
    for (auto name : nameList_1)
    {
        cout << "Name list #1: " << endl;
        cout << name << " ";
    }

    for (auto name : nameList_2)
    {
        cout << "Name list #2 : " << endl;
        cout << name << " ";
    }

    //  Define new test vector(s)...
    myVector<string> nameList_3;
    myVector<string> nameList_4;

    nameList_3.push_back("taco", "burrito", "nacho", "fajita", "quesadilla", "enchilada", "chorizo");
    nameList_4.push_back("spaghetti", "fettucini", "linguini", "angel hair", "penne", "rigatoni", "ravioli");
        
    //  Define an iterator to each of
    //  the above vector containers...
    myVector<string>::iterator iter;

    
    //  Add values to the vector(s)...
    nameList_3.push_back("carne asada");
    nameList_4.push_back("pasta faziole");
        
    //  Test the STL sort method
    sort(nameList_3.begin(), nameList_3.end());


    //  Test the STL binary_search algorithm
    binary_search(nameList_4.begin(), nameList_4.end(), "calzone");
    binary_search(nameList_4.begin(), nameList_4.end(), "ravioli");

    //  Print the resulting vector(s) using 
    //  an iterator
    for (auto iter : nameList_3)
    {
        cout << "Name list #3 after sorting: \n";
        cout << iter << endl;
    }

    for (auto iter : nameList_4)
    {
        cout << "Name list #4 after sorting: \n";
        cout << iter << endl;
    }
    
    return 0;
}



//  Class myVector implementation...
template <typename T>
int myVector<T>::seqSearch(T searchItem){
    int loc;
    bool found = false;

    loc = 0;
     
    while (loc < this->size() && !found)
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
int myVector<T>::binarySearch(T searchItem){
    
    int first = 0;
    int last = this[this->size - 1];
    int mid;

    bool found = false;

    while (first <= last && !found)
    {
        mid = (first + last) / 2;

        if (this[mid] == searchItem)
            found = true;
        else if (this[mid] > searchItem)
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
    int temp;

    for (int iteration = 1; iteration < length; iteration++)
    {
        for (int index = 0; index < length - iteration; index++)
            if (this[index] > this[index + 1])
            {
                temp = this[index];
                this[index] = this[index + 1];
                this[index + 1] = temp;
            }
    }
}

template <typename T>
void myVector<T>::insertionSort(){

    int firstOutOfOrder, location;
    int temp;

    for (firstOutOfOrder = 1; firstOutOfOrder < this->size - 1; firstOutOfOrder++)
        if (this[firstOutOfOrder] < this[firstOutOfOrder - 1])
        {
            temp = this[firstOutOfOrder];
            location = firstOutOfOrder;

            do{
                this[location] = this[location - 1];
                location--;
            }
            while (location > 0 && this[location - 1] > temp);

            this[location] = temp;
        }
}




