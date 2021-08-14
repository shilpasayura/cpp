#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num = 10;
    float money = 5.5;
    float bigval = 9876543210.0;

    cout << setiosflags(ios::fixed);
    cout << setiosflags(ios::showpoint);
    cout << setprecision(2);

    cout << setw(10) << "first" << setw(10) << "second" << endl;
    cout << setw(10) << num << setw(10) << (num + 1) << endl;
    cout << setw(10) << num * 2 << setw(10) << (num * 2 + 1) << endl;
    cout << setw(6) << num << setw(6) << money << endl;
    cout << setw(6) << num << money << endl;
    cout << setw(6) << "long label " << setw(6) << bigval << endl;
}