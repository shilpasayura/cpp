#include<iostream>
#include <stdio.h>

using namespace std;

int main(){
  int [] arr =  {1, 2, 8, 3, 2, 2, 2, 5, 1};  
  int n = size(arr)/size(arr[0]);
  int [] fr = int [n];  
  int visited = -1;  
  for(int i = 0; i < n; i++){  
     int count = 1;  
     for(int j = i+1; j < n; j++){  
       if(arr[i] == arr[j]){  
           count++;  
           //To avoid counting same element again  
           fr[j] = visited;  
           }  
       }  
       if(fr[i] != visited)  
           fr[i] = count;  
       }  
  
        for(int i = 0; i <n; i++){  
            if(fr[i] != visited) { 
                count << arr[i] << " : " << fr[i] << endl;  
            }  
        }
        
    }