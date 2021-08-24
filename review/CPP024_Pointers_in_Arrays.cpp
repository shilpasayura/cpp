#include <iostream>
using namespace std;

int main() {

    int a[5]={10,20,30,40,50};
    short int zm;
    int * const p = &a[0];

    cout << p << endl; //Pointer p stores the base address of the array
    cout << a << endl; //Base address - a[0]

    cout << endl << endl;

    cout << &a[0] << endl; //Prints address of a[0] (Base address of the array)
    cout << &a[1] << endl;
    cout << &a[2] << endl;
    cout << &a[3] << endl;

    cout << endl << endl;

    cout << a << endl;
    cout <<a+1 << endl; //Moves by one position of the size of the type of array element
    cout<< a+2 << endl;
    cout<< a+3 << endl;

    cout<<endl<<endl;

    cout<< *a <<endl;
    cout<< *(a+1) <<endl;
    cout<< *(a+2) <<endl;
    cout<< *(a+3) <<endl;
    cout<< *(a+4) <<endl;
    getchar();
    return 0;
}
