// Reference Variable

#include<iostream>

using namespace std;

int main ()
{

   int    a;
   float b;
   
   // declare reference variables
   int &x = a;
   float &y = b;
   
   cout << "Address of  : " << &x << endl ; 

   a = 23;
   cout << "Value of a : " << a << endl;
   cout << "Value of a reference : " << x  << endl;
 
   b = 78.23;
   cout << "Value of b : " << b << endl;
   cout << "Value of b reference : " << y  << endl;
   return 0;
}

 