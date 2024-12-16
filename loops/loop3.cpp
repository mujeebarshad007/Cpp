#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char startch, endch;
    cout << " Enter the starting character = ";
    cin >> startch;
    cout << " Enter the Ending character = ";
    cin >> endch;

    while (startch > endch)
    {
        cout << "PLease Enter charcater that comes after first character" << endl;
        cout << "Enter the end character: ";
        cin >> endch;
    }
    cout << " the Table is given as" << endl;
    cout << " ======================" << endl;
    cout << " CHaracter\tDecimal\t OCtal\t HexaDecimal" << endl;
    for (char ch = startch; ch <= endch; ++ch)
    {
        cout << "  " << ch << "\t\t" << int(ch) << "    " << "\t " << oct << int(ch) << hex << "         " << int(ch) << endl;
        cout
            << dec;
    }

    return 0;
}