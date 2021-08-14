#include<iostream>
#include<vector>

using namespace std;
 
int main()
{
    vector<string> vect{"A", "B", "C"};
 
 /* 
We avoid copy of the 
whole string object by 
using reference.
*/

    for (const auto &x : vect){
       cout << x << endl;
    }
    return 0;
}
    