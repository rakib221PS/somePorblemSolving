// convert binary to decimal
#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long decimal_number = 0;
    string binary_number;
    cout<<"Enter your binary number ";
    cin>>binary_number;

    reverse(binary_number.begin(), binary_number.end());

    int size = binary_number.size();

    for (int i = 0; i < size; i++)
    {
        if (binary_number[i] == '1')
        {
            decimal_number = decimal_number + pow(2, i);
        }
        
    }
    cout<<"The decimal number is: "<<decimal_number<<endl;
    return 0;
}
