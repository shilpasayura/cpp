#include <time.h>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(NULL));

  int r;
  int range1 =200;
  int range2=400;
  for (int i = 0; i < 5; i++) {
    r=(rand() % range1) +range1;

    cout << r << endl;
  }
}
