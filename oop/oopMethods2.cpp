#include <iostream>

using namespace std;

//define class 
class MyClass{
// declare members 
public:
int i;
float f;
void disp(){
cout << this->i << " " <<  this->f << endl;
}
};


int main(int argc, char *argv[]) {
MyClass  anObject;
anObject.i = 10;
anObject.f = 3.14159;
cout << "i = " << anObject.i << endl;
cout << "f = " << anObject.f << endl;
anObject.disp();
return (0);
 }

