#include <iostream>
#include <random>

using namespace std;

int main() {
    cout << "Welcome To Guess The Number!" << endl;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);
    int numberToGuess = dis(gen);
    int userGuess = 0;
    int guessescount = 0;
    while (userGuess != numberToGuess) {
        cout << "enter your guess (1-100): ";
        cin >> userGuess;
        guessescount++;
        if (userGuess == 67) {
            cout << "you are not funny bro" << endl;
        }
        if (userGuess < 1 || userGuess == 1) {
            cout << "please enter a number between 1 and 100." << endl;
        }
        else if (userGuess < numberToGuess) {
            cout << "too low. Try again." << endl;
        }
        else if (userGuess > numberToGuess) {
            cout << "too high. Try again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the number!" << endl;
            cout << "It took you " << guessescount << " guesses." << endl;
        }
    }

    return 0;
}

