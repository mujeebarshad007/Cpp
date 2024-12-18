#include <iostream>
#include <climits>

using namespace std;
int getMax(int, int);
int getMax(int arr[], int size1)
{

    int maximum = INT_MIN;
    for (int i = 0; i < size1; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
int main()
{
    const int size = 5;
    int list[size];
    int result;
    cout << " Enter the value at " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << " at index : ";
        cin >> list[i];
    }
    result = getMax(list, size);
    cout << " The Maximum value in the array is " << result << endl;

    return 0;
}