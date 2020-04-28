/*  This is a scratch file to tinker
    with a custom myVector class 
    derived from the vector class.
*/

#include<iostream>
#include<vector>
#include<iterator>

using namespace std;


template<typename T>
class myVector: public vector
{
    public:

        static bool isSorted = false;
};

int main()
{
    myVector<bool>::isSorted;

    return 0;
}





//===================================================================

// template<typename T>
// class myVector: public vector<T>
// {
//     public:
//         void useThis();

// };

// myVector<string>::iterator strPtr;
// myVector<int>::iterator intPtr;

// int main(){

//     myVector<string> vector_1;

//     vector_1.push_back("Ruth");
//     vector_1.push_back("Gehrig");
//     vector_1.push_back("Mantle");
//     vector_1.push_back("Rivera");
//     vector_1.push_back("Jeter");
//     vector_1.push_back("Rizzuto");
//     vector_1.push_back("Berra");


//     if (vector_1[0] < vector_1[1])
//         cout << "yes" << endl;
//     else
//     {
//         cout << "no"  << endl;
//     }

//     int i;
//     for (strPtr = vector_1.begin(); strPtr < vector_1.end(); strPtr++)
//     {
//         cout << *strPtr << ", ";
//     }
//     cout << endl;

//     vector_1.useThis();
    
//     return 0;
// }


// //  Class member function definitions...
// template<typename T>
// void myVector<T>::useThis()
// {
//     cout << this->size() << endl;
//     cout << (*this)[0];
//     cout << endl;
// }