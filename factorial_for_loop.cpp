#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    int size {6};
    int height[] {20,65,78,65,57,64};

    int limit {};
    cout<<"This program calculates n! and the sum of the integers"
        <<" up to n for values 1 to limit.\n";
    cout<<"What upper limit for n would you like ? : ";
    cin >> limit;

    // creating the output column heading 
    cout<<setw(8)<<"Integer"<<setw(8)<<"sum"<<setw(20)<<"factorial"<<endl; // this turned out succesful on the first test-out

    // let's begin the for loop of the first logic of the program
    for(int n {1},sum {},factorial {1}; n <= limit; ++n){
        sum += n;
        factorial *= n;
        
        cout<<setw(8)<<n<<setw(8)<<sum<<setw(20)<<factorial<<endl;
    }
}