#include<iostream>
using namespace std;

int main(){
    int x;
    int y;
    int z;

    cout<<"Ingiza x"<<endl;
    cin>>x;
    cout<<"Ingiza y "<<endl;
    cin>>y;

    if(x>y){
        z = x/y;
    }
    else{
        z = y/x;
    }
    
    cout<<"Jibu ni : "<<z<<endl;
    
    return 0;
}
