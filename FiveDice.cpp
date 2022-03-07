// Write a program that simulates the rolling of five dice and prints "Yahtzee" if all five dice are the 
// same; otherwise it should print "Try again.". In a program define the appropriate functions. Test the functions in 
// a suitably defined main program

#include <iostream>

using namespace std;

int diceInput(int *c, int a, int b, int n);
int diceOutput(int *c, int n);

int main(){
    int n = 6;
    int a = 1;
    int b = 6;
    int c[6];

    diceInput(c,a,b,n);
    diceOutput(c,n);
}

int diceInput(int *c, int a, int b, int n) {
    for (int i = 0; i < n; i++)
    {
        c[i] = a + rand() % (b-a);
    }
    
}

int diceOutput(int *c, int n) {
    int a = c[0], count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a == c[i+1])
        {
            count = count + 1;
            if (count == n)
            {
                cout<<"Yahtzee"<<endl;
                break;
            }
            
        }
        else
        {
            cout<<"Try again"<<endl;
            break;
        }
        
        
    }
    
}