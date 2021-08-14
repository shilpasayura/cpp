// Arithmatic Operators ( +, -, * , / , % )

#include <iostream>
using namespace std;

int main(){
  	int a, b, res;
  	
  	cout << " Enter two numbers : " ;
  	cin >> a >> b;

	res = a + b;
  	cout << "\n" << a << " + " << b << " = " << res;

	res = a - b;
  	cout << "\n" << a << " - " << b << " = " << res;

	res = a * b;
  	cout << "\n" << a << " * " << b << " = " << res;

	res = a / b;
  	cout << "\n" << a << " / " << b << " = " << res;

	res = a % b;
  	cout << "\n" << a << " % " << b << " = " << res;

  	getchar();
}