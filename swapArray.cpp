#include <iostream>

using namespace std;

int reverseArray(int *a, int *b, int n);
int displayReverseArray(int *a, int *b, int n);

int main(){
    int n = 5;
    int a[5] = {0,1,2,3,4};
    int b[5] = {5,6,7,8,9};
    
    // for (int i = 0; i < n; i++)
    // {
    //     a[i] = b[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    reverseArray(a,b,n);
    cout<<"-------------------"<<endl;
    displayReverseArray(a,b,n);
    

}

int reverseArray(int *a, int *b, int n){
    int c[5];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    
}

int displayReverseArray(int *a, int *b, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t"<<b[i]<<endl;
    }
    
}