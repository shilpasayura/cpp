//Swap two values using a third variable

#include <iostream>

using namespace std;

int main(){
	int n1, n2, t;
	cout << "Enter Two Numbers : ";
	cin >> n1 >> n2;

	cout << "n1 = " << n1 << ", n2 = " << n2 << endl;
	
	t = n1;
	n1 = n2;
	n2 = t;
	
	cout << "n1 = " << n1 << ", n2 = " << n2;
return 0;
}

 

    