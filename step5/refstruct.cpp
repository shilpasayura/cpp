#include<iostream>
using namespace std;
 
void swap1 (int first, int second){
    int temp = first;
    first = second;
    second = temp;
}

void swap2 (int &first, int &second){
    int temp = first;
    first = second;
    second = temp;
}

void swap3 (int *first, int *second){
    cout << first << " " << second << endl;
    cout << *first << " " << *second << endl;

    int temp = *first;
    *first = *second;
    *second = temp;
}

int main(){
    int a = 2, b = 3;
    cout << a << " " << b<<endl;
    cout << "Passing by value\n";
    swap1( a, b );
    cout << a << " " << b<<endl;
    cout << "Passing by referenc\n";
    swap2( a, b );
    cout << a << " " << b<<endl;
    cout << "Passing by reference pointers\n";
    swap3( &a, &b );
    cout << a << " " << b<<endl;
    return 0;
}

