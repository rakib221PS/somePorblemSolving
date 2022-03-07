// length of positive number
#include <iostream>

using namespace std;

int main(){
int number,count=0;
cout<<"Enter your number ";
cin>>number;
int number1 = number;
int len;
if (number==0){
    cout<<"The length is 1"<<endl;
}
while(number1>0){
    number1 = number1 / 10;
    count++;
}
cout<<number<<" length is "<<count<<endl;
    return 0;
}