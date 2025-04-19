// Linear searching in a 2D array
#include <iostream>
using namespace std;
void Search(int arr[][3], int target, int row, int col)
{
    bool found = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                found = true;
                row = i;
                col = j;
                break;
            }
        }
    }
    if (found == true)
    {
        cout << " Found the value at index " << row << col << endl;
    }
    else
    {
        cout << " NOt found" << endl;
    }
}
int main()
{
    int row = 3;
    int col = 3;
    int list[3][3];
    int size = 3;
    int target1;
    cout << " enter values of 3 by 3 matrix : ";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> list[i][j];
        }
    }
    cout << " Enter the target or key :\n";
    cin >> target1;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    Search(list, target1, row, col);

    return 0;
}