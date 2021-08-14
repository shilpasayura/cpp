#include <iostream>


using namespace std;

int main(int argc, char *argv[])
{
int anInt, anotherInt;
// Prompt the user for an integer.
cout << "Please type an integer and then press Enter: ";
cin >> anInt;

cout << "Please type another integer and then press Enter: ";
cin >> anotherInt;
cout << anInt << " + " << anotherInt << " = ";
cout << anInt + anotherInt << endl;
cout << anInt << " - " << anotherInt << " = ";
cout << anInt - anotherInt << endl;
cout << anInt << " * " << anotherInt << " = ";
cout << anInt * anotherInt << endl;
cout << anInt << " / " << anotherInt << " = ";
cout << anInt / anotherInt << endl;
float aFloat, anotherFloat;
cout << "Please enter a floating-point number";
cout << " and then press Enter: ";
cin >> aFloat;
cout << "Please type another floating-point number";
cout << " and then press Enter: ";
cin >> anotherFloat;
cout << aFloat << " + " << anotherFloat << " = ";
cout << aFloat + anotherFloat << endl;
cout << aFloat << " - " << anotherFloat << " = ";
cout << aFloat - anotherFloat << endl;
cout << aFloat << " * " << anotherFloat << " = ";
cout << aFloat * anotherFloat << endl;
cout << aFloat << " / " << anotherFloat << " = ";
cout << aFloat / anotherFloat << endl;

return 0;
}