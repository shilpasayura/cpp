//  sizeof() operator

#include <iostream>

using namespace std;
 
int  main(){
	
 int x;
	cout << "The size of an int is:\t\t";
	cout << sizeof(int) << " bytes.\n";
	
	cout << "The size of a short int is:\t"; 
	cout << sizeof(short) << " bytes.\n";
	
	cout << "The size of a long int is:\t";
	cout << sizeof(long) << " bytes.\n";
	
	cout << "The size of a char is:\t\t";
	cout << sizeof(char) << " bytes.\n";
	
	cout << "The size of a float is:\t\t";
	cout << sizeof(float) << " bytes.\n";
	
	cout << "The size of a double is:\t";
	cout << sizeof(double) << " bytes.\n";

cout << "The size of a boolean is:\t";
	cout << sizeof(bool) << " bytes.\n";

cout << sizeof(x);
return 0;
}
