
// create constant using #define preprocessor.

#include <iostream> 

#define   PI   3.14159

using namespace std;
int  main() 
{
	float   r, vol;

	cout << "\n Enter Radius of Hemi-Sphere : ";
	cin >> r;
	vol = ( 2.0 / 3.0 ) * PI * r * r * r;
	cout << "\n Volume of Hemi-Sphere = " << vol;
}
