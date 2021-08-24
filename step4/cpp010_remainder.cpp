#include <iostream>
using namespace std;

int main() {

		// Read the input a, b
		int a, b;
		printf("Enter Number : ");
		scanf("%d", &a);

		printf("Enter Divisor : ");
		scanf("%d", &b);

		// Compute the ans.
		// Complete the below line.
		int ans =a%b;
		printf("Remainder : %d\n", ans);


	return 0;
}
