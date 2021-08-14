#include <iostream>

using namespace std;

int main() {
  int n,largest;
  n=5;
  int num[n];
  for(int i = 0; i < n; i++){
    cin >> num[i];
  }

  largest = num[0];
  for(int i = 1;i < n;i++){
    if (largest < num[i]){
      largest = num[i];
    }
  }
  cout<<largest;
    return 0;
}