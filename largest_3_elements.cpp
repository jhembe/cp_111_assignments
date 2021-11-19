#include<iostream>
using namespace std;

int main(){

    // lets make an array of 3 numbers, mixed sizes
    int array[6] = {87,90,107,54,23,78};

    //let's begin the for loop logic
    for(int i {0}; i<= 5;i++){
        // let's perform some selection within the loop
        if(array[0] < array[i]){
            array[0] = array[i];
        }
    }

    cout<<array[0]<<" "<<array[1]<<" "<<array[2]<<" "<<endl;
    // end of the loop

    //start of another loop
    // cout<<"The three largest numbers are : ";
    // for(int j {0}; j<=2;j++){                   NOTE: // This loop is responsible for printing out the 3 largest number
    //     cout<<array[j]<<" , ";
    // }

    return 0;
}