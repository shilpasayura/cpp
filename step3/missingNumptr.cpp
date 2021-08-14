#include <iostream>
#include<vector>  


using namespace std;


// function prototype

int main() {
  int N=6;
  vector<int> nums{2,5,7,3,1,6};
  vector<bool> v(N);
  for (int i=0; i< N ; i++){
    //cout << av[i];
    v[nums[i]-1]=1;
  }
  
  for (int i=0; i< N ; i++){
    //cout << av[i];
    cout << v[i];
  }
  
  cout << endl;
  bool key= false;
  auto it = find(v.begin(), v.end(), key);

    // If element was found
  if (it != v.end())  {
        // calculating the index of key
     int index = it - v.begin()+1;

     cout << index << endl;
   }
    
    
  return 0;    
}

// function definition
