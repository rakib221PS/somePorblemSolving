// Membership in the club requires a fee of 2500 PLN. It is announced that this fee will increase by 4% 
// per year over the next 6 years. Write a program that displays the amount of expected fees for the next 6 years. 
// MODIFICATION. The percentage increase in fees should be given by the user, do not accept values less or equal 
// than 0% or greater than 10%. 
#include <iostream>

using namespace std;

int main(){
    double fees = 2500, percentage;
    cout<<"Enter the percentage ";
    cin>>percentage;

    if (percentage == 0 || percentage > 10)
    {
        cout<<"You should enter the percentage more than 0 or less then 11.";
    }
    else{
        for (int i = 0; i < 6; i++)
        {
            fees = fees+fees*(percentage/100);
            
        }
        cout<<"Fee after 6 years "<<fees<<endl;
    }
    
}