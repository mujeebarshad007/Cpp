#include <iostream>
using namespace std;

int main()
{
    float amount[5];
    float price[] = {
        9.92,
        6.32,
        12.63,
        5.95,
        10.29,
    };
    float unit[5];
    float tp, tu, ta;

    tp = tu, ta = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << " Enter value at unit " << i + 1 << endl;
        cin >> unit[i];
    }

    for (int i = 0; i < 5; i++)
    {
        amount[i] = price[i] * unit[i];
        tp += price[i];
        tu += unit[i];
        ta += amount[i];
    }

    cout << "-------------------------------------------------------" << endl;
    cout << " price " << "\t\t" << "units" << "\t\t" << "Amount" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << price[i] << "\t\t" << unit[i] << " \t\t  " << amount[i] << endl;
    }
    cout << " Total price " << "\t\t" << " Total units" << "\t\t" << " Total Amount" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << tp << "\t\t\t" << tu << " \t\t\t  " << ta << endl;

    return 0;
}