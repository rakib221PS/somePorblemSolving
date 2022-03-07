#include <iostream>
using namespace std;

int main()
{
    char answer;
    do
    {
        int number, n, sum = 0;
        cout << "Enter your favorite number which is greater than 0: ";
        cin >> number;
        n = number;
        if (number > 0)
        {
            while (number > 0)
            {
                int remainder = number % 10;
                sum = (sum * 10) + remainder;
                number = number / 10;
            }
            if (n == sum)
            {
                cout << n << " is Palindrome" << endl;
            }
            else
            {
                cout << n << " is not Palindrome" << endl;
            }
        }
        else
        {
            cout << "You have to be Enter Positive integer number " << endl;
        }
        cout << "Continue ?(Y/N or y/n): ";
        cin >> answer;
    } while (answer == 'Y' || answer == 'y');
    return 0;
}