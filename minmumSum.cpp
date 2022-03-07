// Write a program that reads a positive integer M, and outputs the information how many positive 
// consecutive integers should be added to obtain the smallest sum greater than M. For example, the smallest sum 
// greater than 10 is 15 and is obtained by the addition of 5 consecutive positive integers, i.e. 1 2 3 4 5. 

#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter your number ";
    cin >> number;

    if (number <= 0)
    {
        cout << "Please enter a number greater than 0" << endl;
    }

    else
    {
        for (int i = 0; sum <= number; i++)
        {
            sum = sum + i;
        }
        cout << sum;
    }

    return 0;
}