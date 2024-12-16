// Printing Two Dimensional Array
#include <iostream>
using namespace std;
int main()
{
    int list[4][3] = {{2, 3, 4},
                      {4, 3, 6},
                      {7, 8, 13},
                      {89, 12, 45}};
    for (int i = 0; i < 4; i++)

    {

        for (int j = 0; j < 3; j++)

        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}