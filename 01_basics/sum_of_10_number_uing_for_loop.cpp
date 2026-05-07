#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42; // Predefined number
    int guess;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess it?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number correctly!" << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
