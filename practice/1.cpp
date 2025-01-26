#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{

    int arr1[10];
    int arr2[10];
    int arr3[10];

    for (int i = 0; i < 10; i++)
    {
        cout << " Enter Value at the index " << "[" << i << "]" << endl;
        cin >> arr1[i];
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << " The Array is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < 10; i++)
    {
        arr2[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = 0;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] > 0 || arr1[i] == 0)
        {
            arr2[i] = arr1[i];
        }
        else if (arr1[i] < 0)
        {
            arr3[i] = arr1[i];
        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << " The Positive array is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << " The Negative array is " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}