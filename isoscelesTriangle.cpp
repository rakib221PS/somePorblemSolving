#include <iostream>

using namespace std;

int main(){
    double x,y,z;
    cout<<"Enter the x side length ";
    cin>>x;
    cout<<"Enter the y side length ";
    cin>>y;
    cout<<"Enter the z side length ";
    cin>>z;

    if (x==y||y==z){
        cout<<"The triangle is isosceles";
    }
    else{
        cout<<"The triangle is not isosceles";
    }

    return 0;
    
}