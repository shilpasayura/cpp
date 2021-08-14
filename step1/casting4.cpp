#include <iostream> 
using namespace std; 
 
int main()
{
	float a = 1.3;
	//int b  = a; //Compiler will throw an error for this
	int b = (int) a + 1  ;
	cout << "Value of a " <<  a << endl;
	cout << "Value of b " <<  b << endl;
	return 0;
}
    