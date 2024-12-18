#include <iostream>
using namespace std;
void(int arr1[][col], int arr2[][col], int arr3[][col], int r, int c;)
{
    for (int i = 0; i < r; i +=)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[][c] =
        }
    }
}
int main()
{
    int row;
    int col;
    cout << " Enter the number of row for the both arrays :";
    cin >> row;
    cout << " Enter the number of col for the both arrays :";
    cin >> col;
    int list1[row][col];
    int list2[row][col];
    cout << endl;
    cout << " Enter the value of thr array 1\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> list1[i][j];
        }
    }
    cout << endl;
    cout << " Enter the value of thr array 2\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> list2[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list1[i][j] << " ";
        }
        cout << "    ";
        for (int j = 0; j < col; j++)
        {
            cout << list2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}