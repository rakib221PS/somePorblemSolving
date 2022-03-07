#include <iostream>
#include <ctime> ///for time
#include <iomanip>

using namespace std;

int main()
{
    srand(time(nullptr));///here at least c++11 standard is necessary
    int a=rand();
    cout<<setw(32)<<"Random number from [0,"<<RAND_MAX<<"]: "<<a<<endl;
    a=rand()%201;
    cout<<setw(40)<<"Random number from [0,200]: "<<a<<endl;
    a=-100+rand()%201;
    cout<<setw(40)<<"Random number from [-100,100]: "<<a<<endl;
    double b=(-100+rand()%201)/10.0;
    double c = -10+rand()%11;
    cout<<setw(40)<<"Random number from [-10,10]: "<<b<<" "<<c<<endl;
    return 0;
}