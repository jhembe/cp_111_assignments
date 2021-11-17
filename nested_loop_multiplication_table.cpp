#include<iostream>
#include<iostream>
#include<iomanip>
#include<cctype>
using namespace std;

int main(){
    int table {};   // Table size 
    const int table_min {2}, table_max {12}; // minimum and maximum  table 
    char reply {}; // Response to prompt

    // now the do-while loop begins
    do{
        cout<<"What size table would you like ("
            << table_min<<" to "<<table_max<<" ) ? ";
        cin>>table;
        cout<<endl;

        // now i want to run an if statement to make sure that the reply is within the limits
        if (table < table_min || table > table_max)
        {
            cout<<"Invalid table size entered. Program terminated."<<endl;
            return 1;
        }

        // Create the top line of the table
        cout<<setw(6)<<" |";
        // now the for loop for setting up the separators
        for(int i {}; i <= table; ++i)
        {
            cout<<" " <<setw(3)<<i<<" |";
        }
        cout<<endl;

        //now let's create a sepatator row
        //--------------------------------
        for(int i {}; i <= table; ++i)
        {
            cout<<"------";
        }

        // Now the major logic of our mathematical table starts
        // nested loops in action
        for(int i {1}; i <= table; i++)
        {   // Iterate over rows
            cout<<" "<<setw(3)<<i<<" |"; // Starts the rows

            // The following code is responsible to output the values of each column
            for(int j {1}; j <= table; ++j)
            {
                cout<<" "<<setw(3)<<i*j<<" |";
            }
        
        cout<<endl; // ends the respectively ith row

        }

        // check if another table is required
        cout<<"\nDo you want another table (y or n) ? ";
        cin>>reply;
    }
    while(tolower(reply) == 'y');

return 0;
}
