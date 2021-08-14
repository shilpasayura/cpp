//  calculate Compound Interest by
// using Math library function pow().

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	
	float  ci, p, r, n, a;

	cout << "\n Enter Principal, Rate of Interest and Time ::: ";
	cin >> p >> r >> n;

	a = p * pow( ( 1 + ( r / 100 ) ), n ) ;
	ci = a - p ;

	cout << "\n Compound interest = Rs. " << ci;
	return 0;
}

 