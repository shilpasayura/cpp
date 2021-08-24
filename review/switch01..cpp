#include <iostream>

using namespace std;

int main() {
    char choice;

cout << "Enter a Choise A/B/C/D: ";
    cin >> choice;

    switch (choice) {
    case 'A':
        cout << "A";
        break;
    case 'B':
        cout << "B";
        break;
    case 'C':
        cout << "C";
        break;
    default:
        cout << "N/A";
    }
}

