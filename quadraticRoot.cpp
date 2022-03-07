// Write a program that solves the quadratic equation of the form ax2+bx+c=0 with integer coefficients 
// given by the user.
#include <iostream>

using namespace std;

int main(){
    double a, b, c, root1, root2, root_part, denom;
    cout<<"Enter a ";
    cin>>a;
   
    cout<<"Enter b ";
    cin>>b;

    cout<<"Enter c ";
    cin>>c;

    root_part = (b*b-4*a*c);
    denom = 2*a;

    root1 = (-b + root_part)/denom;
    root2 = (-b - root_part)/denom;

    cout << root1 << " and " <<root2 << endl;

    return 0;
}