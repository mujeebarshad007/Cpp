//  Function of reversing an array using functions
#include <iostream>
using namespace std;
void Reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    const int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the value of the elements of the array at index " << i << endl;
        cin >> arr[i];
    }
    Reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}