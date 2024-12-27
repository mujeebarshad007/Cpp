//  Gary J. Bronson Chapter  7.4 Q.No.7
#include <iostream>
using namespace std;
void reverse(int arr[][2])
{
    for (int j = 0; j < 2; j++)
    {
        int start = 0;
        int end = 5;

        while (start < end)
        {
            int temp = arr[start][j];
            arr[start][j] = arr[end][j];
            arr[end][j] = temp;

            start++;
            end--;
        }
    }
}
int main()
{

    int arr1[6][2] = {{1001, 62},
                      {949, 85},
                      {1050, 33},
                      {867, 125},
                      {346, 59},
                      {1025, 105}};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << "        ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    reverse(arr1);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << "        ";
        }
        cout << endl;
    }

    return 0;
}