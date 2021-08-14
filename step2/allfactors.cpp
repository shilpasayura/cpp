#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int max = 1000;
  int maxdivs=0;
  int maxdivno;
  int divs;

  for (int i= 2; i < max+1 ; i++){
     divs=0;
    for (int j= 1; j < i/2 ; j++){
         if ( i % j ==0) {
            divs++;
           // cout << i << "/" << j << endl;
         }
    } // for 
    
    if (maxdivs<divs){
        maxdivs=divs;
        maxdivno=i;
        cout << i << " " << maxdivs << endl;
    }
  }
  //cout << maxdivno << " " << maxdivs;
return (0);
 }

    