#include <iostream>
using namespace std;
int main ()
{
int year;

cout << " Enter Your year = ";
cin >> year;

 if ((year % 400 == 0 &&  year % 100 != 0) || ( year % 4 == 0))
    {
        cout << " The Entered year " << year << " is " " Leap Year " << endl;
    }
else 
    {

        cout << " The Entered year " << year << " is not a " " Leap Year " << endl;
    }
return 0;
}