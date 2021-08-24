#include <iostream>
using namespace std;

void swap(int &a, int &b);

int main() {

    int a=10, b=20;
    cout<<"a : "<< a <<endl;
    cout<<"b : "<< b <<endl;
    swap(a,b);

    cout<<"a : "<< a <<endl;
    cout<<"b : "<< b <<endl;
    getchar();
    return 0;
}

void swap(int &a, int &b) {
    int t;
    t=a;
    a=b;
    b=t;

}
