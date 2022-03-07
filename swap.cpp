#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

void random_array(int* a, int n, int p, int q);
void display(int *a, int n);

int main(){
    const int n = 4;
    int p,q, array;
    int a[n];
    cout<<"Enter the minmum limit of range: ";
    cin>>p;
    cout<<"Enter the maximum limit of range: ";
    cin>>q;

    random_array(a,n,p,q);
    display(a,n);
}

void random_array(int* a,int n, int p, int q){
    srand (time(NULL));
    int r = q-p;
    for (int i = 0; i < n; ++i)
    {
        a[i] = rand() % (q - p + 1) + p;
    }
    
}

void display(int *a, int n)
{
    for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
    cout<<endl;
}