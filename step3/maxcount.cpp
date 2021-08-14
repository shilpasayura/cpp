#include<iostream>
using namespace std;

int main(){
    int nums[] = {14, 5, 9, 12, 9, 9, 5, 17};
    int n = sizeof(nums)/sizeof(nums[0]);

    int max_count = 0;
    int max_num;
  cout << "\nMost occurred number: ";
  max_num=nums[0];
  for (int i=0; i<size; i++){
   int count=1;
   
   for (int j=i+1;j<size;j++){
       if (nums[i]==nums[j]){
           count++;
       }
       if (count>max_count){
         max_count = count;
         max_num=nums[i];
        }
  }
}
