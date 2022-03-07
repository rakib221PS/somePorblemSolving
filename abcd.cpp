// create new array by adding two arrays same index value
#include <iostream>

using namespace std;

int input_c(int *a, int *b,int *c, int n);
int output_c(int *c, int n);

int main(){
    int c[5];
    int n = 5;
    int a[5] = {1,2,3,4,5};
    int b[5] = {1,2,3,4,5};
    input_c(a,b,c,n);
    output_c(c,n);

    return 0;
}

int input_c(int *a, int *b, int *c, int n) {
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    
}

int output_c(int *c, int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<c[i]<<" ";
    }
    
}

