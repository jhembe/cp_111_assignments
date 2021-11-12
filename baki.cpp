#include<iostream>
using namespace std;

int main(){

    int x;
    int y;
    
    cout<<"Ingiza x : "<<endl;
    cin>>x;

    cout<<"Ingiza y : "<<endl;
    cin>>y;

    if(x%y == 0){
        cout<<"Zinagawanyika bila baki"<<endl;
    }

    else{
        cout<<"Hazigawanyiki bila baki"<<endl;
    }

    return 0;
}