#include <iostream>
#include <ctime>
using namespace std;

int inputArray(int *a, int x);
int outputArray(int *a, int x);
int randomOrder(int *a, int x);
int outputArrayRandomOrder(int *a, int x);

int main()
{
    int x;
    cout << "Enter your array limit: ";
    cin >> x;
    int a[x];
    inputArray(a, x);
    outputArray(a, x);
    cout<<endl;
    randomOrder(a,x);
    outputArrayRandomOrder(a, x);
}

int inputArray(int *a, int x){
    for (int i = 0; i < x; i++)
    {
        cout << "Enter array element of a" << i << ": ";
        cin >> a[i];
    }
}

int outputArray(int *a, int x){
    for (int i = 0; i < x; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int randomOrder(int *a, int x){
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        int b = a[i];
        int randomNumber = rand() % x;
        a[i] = a[randomNumber];
        a[randomNumber] = b;
    }
    
}

int outputArrayRandomOrder(int *a, int x){
    for (int i = 0; i < x; i++)
    {
        cout<<a[i]<<" ";
    }
    
}