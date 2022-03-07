#include <iostream>

using namespace std;

void inputLocker(string *lockers, int n);
// void outputLocker(string *lockers, int n);
void toggleLocker(string *lockers, int n);
// void outputAfterToggleLocker(string *lockers, int n);
void countOpenLockers(string *lockers, int n, int on);

int main()
{
    int n, on = 0;
    cout << "Enter the total number of locker: ";
    cin >> n;
    if (n > 1)
    {
        string lockers[n];
        inputLocker(lockers, n);
        // outputLocker(lockers, n);
        // cout << endl;
        toggleLocker(lockers, n);
        // outputAfterToggleLocker(lockers, n);
        // cout << endl;
        countOpenLockers(lockers, n, on);
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
// void outputLocker(string *lockers, int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         cout << lockers[i] << " ";
//     }
// }
// toggle locker which number are even and multiple of 3,4,5.....n
void toggleLocker(string *lockers, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 2; j <= n; ++j)
        {
            if ((i + 1) % j == 0)
            {
                if (lockers[i] == "on")
                {
                    lockers[i] = "off";
                }
                else{
                    lockers[i] = "on";
                }
            }
        }
    }
}
// output locker situation after toggle
// void outputAfterToggleLocker(string *lockers, int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         cout << lockers[i] << " ";
//     }
// }
// count total on locker after toggle
void countOpenLockers(string *lockers, int n, int on)
{
    for (int i = 0; i < n; ++i)
    {
        if (lockers[i] == "on")
        {
            on++;
        }
    }
    cout << "Total open locker: " << on;
}