// Write a program that reads a positive at most 6-digit integer and then checks whether all digits are 
// equal.

#include <iostream>

using namespace std;

int main(){
    int number;
    cout<<"Enter number ";
    cin>>number;
    bool answer = true;
    int current_digit, digit;
     current_digit = number % 10;
    while(number > 0){
        
        number = number / 10;
        if (number == 0)
        {
            /* code */
            break;
        }
        
         digit = number % 10;
        if (digit!=current_digit)
        {
            // cout<<"No"<<endl;
            answer = false;
            break;
        }
        else
        {
            current_digit = digit;
            // cout<<"Yes"<<endl;
        } 
    }
    if (answer == true)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}