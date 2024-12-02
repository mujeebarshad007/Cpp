#include <iostream>
using namespace std;
int main()
{
    double metric, increament, feet;
    int conversion;
    cout << " Enter the staring metric value \n";
    cin >> metric;
    cout << " Enter the Number of conversions \n";
    cin >> conversion;
    cout << " Enter the Increament\n";
    cin >> increament;

    if (conversion > 10)
    {

        increament = 10;
        cout << " Now the increamant is 10\n";
    }
    cout << " Meter to Feet Table is Given as\n";
    cout << "================================\n";

    cout << " meter\tfeet" << endl;
    cout << " ============" << endl;
    for (int i = 0; i < conversion; i++)
    {
        feet = metric * 3.281;
        cout << "  " << metric << "\t" << feet << endl;
        metric = metric + increament;
    }
    return 0;
}