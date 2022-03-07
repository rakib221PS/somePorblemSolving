#include <iostream>

using namespace std;

int main()
{
    int number;
    int i=1;
    cout<<"Enter integers, 0 stops reading.\n";
    do
    {
        cout<<"NUMBER "<<i<<": ";
        cin>>number;
        ++i;
    }
    while(number!=0);
    return 0;
}