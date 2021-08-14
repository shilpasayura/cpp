#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x = 0.0, result;
  const double pi =3.1415f;
  
  result = acos(x);
  cout << "acos(x) = " << result << " radians" << endl;
  
  // result in degrees
  cout << "acos(x) = " << result*180/pi<< " degrees" << endl;
  
  return 0;
}