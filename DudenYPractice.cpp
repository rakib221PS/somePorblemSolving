#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n = 512, sum = 0;
    double k = 0.3;
    int deduny = n;
    while(deduny != 0){
        int ramaider = deduny % 10;
        sum = sum + ramaider;
        deduny = deduny/10;
    }
    cout<<sum<<endl;

    double sdeduny = pow(n,0.3);
    cout<<sdeduny<<endl;
    if (sum==sdeduny)
    {
       cout<<deduny<<endl; 
    }
    else
    {
        cout<<"hello";
    }
    
    
}