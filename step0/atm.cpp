#include <iostream>
using namespace std;

int main(){

unsigned int x; //amount withdrawn
float y=4605.50; //bank balance

cout << "Amount to Withdraw : " ;
cin >>x;

if(x>0) && (x<=2000) && (y>0) && (y<=2000){

	if(x>y) && (x%5==0){
		cout << y;
    }
	else if(x%5==0){
		y=(y-x)-0.5;
		cout << y;
	}
	else{
		cout << y;

}

return 0;
}