#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void inputv(int list[][3], int list2[][3])
{
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << " Enter the value of first matrix at position " << i << j << endl;
            cin >> list[i][j];
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cout << " Enter the value of first matrix 2 at position " << i << j << endl;
            cin >> list2[i][j];
        }
    }
}
void Display(int list[][3], int list2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << list2[i][j] << " ";
        }
        cout << endl;
    }
}
void Transpose(int list[][3], int list2[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            list[i][j] = list[j][i];
            list2[i][j] = list2[j][i];
        }
    }
}

int main()
{
    int arr1[3][3];
    int arr2[3][3];
    inputv(arr1, arr2);
    Display(arr1, arr2);
    cout << endl;
    cout << endl;
    cout << " The Tranpose of both matrices is " << endl;
    cout << endl;
    cout << endl;
    Transpose(arr1, arr2);
    Display(arr1, arr2);
    return 0;
}