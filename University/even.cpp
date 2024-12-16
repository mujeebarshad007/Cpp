#include <iostream>
using namespace std;
int main ()
{

int num;

cout << " Enter Your Number = ";
cin >> num;

if ( num % 2 == 0)
    {
        cout << " The entered number " << num << " is " " Even " << endl;
    }
else 
    {

        cout << " The entered number " << num << " is " " Odd " << endl;
    }

return 0;
}