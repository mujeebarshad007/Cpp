#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{

    int arr[10] = {-1, 0, 1, 2, -1, 4};
    int arr1[10];
    int arr2[10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    if (arr[i] != arr[j] && arr[i] != arr[k] && arr[j] != arr[k])
                    {
                        arr1[k] = arr[k];
                        arr2[k] = arr[j];
                    }
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr1[i] << " ";
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << arr2[i] << " ";
    // }
    return 0;
}