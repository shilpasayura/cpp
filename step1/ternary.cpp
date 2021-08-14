#include <iostream>
using namespace std;

int main(){
	
	int a, b, max;
	cout << "Enter Two Numbers : ";
	cin >> a >> b;

	max = ( a > b ) ? a : b;
	
	cout << "\n Maximum Value is ::: " << max;
	return 0;
}