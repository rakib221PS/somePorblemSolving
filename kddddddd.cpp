#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    const int x = 6;
    // cin >> x;
    // cout << "\n";
    int y[x] = { 0,1,3,4,5,6};
    srand(time(0));
    // for (int i = 0; i < x; i++)
    // { // first loop to input numbers
    //     cin >> y[i];
    // }
    for (int i = 0; i < x; i++)
    { // second loop to randomize position
        int random = rand() % x;
        int z = y[i];
        y[i] = y[random];
        y[random] = z;
    }
    cout << "\n\n";
    for (int i = 0; i < x; i++)
    { // third loop to output numbers
        cout << y[i] << endl;
    }
}