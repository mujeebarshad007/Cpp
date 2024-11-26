#include <iostream>
using namespace std;
int main ()
{
double money, yearsnum, interestrate;

cout << "Enter Your money Amount = ";
cin>> money;
cout << "Enter number of years = ";
cin>> yearsnum;

if ( yearsnum > 5)
    {
    interestrate = money * 0.045;
    } 
else 
    {
    interestrate = money * 0.03;
    }

cout << " The Interest Rate on " << money << " is " << interestrate << endl;
return 0;
}