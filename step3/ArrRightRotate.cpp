#include <iostream>
using namespace std;
int main() {
   int arr[5] = {4, 1, 8, 2, 9};
   int lenall = sizeof(arr);
   int len0 =sizeof(arr[0]);
   int len = lenall/len0;
   for (const int &n : arr) {
        cout << n << "  ";
    }
    cout <<endl;
   //cout << arr <<endl;
   cout << "Whole :" << lenall <<endl;
   cout << "[0] :" << len0 <<endl;
   cout << "The length of the array is: " << len;
   cout << endl;

   int len1 = *(&arr + 1) - arr;
   cout << len1 ;
   return 0;
}