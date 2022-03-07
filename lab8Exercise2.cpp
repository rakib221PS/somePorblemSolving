// In a program, create an one-dimensional array of n random integers from the range [a, b], where
// n, a, b are given by the user. Compute and display the index of first occurrence of odd number in the array.

#include <iostream>

void createArray(int *array, int n, int a, int b);
void firstOddNumber(int *array, int n);
using namespace std;

int main(){
    int n , a, b;
    cout<<"Enter the length of the array:";
    cin>>n;
    if (n>0)
    {
        cout<<"Enter min limit:";
        cin>>a;
        cout<<"Enter max limit:";
        cin>>b;

        int array[n];
        createArray(array,n,a,b);
        firstOddNumber(array,n);
    }
    else
    {
        cout<<"Invalid number[Please Enter number is greater than 1]";
    }
    
    
}

void createArray(int *array, int n, int a, int b){
    for (int i = 0; i < n; i++)
    {
        int randomNumber = rand()%(b-a) + a;
        array[i] = randomNumber;
    }
    
}

void firstOddNumber(int *array, int n){
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    // cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2!=0)
        {
            cout<<"The frist odd number is "<<array[i]<<" with index "<<i;
            break;
        }
        
    }
    
}