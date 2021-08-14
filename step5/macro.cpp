#include <iostream>
using namespace std;

int * RightRotate(int Arr[],int n,  int k) { 
   //Get array size 
    // If rotation is greater  
    // than size of array 
    static int Arr1[5];
    int p ;

  for(int i = 0; i < n; i++)  {
        p= k+ i;
        if (p > n-1) {
            p= p% n;
         }
          Arr1[p]=Arr[i];
    }
    
   // for(int i = 0; i < n; i++){
        //cout << Arr1[i] << " ";
    // } 
    
    return Arr1;
    
    
} 
// Driver code 
int main() { 

     // a pointer to an int.
    int *p;

    int Arr[] = { 1, 2, 3, 4, 5 }; 
    const int N = sizeof(Arr)/sizeof(Arr[0]);
     int K = 0; 


    for (int i= 0 ; i < N ;i++){
       cout << Arr[i] << " "; 
    }
    cout << endl;
    
    for (int i= 0 ; i < 10 ;i++){
      
    p =RightRotate(Arr, N, i);
    //cout << endl;
    for ( int j = 0; j < N; j++ ) {
      //cout << "*(p + " << j << ") : ";
      cout << *(p + j) <<  " ";
   }
    cout << endl;
    }
    
} 
    