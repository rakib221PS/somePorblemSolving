#include <iostream>

using namespace std;

int main(){
    int m,n;
    cout<<"Multiplication number: ";
    cin>>m;
    cout<<"Multiplication table limit: ";
    cin>>n;

    for (int i = 0; i <=n; i++)
    {
        cout<<m<<"X"<<i<<" = "<<m*i<<endl;
    }
    return 0;
}