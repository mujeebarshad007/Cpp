#include <iostream>
using namespace std;
void Trans(int arr[][3], int arr2[][3], int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr2[j][i] = arr[i][j];
        }
    }
}
int main()
{
    const int row = 3;
    const int col = 3;

    int list[row][col];
    int list1[row][col];
    cout << endl;
    cout << " Enter the value of the array 1\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> list[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    Trans(list, list1, row, col);
    cout << " Displaying the transpose of array \n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}