#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  //avoiding repetitive seqeunces
  srand((unsigned) time(0));
  for(int i=0 ; i < 100 ; i++){
    int r = rand();
    cout << r << endl;
  }
}
