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
  char *f, *b;
  char temp;
  while (front <= back) {
     
     f = &str[front];
     b = &str[back];
     temp = *f;
    
     cout << *f << " - " << *b << temp << endl;
     *f= *b;
     *b= temp;
     front++;
     back--;
   }

    return &str;
}