#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {


  srand((unsigned) time(0));

  cout << "RAND_MAX value is " << RAND_MAX << endl;

  int r;
  int range=100;

  for (int index = 0; index < 10; index++) {

    r = (rand() % range) + 1;
    cout << r << endl;
  }
}
