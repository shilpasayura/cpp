#include <iostream>
using namespace std;

int[] RightRotate(int a[],int n,  int k) { 
   int Arr1[]=int[n];
   int v ;

  for(int i = 0; i < n; i++)  {
        p= k+ i;
        if (p > n-1) {
            p= p% n;
         }
          Arr1[p]=Arr1[i];
    }

     return Arr1;
    
} 
// Driver code 
int main() 
{ 

    int Arr[] = { 1, 2, 3, 4, 5 }; 
    int N = sizeof(Arr)/sizeof(Arr[0]);
     int K = 2; 
    for (int i= 0 ; i < N ;i++){
       cout << Arr[i] << " "; 
    }
    cout << endl;
    
   Arr= RightRotate(Arr, N, K); 

for (int i= 0 ; i < N ;i++){
       cout << Arr[i] << " "; 
    }

} 