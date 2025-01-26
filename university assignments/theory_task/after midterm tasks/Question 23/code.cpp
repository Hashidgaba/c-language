#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

void displayInstructions() {
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "Instructions:" << endl;
    cout << "1. The computer will think of a number between 1 and 100." << endl;
    cout << "2. You have 4 attempts to guess the number." << endl;
    cout << "3. After each guess, you'll receive a hint whether your number is too small or too large." << endl;
    cout << "4. After the game, you'll be asked whether you want to play again." << endl;
    cout << "Good luck!\n" << endl;
}

void playGame() {
    srand(time(0)); // Seed the random number generator
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess, attempts = 4;

    cout << "I have thought of a number between 1 and 100. Try to guess it!" << endl;

    for (int i = 1; i <= attempts; i++) {
        cout << "Attempt " << i << ": Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congratulations! You guessed the correct number: " << number << endl;
            return;
        } else if (guess < number) {
            cout << "Your number is too small. Try again!" << endl;
        } else {
            cout << "Your number is too large. Try again!" << endl;
        }
    }

    cout << "You've used all your attempts! The correct number was: " << number << endl;
}

int main() {
    char choice;

    do {
        displayInstructions(); // Show game instructions
        playGame();            // Play the game

        cout << "Do you want to play again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thanks for playing! Goodbye!" << endl;
    return 0;
}
