#include <iostream>
using namespace std;
int main ()
{


char status;


cout << " Enter Your Salary Status \n ";
cout << "( Enter S for senior and j for junior) = ";
cin >> status;

if ( status == 's' || status == 'S')
    {
        cout << " Senior SalesPerson salary is 800$ a week " << endl;
    }
else if ( status == 'j' || status == 'J')

    {
        cout << " Junior SalesPerson salary is 500$ a week " << endl;
    } 

else 
    {
        cout << " Your input is invalid ";
    }

return 0;

}