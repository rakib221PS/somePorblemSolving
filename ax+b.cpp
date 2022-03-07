#include <iostream>

using namespace std;

int main(){
    double a,b,x;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;

    if (a==0)
    {
        if (b==0)
        {
            cout<<"identity equation"<<endl;
        }
        else{
            cout<<"contrary equation. that means no solution"<<endl;
        }
        
    }
    else
    {
        x = -b/a;
        cout<<"The solution is "<<x<<endl;
    }
    return 0;  
}