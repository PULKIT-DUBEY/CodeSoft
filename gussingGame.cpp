#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main() {
    // Set up random number generator
    srand(static_cast<unsigned int>(time(0)));

    char playAgain = 'y';

    while (playAgain == 'y' || playAgain == 'Y') {
        int secretNumber = rand() % 100 + 1;
        int playerGuess = 0;
        int numberOfTries = 0;
        const int maxTries = 7;

        cout << "\n=== Welcome to the Number Guessing Game! ===" << endl;
        cout << "I'm thinking of a number between 1 and 100." << endl;
        cout << "You have " << maxTries << " chances to guess it!" << endl;

        while (numberOfTries < maxTries) {
            cout << "\nTry " << (numberOfTries + 1) << ": Enter your guess: ";
            cin >> playerGuess;

            // Handle invalid input
            if (cin.fail()) {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Please enter a valid number!" << endl;
                continue;
            }

            numberOfTries++;

            if (playerGuess < secretNumber) {
                cout << "Too low!";
            } else if (playerGuess > secretNumber) {
                cout << "Too high!";
            } else {
                cout << "🎉 You guessed it in " << numberOfTries << " tries!" << endl;
                break;
            }
        }

        if (playerGuess != secretNumber) {
            cout << "\n😞 You've used all your tries. The number was " << secretNumber << "." << endl;
        }

        // Ask the player if they want to play again
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;

        // Clear screen for next game (optional)
        cout << string(50, '\n');
    }

    cout << "\nThanks for playing! Goodbye!" << endl;
    return 0;
}
