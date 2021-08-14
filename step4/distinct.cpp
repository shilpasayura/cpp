#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;



int main(){

    int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
    int n = sizeof(arr) / sizeof(arr[0]); 
    
     vector<int> nums(begin(arr), end(arr));
    
     sort(nums.begin(),nums.end());
      
    int dv=nums[0] ;
      int dn=1;
      for (int i = 1; i < nums.size(); i++) {
          if (dv !=nums[i]) {
             dn++;
             dv=nums[i] ;
             cout << nums[i] << endl;
           } 
      
      }     
 
    return 0;
}