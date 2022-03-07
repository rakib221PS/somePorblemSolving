#include <iostream>

using namespace std;
#include <iomanip> // std::setprecision

int main()
{
    int n;
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0, sum10 = 0;
    cout << "Enter array length: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1 + rand() % 9;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case 1:
            sum1 = sum1 + 1;
            break;
        case 10:
            sum10 = sum10 + 1;
            break;
        case 2:
            sum2 = sum2 + 1;
            break;
        case 3:
            sum3 = sum3 + 1;
            break;
        case 4:
            sum4 = sum4 + 1;
            break;
        case 5:
            sum5 = sum5 + 1;
            break;
        case 6:
            sum6 = sum6 + 1;
            break;
        case 7:
            sum7 = sum7 + 1;
            break;
        case 8:
            sum8 = sum8 + 1;
            break;
        case 9:
            sum9 = sum9 + 1;
            break;
        }
    }
    cout<<endl;
    cout <<"1 : "<<sum1<<endl;
    for (int i = 0; i < sum1; i++)
    {
        cout<<"#";
    }
    cout<<endl;
    cout <<"2 : "<<sum2<<endl;
    cout <<"3 : "<<sum3<<endl;
    cout <<"4 : "<<sum4<<endl;
    cout <<"5 : "<<sum5<<endl;
    cout <<"6 : "<<sum6<<endl;
    cout <<"7 : "<<sum7<<endl;
    cout <<"8 : "<<sum8<<endl;
    cout <<"9 : "<<sum9<<endl;
    cout <<"10 : "<<sum10<<endl;
}