// Program for finding negative number in an array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << " Enter The size of array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the numbers in array at index " << i << " = ";
        cin >> arr[i];
    }
    cout << " The negative number in the array is : ";

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}