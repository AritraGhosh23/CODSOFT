// Number Guessing Game
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "\n\t\t\tWelcome to Number Guessing Game" << endl;
    cout << endl;
    int guessnum, realnum;
    srand(time(0));             // seeding random number generator
    realnum = rand() % 100 + 1; // generating a random no between 1 and 100
    int count = 0;              // initialising count variable as 0
    do
    {
        cout << "Enter your guess: " << endl; // taking input from user
        cin >> guessnum;
        count++;
        if (guessnum < realnum)
            cout << "Your guess is too low. Try again." << endl;
        else if (guessnum > realnum)
            cout << "Your guess is too high. Try again." << endl;
        else
            cout << "Congratulations! You guessed the right answer in " << count << " tries" << endl;

    } while (guessnum != realnum); // loop stops once the user guesses the number correctly
    return 0;
}