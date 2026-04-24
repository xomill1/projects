#include <iostream>
#include <cstdlib>
#include <ctime>
// init all the libs

using namespace std;

int main() {
    srand(time(0)); 

    cout << "Welcome to my game! Guess a number between 0 and 100.\n";

    int randInt = rand() % 101;
    int guessedInt = -1;

    while (guessedInt != randInt) {
        cout << "What number do you guess? ";
        cin >> guessedInt;

        if (guessedInt > randInt) {
            cout << "Too high!\n"; // if guessedInt is above the number
        }
        else if (guessedInt < randInt) {
            cout << "Too low!\n"; // if guessedInt is below the number
        }
        else {
            cout << "You are correct! Good job!\n"; // if the answer is correct
        }
    }

    return 0;
}