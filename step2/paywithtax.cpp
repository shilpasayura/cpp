#include <iostream>

using namespace std;

int main()
{
	float hoursWorked;
	float hourlyPay;
	float weeklyPay;

//  read the input values

	cout << "Enter the number of hours worked: ";
	cin >> hoursWorked;
	cout << "Enter the hourly pay rate: ";
	cin >> hourlyPay;

//  calculate and print the weekly pay

	weeklyPay = hourlyPay * hoursWorked;
	cout << "Weekly pay   : $" << weeklyPay;
}

