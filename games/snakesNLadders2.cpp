//Snake N Ladders Multiplayer

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// global variables
// grid info
int gridmax=100;

//create snake and ladder data set
int snakes[4][2]= {{14, 5}, {45, 21}, {60, 33}, {93, 54}};
int ladders[3][2]= {{8, 25}, {24, 45}, {64, 81}};

char players [4]= {'A', 'B', 'C', 'D'};
char playerpos [4]= {0, 0,0,0};

string playpath[4]= {"A>0", "B>0", "C>0", "D>0"};

int ns=sizeof(snakes)/sizeof(snakes[0]);
int nl=sizeof(ladders)/sizeof(ladders[0]);
int npl=sizeof(players)/sizeof(players[0]);

void checkCut(int turn, int np){
    for (int i =0; i < npl; i++){
        if (turn !=i){
            if (np == playerpos[i]){
                cout << players[turn] << " cut " << players[i] << endl;
                playpath[turn] =playpath [turn] + ">"+ to_string(np) +  "X>" + players[i]; ;
                playpath[i] =playpath [i] + ">"+ to_string(np) +  "X<" + players[turn];

                playerpos[i]= 0;
            }
        }
    }
}

int dice(){
// generate random number between 1 and 6
    int r = rand() % 6 + 1;
    cout << " dice " << r << endl;
    return r;
}

void wait(){
//cin.get();
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
    int turn=0;// player turn
    bool gameend=0 ;

    while ( gameend ==0 ) {
        turn =turn % npl;

        cout << playpath[turn]<< endl;
        wait();
        cout << players [turn] << "\'s turn" << endl;
        d=dice();


        playpath[turn] =playpath [turn] + ">"+ to_string(d);


        // sallan check

        if (playerpos[turn] ==0) {
            if (d ==1 || d ==6){
                cout << players[turn] <<  " Sallan " << endl;
                playpath[turn] = playpath [turn] + " >Sallan ";
            }
            else{
                // not yet sallan
                turn++;
                cout << "...."<< endl ;
                playpath[turn] = playpath[turn] + ">...";
                wait();
                continue;
            }
        }

        np=check(playerpos[turn], d);
        //checkCut(turn,np);

        if (np != playerpos[turn]){
            //visual chang()
            cout << players[turn]  << " reached " << np << endl << endl;
            playerpos[turn] =np;
            playpath[turn] = playpath [turn] + " > " + to_string(np);
        }

        if (playerpos[turn] ==gridmax){
            //visual chang()
            cout << players[turn] << " win " << endl;
            gameend=1;
            playpath[turn] = playpath [turn] + " Win";
        }

        turn++;
        wait();
    }// while

    for (int i=0; i < npl; i++){
        cout << playpath[i] << endl << endl;
    }
    return 0;
}
