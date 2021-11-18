#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    // now we want a maximum number of characters or vowels and consonants to be entered
    // we need a constant number of characters
    const int max_length {100}; // here we set a constant lenght on how much characters will want to use
    char text[max_length] {}; // this is the array where we'll be keeping out chars and stuffs

    cout<<"Enter a line of characters/Text : "<<endl;
    //reading the characters including the spaces
    cin.getline(text,max_length);
    cout<<"You entered : \n"<<text<<endl;

    // now we declare some more variables
    size_t vowels {};
    size_t consonants {};

    // now let's do some for loops
    for(int i {}; text[i] != '\0';++i){
        if(isalpha(text[i])){
            switch(tolower(text[i])){
                // droping the switch case conditions on
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels;
                    break;

                default:
                    ++consonants;
            }
        }
    }

    cout<<"Your input contained "<<vowels <<" vowels and "
        <<consonants<<" consonants "<<endl;
}