// Write a program that gets from the user one integer. The program should check and display the
// information whether the number is even or not, and the information whether the number is positive or
// negative. If zero is entered, only the message "zero" should be displayed on the screen

#include <iostream>
int OddAndEvenAndSomeOperations(int *array);
int highestValue(int *array,int m);
using namespace std;

int main(){ 
    // int *array = new int[];
    int array[] = {0};
    int m = OddAndEvenAndSomeOperations(array);
    // cout<<m;
    // for (int j = 0; j < m; j++)
    // {
    //     cout<<array[j]<<" ";
    // }
    cout<<"The highest value is "<<highestValue(array,m);
    
    // delete[] array;
}

int OddAndEvenAndSomeOperations(int *array){
    int number,numOfEven = 0, numOfOdd = 0,i=0,sumOfOddNum = 0;
    char answer;
    do
    {
        cout<<"Enter your number: ";
        cin>>number;
        array[i] = number;
        if (number % 2 == 0 && number<0)
        {
            cout<<number<<" is even and negative"<<endl;
            ++numOfEven;
        }
        else if (number % 2 == 0 && number>0){
            cout<<number<<" is even and positive"<<endl;
            ++numOfEven;
        }
        else if (number % 2 != 0 && number>0){
            cout<<number<<" is odd and positive"<<endl;
            ++numOfOdd;
            sumOfOddNum = number + sumOfOddNum;
        }
        else if (number % 2 != 0 && number<0){
            cout<<number<<" is odd and negative"<<endl;
            ++numOfOdd;
            sumOfOddNum = number + sumOfOddNum;
        }
        else{
            cout<<"Zero"<<endl;
            ++numOfEven;
        }
        ++i;
        
        if (number == 0){
            answer = 'N';
        }
        else{
            cout<<"Do you want to continue? ";
            cin>>answer;
        }
        
        
        
    } while (answer == 'Y' || answer == 'y');
    int n = i;
    cout<<"Total odd Number is "<<numOfOdd<<" and Total even number is "<<numOfEven<<endl;
    cout<<"Average of Odd number is "<<(sumOfOddNum/numOfOdd)<<endl;
    return n;  
}

int highestValue(int *array, int m){
    int highestNumber = array[0];
    for (int i = 0; i < m; i++)
    {
        if (array[i]>highestNumber)
        {
            highestNumber = array[i];
        }
        
    }
    return highestNumber;
    
}