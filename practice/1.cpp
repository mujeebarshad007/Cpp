#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the value at the index " << i + 1 << " -> ";
        cin >> arr[i];
    }

    int st = 0;
    int end = size - 1;
    while (st < end)
    {
        int temp;
        temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    cout << " the reverse eof the elements of the array are given as " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}