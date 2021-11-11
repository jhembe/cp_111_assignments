#include<iostream>
using namespace std;

int main(){
    int umri;

    cout<<"Ingiza umri wako "<<endl;
    cin>>umri;

    if(umri >= 18){
        cout<<"Mtu mzima"<<endl;
    }
    else{
        cout<<"Bado Mtoto"<<endl;
    }

    return 0;
}