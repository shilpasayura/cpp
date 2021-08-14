#include <iostream>
#include<vector>  


using namespace std;


// function prototype

string* reverse(string &a, int n);

int main() {
  string str;
  string *p; 

  cout << " Please enter a string " << endl;
  getline(cin, str);
  int n = str.size();
  cout << n << endl;
  // function call
  p=reverse(str , n);
  cout << *p;
  return 0;    
}

// function definition
string* reverse(string &str, int n ) {
 vector<string> str1(n);
  // store the size of the string
  int j=0;
  for (int i=n-1; i>= 0 ; i--){
    cout << str[i];
    str1[j]=str[i];
    }
    
    for (int i=0; i<n ; i++){
    cout << str1[i];
    }
    
    return &str;
}