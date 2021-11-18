// we'll focus on two dimensional arrays
// involves another set of square brackets and initializing them

// lets consider a scenarial of a movie rating model
// for a specific viewer and specific movie
 
 // now in order to iniatialize multi-dimentional arrays, we do this

 #include<iostream>
 using namespace std;

 int main(){

    int movie_rating [3][4]
    {
      {0,4,3,5},
      {2,3,3,5},              // This is out new initialised array of movie rattings
      {1,4,4,5}
    };

    cout<<movie_rating[1][2]<<endl;

 }

 