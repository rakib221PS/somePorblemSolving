// Write a program that reads a positive at most 5-digit integer, and creates a new integer by adding one 
// more digit at the end. The last digit so-called checksum is the remainder in division by 10 of the sum of the digits 
// of the integer given by the user. For example from 123 we should get 1236, from 88 we should get 886.
#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cout<<"Enter your number: ";
    cin>>n;
    int number = n;
    if (n<0 || n==0){
        cout<<"Please Enter natural number: ";
    }
    else if(to_string(n).length() > 5){
        cout<<"You have to enter digit up to 5";
    }
    else{
        while (n>0)
        {
            int currentLastDigit = n%10;
            n = n/10;
            sum = sum + currentLastDigit;
        }
        // cout<<sum<<endl;
        int sumLastDigit = sum % 10;
        // cout<<sumLastDigit;
        string str1 = to_string(number);
        string str2 = to_string(sumLastDigit);

        string finalNumber = str1 + str2;
        cout<<finalNumber;
    }
    return 0;
}