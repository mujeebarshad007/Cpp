// Sorting of Array in Bubble sort
#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int arr[size];
    int temp = 0;

    // Code of putting values in index

    for (int i = 0; i < size; i++)
    {
        cout << " Enter Your Valus at index " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << " The array Before sorting is = \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    // Code of Bubble sort

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << " The array After sorting is = \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " \t";
    }
    cout << endl;
    return 0;
}