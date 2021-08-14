// sizeof() operator.

#include <iostream>

using namespace std;
int main(){
	int a = 100, b;
	b = sizeof(a);
 cout << "\nThe size of a : " << b;
 
	b = sizeof(double);
 cout << "\nThe size of double : " << b;
	
	b = sizeof(123L);
 cout << "The size of 123L : " << b;
	
	b = sizeof(123.45);
 cout << "The size of 123.45 : " << b;
	
	b = sizeof(123.45f);
 cout << "The size of 123.45f : " << b;
	return 0;
}

 