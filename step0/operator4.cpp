#include <iostream>
using namespace std;

int main() {
    int a = 10; 
    int b = 10;
    
   int pre_result_a;
   int post_result_b;
   

    pre_result_a =++a;
    cout << "pre_result_a = ";
    cout << pre_result_a << endl;
   
   post_result_b =b++;
   cout << "post_result_b = ";
   cout << post_result_b << endl;
   

    return 0;
}
