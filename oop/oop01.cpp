#include <iostream>
using namespace std;

int main(){
int anInt;
cout << "Input an integer: ";cin >> anInt;
// Increment the integer and show the result.
anInt++;
cout << "After increment: " << anInt << endl;
// Decrement the integer and show the result.
anInt--;
cout << "After decrement 1: " << anInt << endl;
// Decrement the integer and show the result.
anInt--;
cout << "After decrement 2: " << anInt << endl;


++anInt;
cout << "After increment 2: " << anInt << endl;
// Decrement the integer and show the result.
--anInt;
cout << "After decrement 3: " << anInt << endl;


return 0;
}