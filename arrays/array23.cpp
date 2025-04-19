// Codde frowin porblem
#include <iostream>
using namespace std;

int main()
{

    int list[10];
    int total;
    total = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << " Enter Vakue at index " << i << " =>";
        cin >> list[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        total += list[i];
    }
    float average;
    average = total / 10;

    cout << " The Total of the array is =>" << total << endl;
    cout << " The average of the array is =>" << average << endl;
    return 0;
}