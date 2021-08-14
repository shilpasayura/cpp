#include <iostream>
using namespace std;

int main(){
	
	int num = 25;

	cout << "\n Num : " << num;
	num += 10;
	cout << "\n Num += 10 : " << num;
	num -= 5;
	cout << "\n Num -= 5 : " << num;
	num *= 2;
	cout << "\n Num *= 2 : " << num;
	num /= 3;
	cout << "\n Num /= 3 : " << num;
	num %= 3;
	cout << "\n Num %= 3 : " << num;

	getchar();
}
