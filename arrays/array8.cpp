// Sum of Diagoal Elements
#include <iostream>
using namespace std;
int main()
{
    const int row = 3;
    const int col = 3;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter The value at index " << i << j << endl;
            cin >> arr[i][j];
        }
    }
    int sum = 0;

    cout << endl;

    // Printing in Square Form

    cout << " In Square Form it is like \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    cout << endl;
    cout << " The sum of the Diagonals Element is = " << sum << endl;
    return 0;
}