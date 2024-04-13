#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    bool correct = false;
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n";
    while (!correct) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the correct number.\n";
            correct = true;
        } else if (guess < randomNumber) {
            cout << "Too low. Try again.\n";
        } else {
            cout << "Too high. Try again.\n";
        }
    }

    return 0;
}

