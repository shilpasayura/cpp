#include <iostream>
using namespace std;

int main()
{
	float hoursWorked;
	float hourlyPay;
	float grossPay;
	float deduction;
	float netPay;

//  read the input values

	cout << "Enter the number of hours worked: ";
	cin >> hoursWorked;
	cout << "Enter the hourly pay rate: ";
	cin >> hourlyPay;

//  calculate the gross pay, deductions, and net pay

	grossPay = hourlyPay * hoursWorked;
	deduction = grossPay * 0.25;
	netPay = grossPay - deduction;

// print gross pay, deductions, and net pay

	cout << "Gross pay   : $" << grossPay << endl;
	cout << "Deduction   : $" << deduction << endl;
	cout << "Net pay   : $" << netPay << endl;
}
