//Turn based battle system

#include <iostream>

using namespace std;


int hp = 20, mp = 20, ehp = 35 ;

void lose (void) {
	cout << "You lose." << endl;
	hp = 20;
	mp = 20;
	ehp = 20;
	}

void win (void) {
	cout << "You win." << endl;
	hp = 20;
	mp = 20;
	ehp = 20;
}


int main() {
int move;

label:
cout << "ehp: " << ehp << endl;
cout << "hp: " << hp << endl;
cout << "mp: " << mp << endl;
cout << "(1) Attack" << endl;
cout << "(2) Magic Missle" <<endl;
cout << "(3) Summon" << endl;
cout << "(0) Exit" << endl;


	cin >> move;
	system("cls");
	cout << "Status:" << endl;

    if (move == 0) {
        return 0;
    }

	if (move == 1) {
		cout << "You sliced the enemy with your sword." << endl;
		ehp -= 1;
        if (ehp < 0) {
            win();
            return 0;
        }


        if (hp < 0) {
            lose();
            return 0;
        }

        cout << "The enemy cast a Magic Missle." << endl << endl;
        hp -= 2;
    }

	if (move == 2) {
        cout << "You cast a devistating Magic Missle." << endl;
		ehp -= 2;
		mp -= 1;
		if (ehp < 0){
            win();
            return 0;
        }

        if (hp < 0){
            lose();
            return 0;
        }
        cout << "The enemy used his sword." << endl << endl;
        hp -= 1;
	}

	if (move == 3) {
        cout << "You summoned Ultima!" << endl;
		ehp -= 10;
		mp -= 15;
		hp -= 1;
		if (ehp < 0){
            win();
            return 0;
        }

        if (hp < 0){
            lose();
            return 0;
        }
        cout << "The enemy used his sword." << endl << endl;
        hp -= 1;
    }

	goto label;
}
