#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    
    char playAgain = 'y';
    
    while (playAgain == 'y' || playAgain == 'Y') {
        int secretNumber = rand() % 100 + 1; 
        int guess = 0;
        int attempts = 0;
        bool won = false;
        
        cout << "\n========================================" << endl;
        cout << "   WELCOME TO NUMBER GUESSING GAME" << endl;
        cout << "========================================" << endl;
        cout << "I have thought of a number between 1 and 100." << endl;
        cout << "Can you guess it?" << endl;
        cout << "----------------------------------------" << endl;
        
        while (!won) {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            
            if (guess < 1 || guess > 100) {
                cout << "Please enter a number between 1 and 100!" << endl;
                attempts--; 
                continue;
            }
            
            if (guess == secretNumber) {
                cout << "\n*** CONGRATULATIONS! YOU WON! ***" << endl;
                cout << "The secret number was: " << secretNumber << endl;
                cout << "You took " << attempts << " attempt(s) to guess it!" << endl;
                won = true;
            } else if (guess < secretNumber) {
                cout << "Too LOW! Try a higher number." << endl;
            } else {
                cout << "Too HIGH! Try a lower number." << endl;
            }
        }
        
        cout << "\n----------------------------------------" << endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }
    
    cout << "\n========================================" << endl;
    cout << "   Thanks for playing! Goodbye!" << endl;
    cout << "========================================" << endl;
    
    return 0;
}
