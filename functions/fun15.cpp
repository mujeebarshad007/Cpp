#include <iostream>
using namespace std;
void EvenPrint(int &, int &);
void EvenPrint(int &start, int &end)
{
    for (int i = start; i <= end; i++)

    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
}
void OddPrint(int &, int &);
void OddPrint(int &start, int &end)
{
    for (int i = start; i <= end; i++)

    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int start;
    int end;
    cout << " Enter the start of the display : ";
    cin >> start;
    cout << " Enter the end of the display : ";
    cin >> end;

    cout << " Even NUmbers are : ";
    EvenPrint(start, end);
    cout << endl;
    cout << " Odd NUmbers are : ";
    OddPrint(start, end);
    return 0;
}