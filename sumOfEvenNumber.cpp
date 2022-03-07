#include <iostream>

using namespace std;

int main(){
    int number, sum=0;
    cout<<"Enter your number: ";
    cin>>number;
    for (int i = 2; i <= number; i=i+2)
    {
        sum = sum + i;
    }
    cout<<sum;
    
}