// Write a program that requires the user to input a correct date (as three numbers denoting day, month 
// and year) and then computes how many days have passed since the beginning of the year. (In the first approach 
// assume that the date is correct. In the second approach check whether a date is correct) 

#include <iostream>

using namespace std;

int main(){
    int d1, m1, y1, d2, y2, m2;
    cout << "Enter first set of date"<<endl;
    cout<<"date 1: ";
    cin>>d1;
    cout<<"month 1: ";
    cin>>m1;
    cout<<"year 1: ";
    cin>>y1;

    cout<<"Enter second set of date"<<endl;
    cout<<"date 2: ";
    cin>>d2;
    cout<<"month 2: ";
    cin>>m2;
    cout<<"year 2: ";
    cin>>y2;

    if(d1<=31 && m1<=12){
        if(m1==2){
            if(d1<=30){
                cout<< d1<<"."<<m1<<"."<<y1<<" is correct date"<<endl;
            }
            else{
                cout<<d1<<"."<<m1<<"."<<y1<<" is not correct date";
            }
        }
        else{
            cout<<d1<<"."<<m1<<"."<<y1<<" is correct date"<<endl;
        }
    }
    else{
        cout<<d1<<"."<<m1<<"."<<y1<<" is not correct date";
    }
// for second set
        if(d2<=31 && m2<=12){
        if(m2==2){
            if(d2<=30){
                cout<< d2<<"."<<m1<<"."<<y2<<" is correct date"<<endl;
            }
            else{
                cout<<d2<<"."<<m2<<"."<<y2<<" is not correct date";
            }
        }
        else{
            cout<<d2<<"."<<m2<<"."<<y2<<" is correct date"<<endl;
        }
    }
    else{
        cout<<d2<<"."<<m2<<"."<<y2<<" is not correct date";
    }
// date comparison
    if(y1>y2){
        cout<<d1<<"."<<m1<<"."<<y1<<" is larger"<<endl;
    }
    else if(y1==y2){
        if(m1>m2){
            cout<<d1<<"."<<m1<<"."<<y1<<" is larger"<<endl;
        }
        else if(m1==m2){
            if(d1>d2){
                cout<<d1<<"."<<m1<<"."<<y1<<" is larger"<<endl;
            }
            else if(d1==d2){
                cout<<"Both date is equal";
            }
            else{
                cout<<d1<<"."<<m1<<"."<<y1<<" is not larger"<<endl;
            }
        }
        else{
            cout<<d1<<"."<<m1<<"."<<y1<<" is not larger"<<endl;
        }
    }
    else{
        cout<<d1<<"."<<m1<<"."<<y1<<" is not larger"<<endl;
    }
    return 0;
}