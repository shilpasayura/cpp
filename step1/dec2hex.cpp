#include <iostream>
#include <cmath>

using namespace std;

int main() {
// long long int is 8bytes. 
// 	-(2^63) to (2^63)-1

    long long n;

    cout << "Enter a binary number: ";
    cin >> n;
    cout << n << " in binary = " << endl;

    int decNum = 0, i = 0, remainder;

    while (n!=0){
        remainder = n%10;
        n = n/10;
        decNum+= remainder*pow(2,i);
        ++i;
    }
    cout<<  decNum;
    return 0;
}