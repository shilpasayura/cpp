#include <iostream>
#include <cmath>

using namespace std;



bool isPalindrome(long num){
int digit;
long rev=0;
long n= num;
// cout << num << endl;

do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
 
//cout << rev << " " << n << endl;
if (n ==rev) {
    return true;
}
else {
  return false;
}
}


int main(){

  long result =0L;
  int n1=999;
  bool found=false;
  for (int n1 =999; n1 > 99; n1--){
    for (int n2 =999; n2 > 99 ; n2--){
      result=n1* n2 ;
      cout << n1 << " " << n2 <<  " "  << result << endl; 
      if (isPalindrome(result)) {
          cout << result ;
          found=true;
          break;
      }
      
  }
  if (found ) {
    break;
  }

}

return (0);
 }

    