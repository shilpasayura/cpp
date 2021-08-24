#include <iostream>
using namespace std;

int main() {
int i=0;
  for (i = 0; i < 5; i++) {
    if (i == 3) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}