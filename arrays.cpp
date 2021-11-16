// #include<iostream>
// using namespace std;

// int main(){

//     //  now let's create an array of height of test subject size
//     int size {6},total {},average {},count {};
//     int height[] {26,37,47,55,62,75};

//     // now the for loop begins
//     for(int i {}; i< size;++i){
        
//         total += height[i];
//     }
//     average = total/size;
    
//     // now we creating a for loop to compare or check the height of people with 
//     // height below average
//     for(int i {}; i<size; ++i){
//         if (height[i] < average){
//             count ++;
//         }
//     }
//     cout<<count<<" People are below average"<<endl;
    
// }

#include<iostream>
using namespace std;

int main(){

    // now lets create a simple factorial program 
    // let's initialize limit for our factorial
    int limit {},factorial {1};

    cout<<"Enter the number you want to fa=ind the factorial of : ";
    cin>>limit;

    for(int i {1}; i <= limit; ++i){
        factorial *= i;
    }
    cout<<factorial<<endl;
}