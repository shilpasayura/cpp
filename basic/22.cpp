#include <iostream> 
using namespace std;   
int LCM(int a, int b) 
{ 
    int largest = max(a, b); 
    int small = min(a, b); 
    for (int i = largest; ; i += largest) 
    { 
        if (i % small == 0) 
            return i; 
    } 
} 


int main() 
{ 
    int x , y ;
    cout<<"Enter the two numbers "<<endl;
    cin>>x;
    cin>>y; 
    cout << "LCM of " << x << " and " 
         << y << " is " << LCM(x, y); 
    return 0; 
} 
