
#include <iostream>
using namespace std;

/*
~ Reference Variables are the alias to another variable.
~ Must be initialized when created.
~ They cant change the connections/associations.
~ Must be of the same type as associated variables.
*/

int main() {

    string name="Pasan";
    cout << "Value of variable is : "<< name <<endl;
    cout << "Address of variable is : "<< &name <<endl;

    string &ref_1 = name; // Creating a reference variable
    cout<< "Value of variable is : "<< ref_1 <<endl;
    cout <<"Address of variable is : "<< &ref_1 <<endl;

    ref_1 = "Saman";
    cout<<"Value of variable is : "<< name <<endl;
    cout <<"Address of variable is : "<< &name <<endl;
    cout <<"Value of variable is : "<< ref_1 <<endl;
    cout <<"Address of variable is : " << &ref_1 <<endl;

    return 0;
}
