#include <iostream>
using namespace std;

int main(){
  int max= 25;
  int sum =0;
for(int i=1;i< max+1; i++){
  
   if ((i%3!=0) && (i%5!=0)) {
    cout << i << endl;
     sum=sum+i;
   }
  
 }
 cout << sum;
return (0);
 }
    