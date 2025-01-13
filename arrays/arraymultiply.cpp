#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void multiplyelem(int list[][3], int list1[][3], int list2[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            list2[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {

                list2[i][j] = list[i][j] * list1[j][i];
            }
        }
    }
}
int main()
{
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Enter thee value of the array at the index " << i << j << endl;
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " Enter thee value of the array2 at the index " << i << j << endl;
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    multiplyelem(arr, arr2, arr3);

    cout << endl;
    cout << " The arrays after multiplication are " << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr3[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}