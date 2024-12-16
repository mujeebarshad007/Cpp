#include <iostream>
using namespace std;
int main ()
{

double num;

cout << " Enter the Reynolds number = ";
cin >> num;
if ( num < 2000)
    {
        cout << " The Flow is Laminar Flow \n";
    }
else if ( num > 3000)
    {
        cout << " The Flow is Turbulent Flow \n";
    }
else if ( num >= 2000 && num <= 3000)
    {
        cout << " The Flow is Transitional Flow \n";
    }
return 0;
}