#include <iostream>
using namespace std;

int main(){
    int x=7;
    int y=0;
    for ( ; x < 10; x=x+2 ) {
        cout << x << "\n";
        y=x;
    }
    cout << x;
    cout << y;
}
