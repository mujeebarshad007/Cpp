#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;

int maxcolsum(int list[][3])
{
    int maxCol = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int colsum = 0;
        for (int j = 0; j < 3; j++)
        {
            colsum += list[j][i];
        }
        maxCol = max(maxCol, colsum);
    }
    return maxCol;
}

int main()

{
    int result;
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    result = maxcolsum(arr);
    cout << result << endl;

    return 0;
}
