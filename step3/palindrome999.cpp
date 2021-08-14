#include <iostream>
#include <cmath>

using namespace std;



bool isPalindrome(long num){
int digit;
long rev=0;
long n= num;
cout << num << endl;
do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
 
//cout << rev << " " << n << endl;if (n ==rev) {
    return true;
}
else {
  return false;
}
}


int main(){
 bool x =isPalindrome(1001L);
 cout << x; 
return (0);
 }

    