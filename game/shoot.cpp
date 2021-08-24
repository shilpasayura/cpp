#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>


using namespace std;

int main(){
    int a,b;
    b=1;

    while(b==1){
        cout << "What game you want to play?" <<endl;
        cout << "1. Guess the number \n";
        cout << "2. Math answers \n";
        cout << "3. Guess the word\n";
        cout << "0. Exit" << endl;

        cin >> a;

        if (a==0){
            break;
        }

        if (a==1){
            int d;
            int c;
            c = rand() % 100+20;
            cout << "HINT: The number is between " << c-3 << " and " << c+3 <<endl;
            cout << "Enter your guess:"<<endl;
            cin >> d;

            if(d==c){
                cout << "Right answer"<<endl;
            }
            else{
                cout << "Wrong answer. The answer is " << c << endl;
            }
        }

        else if (a==2){
            int c;
            c=rand() % 20+10;
            int d;
            d = rand() % 14+7;
            int f;

            cout << "What is " << c << " + " << d << " = " <<endl;
            cin >> f;

            if (f==c+d){
                cout << "Right answer!!"<< endl;
            }
            else {
                cout<<"Wrong answer! The answer is: " << c+d << endl;
            }
        }

        else if (a==3){
            string word;
            string ans;
            int ran;
            ran = rand() % 5+1;

            if(ran==1 || ran==2)
            word = "rabbit";

            if(ran==3)
            word = "apple";

             if(ran==4)
            word = "football";

             if(ran==5)
            word = "cricket";

            int l = word.size();

            cout << "Guess the word:  " ;

            for (int i=0;i<l;i++)
            {
                if(i%2==0)
                    cout << word[i];

                else
                    cout << "_";
            }

            cout << endl << "Enter your answer:  ";
            cin >> ans;

            if (word==ans){
                cout << "Right answer! Play again... " << endl;

            }else{
                cout << "Wrong answer! Try again " << endl;
            }
        }
    }
}

