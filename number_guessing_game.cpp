#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int secretNumber, guess;
    
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    
    cout<< "Welcome to the Number Guessing Game!" << endl;
    cout<<"I have selected a number between 1 to 100. " << endl;
    
    do {
        cout<< "Enter Your Guess:";
        cin>> guess;
        
        if(guess > secretNumber){
            cout<< "Too High! Try again." << endl;
        }
        else if (guess < secretNumber) {
            cout<< "Too Low! Try again." << endl;
        }
        else {
            cout<< "Congratulations! You guessed the correct number." << endl;
        }
    } while(guess != secretNumber);
    return 0;
}