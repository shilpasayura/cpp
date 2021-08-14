// Program to use Bitwise Operators ( &, |, ^, ~, <<, >> )

#include <iostream.h>


int main(){
	int a = 3, b = 6, c;
	
	cout << "\n a = " << a;
	cout << "\n b = " << b;
	
	c = a & b;
	cout << "\n a & b = " << c;
	
	c = a | b;
	cout << "\n a | b = " << c;
	
	c = a ^ b;
	cout << "\n a ^ b = " << c;
	
	c = ~a;
	cout << "\n ~a = " << c;
	
	c = a << 3;
	cout << "\n a << 3 = " << c;
	
	c = b >> 2;
	cout << "\n b >> 2 = " << c;
	
	return 0;
}

 