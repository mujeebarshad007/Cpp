// Selection Sort Program
#include <iostream>
using namespace std;
int main()
{
    int i, j, loc, min, temp;
    const int size = 5;
    cout << " The size of Array is 5! " << endl;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        cout << " Enter the value at index " << i + 1 << " = ";
        cin >> arr[i];
    }

    cout << " The Data Before Sorting is .\n";

    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    for (i = 0; i < size - 1; i++)
    {
        min = arr[i];
        loc = i;
        for (j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                loc = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    cout << endl;
    cout << " The data After Sorting is . \n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}