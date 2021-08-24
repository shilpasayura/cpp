#include <iostream>
using namespace std;

int main() {

int sum=0;
int n, x;
cout << "Enter a Number : ";
cin>>n;

while(n!=0){
    x=n%10; // modular division
    sum=sum+x;
    n=n/10; //floor division
}
cout <<sum;
return (0);
}
