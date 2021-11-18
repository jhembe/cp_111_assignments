// A vector is a dynamic array
/*
NOTE Container in the C++ Standard Templete Library
NOTE An array that can grow and shrink in size at execution size at execution time
NOTE Provides similar sematics and syntax as arrays
NOTE Very efficient
NOTE Can provide bounds checking 
NOTE Can use lots of cool functions like sort,reverse,find and more
NOTE When we create C++ vectors, we're creating a C++ object

*/

#include<iostream>
#include<vector> // must include the vector library
using namespace std;

int main(){
    // ANCHOR Declaration of vectors 
    vector <char> vowels; //an empty vector with no elements
    vector <int> test_scores;

    vector <char> vowels (5);
    vector <char> test_scores (6);
//  vector <datatype> vector_name;

// another way to initialize vectors is
    vector <char> smt {'a','e','i','o','u'};
    vector <int> tst_score {100,68,34,56,34};
    vector <double> temperatures (365,80.0); // this means we're creating a vector of 365 elements and we're initializing 80.0 to all elements
    // NOTE vectors can be broadcasted as the above line 29 statement..
}