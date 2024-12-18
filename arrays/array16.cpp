#include <iostream>
using namespace std;

void sq(int arr[][4], int r, int c)
{

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = arr[i][j] * arr[i][j];
        }
    }
}
int main()
{
    const int row = 4;
    const int col = 4;
    int list[row][col];
    cout << " Input values :\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> list[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }

    sq(list, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}