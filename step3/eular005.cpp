#include <iostream>
#include <cmath>

using namespace std;

void primeFactors(long n) { 
// Print the number of 2s that divide n 

while (n%2==0){ 
   cout << 2 <<  " "; 
   n =n/2;
 } 
 
/*
n must be odd at this point.  So we can 
skip one element (Note i = i +2) 
*/
for (long i = 3; i <= sqrt(n); i+= 2){ 
/* While i divides n, print i and divide n 
*/

  while (n%i == 0){   
     cout << i << "  "; 
     n = n/i; 
  } 
 } 
 
/*
This condition is to handle the case whien 
n is a prime number greater than 2 
*/

if (n > 2) {
 cout << n; 
 }
} 

int main(){
 long n = 600851475143L; 
        primeFactors(n);
return (0);
 }

    