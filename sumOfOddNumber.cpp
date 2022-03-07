#include <iostream>

using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter the limit: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum+2*i-1;
    }
    cout<<n<<" initial odd numbers sum is "<<sum;
    
    return 0;
}