#include <iostream>

using namespace std;
int main()
{
  double fuel_consumption;
  double kilometres;
  double kilometres_Per_litre;
  double total_kilometers = 0;
  double total_litre = 0;
  double total_av_litre;
  char answer;
  do
  {
    cout << "Enter fuel consumption" << endl;
    cin >> fuel_consumption;
    total_litre = total_litre + fuel_consumption;
    cout << "Enter the number of kilometres travelled" << endl;
    cin >> kilometres;
    total_kilometers = total_kilometers + kilometres;
    kilometres_Per_litre = kilometres / fuel_consumption;
    cout << "It can go " << kilometres_Per_litre << " kilometers Per litre" << endl;
    cout << "Continue ? (y or Y or n or N): ";
    cin >> answer;
  } while (answer == 'Y' || answer == 'y');
  cout<<total_kilometers<<endl;
  cout<<total_litre<<endl;
  if (answer == 'N' || answer == 'n')
  {
    total_av_litre = total_kilometers / total_litre;
    cout << "The total average kilometers is after providing all information " << total_av_litre << endl;
  }
  return 0;
}