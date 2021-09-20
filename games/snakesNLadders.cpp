//Snake & Ladders
//Single Player

#include <iostream>
#include <ctime>
using namespace std;

// global variables
// grid info
int gridmax=100;

//create snake and ladder data set
int snakes[4][2]= {{14, 5}, {45, 21}, {60, 33}, {93, 54}};
int ladders[3][2]= {{8, 25}, {24, 45}, {64, 81}};

int ns=sizeof(snakes)/sizeof(snakes[0]);
int nl=sizeof(ladders)/sizeof(ladders[0]);

int dice(){
// generate random number between 1 and 6
int r = rand() % 6 + 1;
cout << " dice " << r << endl;
return r;
}


//function to check snakes and ladders

int check(int p, int n){
// next position to go on grid
int np= p+n ;
// can't go beyond 100
if (np > gridmax) {
return p;
}

else if (np ==gridmax) {
//reach the goal
return gridmax;
}

// check snakes
for (int i =0; i < ns; i++){
if (np == snakes[i][0]){
cout << "snake bite " << np << endl;
np=snakes[i][1];
return np;
}
}

// check ladders
for (int i =0; i < nl; i++){
if (np == ladders[i][0]){
cout << "ladder at " << np << endl;
np=ladders[i][1];
return np;
}
}

return np;
}


int main(){

// initialize random seed:

srand (time(NULL));

//initial position
int p=0;
int d; // dice value
int np; //new position
while ( p < 100 ) {
d=dice();
cin.get();
// sallan check

if (p ==0) {
if (d ==1 || d ==6){
cout << " Sallan " << endl;
}
else{
// not yet sallan
continue;
}
}

np=check(p, d);

if (np !=p){
//visual chang()
cout << " reached " << np << endl;
}

p=np;
if (p ==gridmax){
//visual chang()
cout << " win @ " << np << endl;
}

}// while


return 0;
}