#include<iostream>
#include<cctype>
using namespace std;

int main(){
    
    double temp {0},total {}, count {};
    char reply;
    // we want to test the do-while loop program
    // we'll do it under the scenarial of trying to ask the user to enter the temperature in the first place
    // and then ask them again to enter the temperature when it's okay to 

    do{
        cout<<"Enter a temperature reading : ";
        cin>>temp;

        total += temp;
        ++count;

        cout<<"Do you want to enter another temperature readings : ";
        cin>>reply;
    }
    while(tolower(reply) == 'y');

    cout<<"The average temperature is : "<<total/count <<endl;
}