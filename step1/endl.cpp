/*
how many minimum and maximum combinations 
in a 3 number lock.
*/

#include <iostream>
#include<vector>  

using namespace std;

// function prototype

int main() {
  int x=9;
  int y=9;
  int z=9;
  int n=0;
 
  for (int i=0; i<= x ; i++){
    for (int j=0; j<=y  ; j++){
       for (int k=0; k<=y  ; k++){
          n++; 
          cout <<i<<j<<k<<endl;
       }
      }
    }
   cout << n;
 }
  