#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{
    int tar = 10;
    const int size = 6;

    int arr[size] = {5,
                     2,
                     7, 9, 20, 5};

    int c = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == tar)
            {

                c = 1;
                break;
            }
        }
    }
    if (c == 1)
    {
        cout << " found" << endl;
    }
    else
    {
        cout << " not found " << endl;
    }
    return 0;
}