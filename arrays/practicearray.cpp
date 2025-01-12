// Finding Number of duplicate items
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>

using namespace std;
void dupicateCount(int list[], int n)
{
    int count;
    count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (list[i] == list[j])

            {
                count++;
            }
        }
    }
    cout << " The number of the duplicate items are " << count << endl;
}
int main()
{
    int size = 10;
    int arr[size] = {20, 30, 1, 12, 30, 12, 16, 1, 20, 9};
    cout << " The original array is give as : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    dupicateCount(arr, size);
    return 0;
}