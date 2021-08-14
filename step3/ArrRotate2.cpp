#include <iostream>
using namespace std;

void RightRotate(int Arr[],int n,  int k) { 
   //Get array size 
    // If rotation is greater  
    // than size of array 
    int Arr1[10];
    int p ;

  for(int i = 0; i < n; i++)  {
        p= k+ i;
        if (p > n-1) {
            p= p% n;
         }
          Arr1[p]=Arr[i];
    }
    
    for(int i = 0; i < n; i++){
        cout << Arr1[i] << " ";
     } 
    
    
} 
// Driver code 
int main() 
{ 

    int Arr[] = { 1, 2, 3, 4, 5 }; 
    int N = sizeof(Arr)/sizeof(Arr[0]);
     int K = 0; 
    for (int i= 0 ; i < N ;i++){
       cout << Arr[i] << " "; 
    }
    cout << endl;
    
    for (int i= 0 ; i < 10 ;i++){
      
    RightRotate(Arr, N, i);
    cout << endl;
    }
    
} 
