#include <iostream>

using namespace std;

void inputLocker(string *lockers, int n);
void outputLocker(string *lockers, int n);

int main()
{
    int n, on = 0;
    cout << "Enter the total number of locker: ";
    cin >> n;
    if (n > 1)
    {
        string lockers[n];
        inputLocker(lockers, n);
        outputLocker(lockers, n);
    }
    else
    {
        cout << "Invalid number of locker(You should Enter number more than 1)";
    }

    return 0;
}
// input locker on with index number.
void inputLocker(string *lockers, int n)
{
    for (int i = 0; i < n; ++i)
    {
        lockers[i] = "on";
    }
}
// output locker
void outputLocker(string *lockers, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << lockers[i] <<" ";
    }
}
