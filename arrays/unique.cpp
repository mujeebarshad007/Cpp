#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{
    bool c = true;
    int a;
    int arr[5] = {1, 1, 1, 3, 3};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                c = false;
            }
            else
            {
                c = true;
                a = i;
            }
        }
    }
    if (!c)
    {
        cout << " Yes the Number " << a << " is Unique" << endl;
    }
    else
    {
        cout << " No Unique Number Found" << endl;
    }
    return 0;
}