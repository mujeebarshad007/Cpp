#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void inputv(int list[][3])
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << " Enter the value of first matrix at position " << i << j << endl;
            cin >> list[i][j];
        }
    }
}
void Display(int list[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << list[i][j] << " ";
        }

        cout << endl;
    }
}
void checkIdentity(int list[][3])
{
    bool found = false;
    bool new1 = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (i == j)
            {
                found = true;
            }
            if (found == true)
            {
                if (list[i][j] == 1)
                {
                    new1 = true;
                }
            }
        }
    }
    if (!new1)
    {

        cout << " It is  a identity matrix " << endl;
    }
    else
    {
        cout << " IT is not a identity matrix " << endl;
    }
}
int main()
{
    int arr1[3][3];
    inputv(arr1);
    Display(arr1);
    checkIdentity(arr1);
    return 0;
}