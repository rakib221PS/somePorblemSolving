#include <iostream>

using namespace std;

int main(){
    double temperature, farenhite, kelvin;
    cout<<"Enter your temperature ";
    cin>>temperature;

    farenhite = 32+(9*temperature)/5;
    cout<<farenhite<<endl;

    kelvin = temperature + 273.15;
    cout<<kelvin<<endl;

    return 0;

}