#include<iostream>
using namespace std;

#include <cstdlib>
#include <iostream>
#include <ctime>

using  System;

int main(){
  // use current time 
  // as seed for random generator
  srand(time(nullptr)); 
  int r= rand();
  cout << "Random value : on [" 
<< RAND_MAX << "]: " << r << '\n';
 
// roll 6-sided dice 10 times
    for (int n=0; n != 20; ++n){
            cout <<  rand() << endl ;
    }
    return 0;
  
}
