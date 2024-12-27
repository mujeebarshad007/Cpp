//  Gary J. Bronson Chapter  7.4 Q.No.7
#include <iostream>
using namespace std;
void gradecheck(int arr[][5], int r, int co)
{
    int a, b, c, d, e;
    a = b = c = d = e = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < co; j++)
        {
            if (arr[i][j] >= 60 && arr[i][j] < 70)
            {
                a++;
            }
            else if (arr[i][j] >= 70 && arr[i][j] < 80)
            {
                b++;
            }
            else if (arr[i][j] >= 70 && arr[i][j] < 80)
            {
                c++;
            }
            else if (arr[i][j] >= 80 && arr[i][j] < 90)
            {
                d++;
            }
            else if (arr[i][j] >= 90)
            {
                e++;
            }
        }
    }
    cout << "The E grades are " << a << endl;
    cout << "The D grades are " << b << endl;
    cout << "The C grades are " << c << endl;
    cout << "The B  grades are " << d << endl;
    cout << "The A grades are " << e << endl;
}
int main()
{
    int row = 3;
    int col = 5;
    int list[3][5];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << " Enter value at the index  " << i << " =>";
            cin >> list[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
    gradecheck(list, row, col);
    return 0;
}