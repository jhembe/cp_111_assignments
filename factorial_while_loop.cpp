#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int limit {}, i {0} ,sum {},factorial {1};

    cout<<"This program calculates n! and the sum of the integers "
        <<" up to n for values 1 to limit.\n";
    cout<<"What upper limit would you like ? : ";
    cin>>limit;

    // lets output the column heading
    cout<<setw(8)<<"Integer"<<setw(8)<<"sum"<<setw(20)<<"factorial"<<endl; 

    // now for the logic of the program we going to use the while loop for this example
    while(++i <= limit){
        sum += i;
        factorial *= i;

        cout<<setw(8)<<i<<setw(8)<<sum<<setw(20)<<factorial<<endl;
    }
    
    return 0;
}