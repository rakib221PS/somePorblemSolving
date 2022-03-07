// sum of give number digits
#include <iostream>

using namespace std;

int main(){
    int number, sum=0;
    cout<<"Please enter your number ";
    cin>>number;

    if (number <=0)
    {
        cout<<"Please enter natural number: ";
        cin>>number;
    }
    else
    {
        for (int i = 0; number>0; i++)
        {
            int remainder = number%10;
            sum = sum + remainder;
            number = number/10;
        }
        cout<<sum;
        
    }
    
    
}