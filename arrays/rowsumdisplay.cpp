// Program of output of single array having Multiple arrays rows sum
#include <iostream>
using namespace std;
int main()
{
    const int row = 3;
    const int col = 3;

    int arr[row][col];
    int rowsum[row] = {0};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter the value at the position " << i << j << endl; /*Getting input from user*/
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) /*Displaying the array*/
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++) /*Algorithm if finding row sum*/
        {
            rowsum[i] += arr[i][j];
        }
    }
    cout << " The Sum of Rows in one array is = ";
    for (int i = 0; i < row; i++)
    {
        cout << rowsum[i] << " ";
    }
    return 0;
}