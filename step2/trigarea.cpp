// Program to use scope  resolution operator

#include <iostream>

using namespace std;

int n = 1;  		// Global variable declaration.

int  main(){
 int n = 2;
 { // x
   	int n = 3;
     	{ // y
       int n = 4;
        cout << "In inner  n = " << n << endl;
        cout << "Global    n = " << ::n << endl;
      	} //y
        	cout << "In outer  n = " << n << endl;
        	cout << "Global    n = " << ::n << endl;
    	} //y
    	cout << "In main() n = " << n << endl;
    	cout << "Global    n = " << ::n << endl;
}
