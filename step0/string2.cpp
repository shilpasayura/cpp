#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
 
int main(){
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42, 20, 20, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
    cout << "No of Occurrences of 20 in vector : ";
 
 /*
Counts the occurrences of 20 from 1st to last element
*/
int c =count(vect.begin(), vect.end(), 20);

cout << c << endl;
 
    // find() returns iterator to last address if
    // element not present
 int f = find(vect.begin(), vect.end(),5);
 cout << f << endl;

    return 0;
}
