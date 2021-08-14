#include <iostream>
using namespace std;

int main() {
    
    
    // 5 is assigned to a
    int a = 5;
    // a is assigned to b
    int b = 3;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a +=b;
    cout << "a +=b " << a << endl;
 

a -=b;
    cout << "a -=b " << a << endl;

a *=b;
    cout << "a *=b " << a << endl;


a %=b;
    cout << "a %=b " << a << endl;


return 0;
}
