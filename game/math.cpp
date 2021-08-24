#include <iostream>


using namespace std;

int main()
{
double input,input1, output, relation ;
double x, y;

cout<<"Enter input :" ;
cin>>input;

cout<<"Enter Output :" ;
cin>>output;

relation=output/input;

cout<<"Enter number of which you want output :";
cin>>input1;

output=relation*input1;
cout<<"Your output is :"<<output;

return 0;
}


