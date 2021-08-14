//  difference between
// getch() and getche() function.

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	char ch;
	
	cout << "\n Enter a Character : ";
	ch = getch();
	cout << "\n ch = " << ch;
	
	cout << "\n Enter a Character : ";
	ch = getche();
	cout << "\n ch = " << ch;

cout << "\n Enter a Character : ";
	ch = getchar();
	cout << "\n ch = " << ch;


	getch();
 return 0;
}
