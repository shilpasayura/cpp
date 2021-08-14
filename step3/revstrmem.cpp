#include <iostream>
#include<vector>  


using namespace std;


// function prototype

string* reverse(string &a);

int main() {
  string str;
  string *p; 

  cout << " Please enter a string " << endl;
  getline(cin, str);
  
  // function call
  p=reverse(str);
  cout << *p;
  return 0;    
}

// function definition
string* reverse(string &str) {
  int n = str.size();
  int front=0;
  int back =n-1;
  char *x; 
  char temp;
  while (front <= back) {
     temp= str[front];
     str[front]=str[back];
     str[back]=temp;
     front++;
     back--;
   }

    return &str;
}