// dudeny number

#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int limit = 7, i = 0;
    int a[7];
    int Dudeny = 1, sum = 0, reversedNumber = 0, remainder;
    int checkDudeny = Dudeny;
    while (true)
    {
        

        while (checkDudeny != 0)
        {
            remainder = checkDudeny % 10;
            // reversedNumber = reversedNumber*10 + remainder;
            sum = sum + remainder;
            checkDudeny = checkDudeny / 10;
        }
        // double sdudeny = pow(Dudeny, 0.3);
        double sdudeny = cbrt(Dudeny);
        cout<<i<<" "<<Dudeny<<" "<<sdudeny<<" "<<sum<<" "<<endl;
        if (sum == sdudeny)
        {
            a[i] = Dudeny;
            i = i + 1;
            if (i == 7)
            {
                break;
            }
            
        }
        checkDudeny = 0;
        sum = 0;
        sdudeny = 0;
        Dudeny = Dudeny + 1;
        checkDudeny = Dudeny;
    }

    for (int i = 0; i < limit; i++)
    {
        cout<<a[i]<<" ";
    }
    
}