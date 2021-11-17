#include<iostream>
#include<cctype>
#include<iomanip>

using namespace std;

int main(){

    // now here is the deal i need to output the header first.. showing the building structure of my output
    // now we need a header of character, hexadeciamls and decimals 
    cout<<setw(11)<<"Characters  "<<setw(13)<<"Hexadeciamals"<<setw(11)<<"Decimals"<<endl;
    cout<<uppercase; // This will basically output uppercase hexadecimal digits

    // using a while loop 
    char ch {};

    do
    {
        if(!isprint(ch)){ // if its a printable character -- now with the "!", it means if it's not printable
            continue;   // the continue statement means skipping up the itterations -- this case it goes to the cout session
        }
        cout<<setw(11)<<ch                          // ths one is responsible for printing out characters, the normal one
            <<hex<<setw(13)<<static_cast<int>(ch)   // this one is responsible for printing out hexadecimals
            <<dec<<setw(11)<<static_cast<int>(ch); // this line is responsible for printing out decimals
        cout<<endl;
    }
    while(ch++); 

    // NOTE page 149
}