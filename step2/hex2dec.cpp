#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
    int dec_num, r;
    string hexdec="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "Enter  decimal number:\n";
	cin>> dec_num;
		
 while(dec_num>0){
     r = dec_num % 16;
     hexdec = hex[r] + hexdec;
            dec_num = dec_num/16;
        }
        cout<<"Hexadecimal number : "<<hexdec<<"\n"; 
	}
