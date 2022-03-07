// Write a program to have a person guess a secret number. Let the range of valid 
// secret numbers be from 0 to 100. Let the user have at most 7 tries. Tell the user if the user
// number is too large or too small when compared with a secret number or a secret number has 
// been guessed. After each attempt inform the user how many chances to guess a secret number
// is left.

// Write a program to have a person guess a secret 
// number. Let the range of valid secret numbers be from A to B, where A and B are some 
// random numbers. Let the user have at most N tries, where N is positive random number. Tell 
// the user if the user number is too large or too small when compared with a secret number or a 
// secret number has been guessed. After each attempt inform the user how many chances to 
// guess a secret number is left

// Add to Exercise 4, the possibility to 
// go to next level of guessing a secret new number, provided the secret number of current level 
// is guessed. One can assume that in the next level the user has reduced by half the number of 
// tries. The last possible number of tries is 1. Unsuccessful guessing finishes the game
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand(time(nullptr));
    int n, A, B;
    cout << "Enter your limit of random number: ";
    cout << "A= ";
    cin >> A;
    cout << "B= ";
    cin >> B;
    char answer;
    if (A < B)
    {
        do
        {
            cout << "Enter your guess number between 10 and 100: ";
            cin >> n;
            int randomNumber = rand() % (B - A) + A;
            if (n == randomNumber)
            {
                cout << "Random number and guessed number is has matched" << endl;
                cout<<"Random number is: "<<randomNumber << endl;
            }
            else if (n < randomNumber)
            {
                cout << "Guessed number is smaller than randomNumber" << endl;
                cout<<"Random number is: "<<randomNumber << endl;
            }
            else
            {
                cout << "Guessed number is bigger than randomNumber" << endl;
                cout<<"Random number is: "<<randomNumber << endl;
            }
            cout<<"Do you want to continue (Y/N)?";
            cin>>answer;
        } while (answer == 'Y' || answer == 'y');
    }
    else
    {
        cout << "Please Enter B is greater than A" << endl;
    }
}