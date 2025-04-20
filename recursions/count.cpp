#include <iostream>
using namespace std;
int main()
{

    char a;
    int x;
    char ch;
    x = 0;
    do
    {
        cout << " Enter a " << endl;
        if (cin >> a)
        {
            x++;
        }
        cout << " Do you want more Inputs Press Y or N \n";
        cin >> ch;
    } while (ch == 'Y' || ch == 'y');
    cout << endl;
    cout << " The Total Count of this Variable is " << x << endl;
    return 0;
}