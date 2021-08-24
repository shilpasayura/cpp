// a conversation with your deaf grandmother
#include <iostream>
#include <string>
using namespace std;

int main(){
    int count = 0;
    int n;
    string speak;

    while (count < 3){
        count++;
        speak="";
        while (speak != "BYE"){
            cout << "HA! SPEAK UP, SONNY!\n";
            cin >> speak;
            if (speak !="BYE") {
                n = rand() % 100 -1;         // v1 in the range 0 to 99
                cout << "NO NOT SINCE 19" + to_string(n) <<endl;
            }
            else{
            cout << "WHAT\'S THAT DEAR?\n" ;
            }  
        }
    } 
}