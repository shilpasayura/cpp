#include<iostream>
#include<string.h>

using namespace std;
//convert hexadecimal to decimal

int main() {
   char num[] = "FF";
   int len = strlen(num);
   int base = 1;
   int temp = 0;

   for (int i=len-1; i>=0; i--) {
      if (num[i]>='0' && num[i]<='9') {
         temp += (num[i] - 48)*base;
         base = base * 16;
      }
      else if (num[i]>='A' && num[i]<='F') {
         temp += (num[i] - 55)*base;
         base = base*16;
      }
   }
  
 cout<<num<<"  :.  " << temp <<endl;
   return 0;
}

