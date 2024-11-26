#include <iostream>
using namespace std;
int main ()
{

double years, interestrate;

cout << " Enter the number of years funds are left on deposit = ";
cin >> years;

if ( years >= 5) 
    {
        interestrate = 0.040;
    }
else if ( years >= 4 )
    {
        interestrate = 0.035;
    }
else if ( years >= 3 )
    {
        interestrate = 0.030;
    } 
else if ( years >= 2 )
    {
        interestrate = 0.025;
    } 
else if ( years >=1 )
    {
        interestrate = 0.020;
    }
else 
    {
        interestrate = 0.015;
    }

    cout << " The interest rate of " << years << " is " << interestrate * 100 << "%" << endl;
return 0;

}