#include <iostream>
using namespace std;

int main(){ 
  int x = 0;  
  while (x < 10 ) {
      if (x > 4 ) {
          break;
      }      
     cout << x << "\n";
      x=x+1;    
  }
  cout << x;
}
