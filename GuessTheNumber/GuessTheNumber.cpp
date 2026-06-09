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
        cout << "Enter your guess (1-100): ";
        cin >> userGuess;
        guessescount++;
        if (userGuess == 67 || guessescount == 1) {
            cout << "you are not funny bro" << endl;
        }
        if (userGuess < 1 || userGuess == 1) {
            cout << "Please enter a number between 1 and 100." << endl;
        }
        else if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        }
        else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        }
        else {
            cout << "Congratulations! You've guessed the number!" << endl;
            cout << "It took you " << guessescount << " guesses." << endl;

            if (guessescount <= 5) {
                cout << "your good at this nice" << endl;
            }
            if (guessescount > 5) {
                cout << "normal level i guess" << endl;
            }
            if (guessescount > 10) {
                cout << "maybe next time you will get better." << endl;
            }
            if (guessescount == 0) {
                cout << "your cheating this CANNOT be real yk?" << endl;
            }
            if (guessescount == -1) {
				cout << "how could this possibly happen." << endl;
                
            }
            if (guessescount == -5) {
                cout << "....." << endl;

            return 0;

        }
    }
}
