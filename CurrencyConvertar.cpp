
// Write a currency-converter program that gives the user the option of converting 
// PLN (Polish Zloty) to EURO or EURO to PLN or PLN to USD or USD to PLN, 
// where 1 EUR = 4.6545 PLN and 1 USD = 4.1061 PLN average exchange rates from 2021-11-16. 
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number, choice;
    double PLNtoEURO, EUROtoPLN, PLNtoUSD, USDtoPLN;
    char answer;
    do
    {
        cout << "Enter your amount: ";
        cin >> number;
        cout << "1 To convert PLN to EURO" << endl;
        cout << "2 To convert EURO to PLN" << endl;
        cout << "3 To convert PLN to USD" << endl;
        cout << "4 To convert USD to PLN" << endl;
        cout << "Your choice is ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            PLNtoEURO = number * 0.21;
            cout << number << " PLN to EURO " << PLNtoEURO<<endl;
            break;
        case 2:
            EUROtoPLN = number * 4.625;
            cout << number << " EURO to PLN " << EUROtoPLN<<endl;
            break;
        case 3:
            PLNtoUSD = number * 0.24;
            cout << number << " PLN to USD " << PLNtoUSD<<endl;
            break;
        case 4:
            USDtoPLN = number * 4.12;
            cout << number << " USD to PLN " << USDtoPLN<<endl;
            break;
        }
    cout<<"Continue (Y/N)?";
    cin>>answer;
    cout<<endl;
    } while (answer == 'Y' || answer == 'y');

    return 0;
}