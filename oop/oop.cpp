structure of a C++ Program

// File Inclusion Section

#include <iostream>
#include <iostdio.h>

#name spaces 
using namespace std;

// Class Declaration & Definition
class Distance{
//Private variables & methods 
private:
	int feet;
	float inches;
//Public Variables and methods  
public:
 //Constructors
	Distance(){
		feet = 0;
		inches = 0.0;
	}
 //public Methods 
	Distance(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
 //Function signatures  
	void getDist();
	void showDist();
	void addDist(Distance, Distance);
};

// Member Function Definition
void Distance :: getDist()
{
	cout << "Enter Feet & Inches : ";
	cin >> feet >> inches;
}

void Distance :: showDist()
{
	cout << feet << "\'-" << inches << "\"";
}

void addDist( Distance dd1, Distance dd2 )
{
	feet = dd1.feet + dd2.feet;
	inches = dd1.inches + dd2.inches;
	if( inches >= 12.0 )
	{
		inches -= 12.0;
		feet++;
	}
}

// Global Declaration & Definition Section

// main Function
void main()
{
	Distance d1;
	Distance d2(10, 6.0);
	Distance d3;
	d1.getDist();

	d1.showDist();
	cout << " + ";
	d2.showDist();
	cout << " = ";

	d3.addDist(d1, d2);
	d3.showDist();
}

 