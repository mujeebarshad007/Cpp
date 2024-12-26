#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout << " Enter the row of the matrix 1 :";
    cin >> row;
    cout << " Enter the Column of the matrix 2 :";
    cin >> col;
    int arr1[row][col];
    int arr2[row][col]; /*Initializinng arrays*/
    int arr3[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter matrix 1 value at index " << i << " =>"; /*Input array1*/
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter matrix 2 value at index " << i << " =>"; /*Input array2*/
            cin >> arr2[i][j];
        }
    }

    // Displaying both arrays side by side

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\t\t";
        for (int k = 0; k < col; k++)
        {
            cout << arr1[i][k] << " ";
        }

        cout << "   " << endl;
    }

    // Logic of their multiply

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) /*Displaying final array*/
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}