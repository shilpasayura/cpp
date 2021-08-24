#include <iostream>
using namespace std;

int main(){ 
  int x = 0;  
  while (x < 10 ) {
      x=x+1;
      if (x > 4 ) {
          continue;
      }      
     cout << x << "\n";
         
  }
  cout << x;
}
