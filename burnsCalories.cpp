// When you run on a treadmill, you burn 3.6 calories per minute. Write a program to display the 
// number of calories burned after 5, 10, 15, 20, 25 and 30 minutes. 
// MODIFICATION. Number of calories burned per minute should be given by the user, do not accept values less 
// than 1. 
#include <iostream>

using namespace std;

int main(){
    double calories, spendCalories;
    cout<<"Enter per minute calorie burning number: ";
    cin>>calories;

    for ( int i = 5; i <= 30; i=i+5)
    {
        spendCalories = calories * i;
        cout<<"Calories burning after "<<i<<" minutes "<<spendCalories<<endl;
    }

    return 0;
    
}