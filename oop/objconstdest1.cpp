#include <iostream>
using namespace std;

class MyClass{

 public:
  void SetI(int iValue);
  int GetI();
  void SetF(float fValue);
  float GetF();

 private:
   int i;
   float f;
 };

void MyClass::SetI(int iV){
   i = iV;
}

int MyClass::GetI(){
   return (i);
 }

void MyClass::SetF(float fV) {
  f = fV;
 }

float MyClass::GetF() {
 return (f);
 }

 int main(){
   MyClass anObject, anotherObject;
   anObject.SetI(10);
   anObject.SetF(3.14159);
   anotherObject.SetI(-10); anotherObject.SetF(0.123456);
   cout << "anObject.i = " << anObject.GetI() << endl; cout << "anObject.f = " << anObject.GetF() << endl;

    cout << "anotherObject.i = " << anotherObject.GetI() << endl;
    cout << "anotherObject.f = " << anotherObject.GetF() << endl;
     return (0);
 }

