#include <iostream>
using namespace std;
// Writing function of adding two arrays

void Add(int arr[][3], int arr2[][3], int arr3[][3], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }
}

int main()
{
    const int row = 3;
    const int col = 3;
    int list3[row][col];
    int list1[row][col];
    cout << " Input values of first array \n "; /*Getiing values for array1*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " at the index  " << i << j << ":";
            cin >> list1[i][j];
        }
    }

    int list2[row][col];
    cout << " Input values of second array \n "; /*Getiing values for array2*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " at the index  " << i << j << ":";
            cin >> list2[i][j];
        }
    }

    cout << " Display of both array array\n"; /*Displaying both arrays*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            cout << list1[i][j] << " ";
        }
        cout << "   ";

        for (int j = 0; j < col; j++)
        {
            cout << list2[i][j] << " ";
        }
        cout << endl;
    }

    Add(list1, list2, list3, row, col); /*used functions of adding two arrays*/

    cout << "\nSum of the two arrays: \n"; /*Displaying final array*/
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}