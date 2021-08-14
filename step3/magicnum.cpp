#include <iostream>

using namespace std;

int main(){

    int n1, lastnum;
    cout <<"Enter Number :";
    cin >> n1; 
    int n =n1;
    int x;
    
int sum=0;

while (sum >9 || n > 0) {
       if( n==0) {
             n=sum;
             sum=0;
       }
       lastnum=n%10;
       sum=sum+lastnum;
       n=n/10;
}

if( sum==1) {
         cout << n1 << " is magic" ;
 }
else {
   cout << n1 << " is not magic";
}

}