#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " Enter the NumNumber for a Table = ";
    cin >> num;
    cout << "The Table is Given as " << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}