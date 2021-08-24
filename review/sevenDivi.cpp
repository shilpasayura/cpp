/*

The input include 8 integers separated by space.
State how many integers of last 7 integers are divisible by first integer?

Example
input  2 14 23 12 16 15 17 18
Output  5
*/

#include <iostream>

using namespace std;


int main() {

    int nums [8];
    int n=8;
    int count=0;

	// Read the inputs
    cout << "Enter 7 Integers " ;
    for (int i =0 ; i < n; i++){
        cin >> nums[i] ;
        cout << nums[i] << endl;
    }


	for (int i = 1; i < n; i++) {

        if (nums[i]%nums[0]==0){
            cout << nums[i] << endl;
            count++;
        }

	}
    cout << count << endl;
	return 0;
}
