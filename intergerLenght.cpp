#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Please enter your number: ";
    cin>>n;

    int length = to_string(n).length();
    cout<<length<<endl;

    return 0;
}