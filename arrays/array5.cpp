// Binary Searching in an array
#include <iostream>
using namespace std;
const int size = 5;

int main()
{
    int list[size];
    int num, ind, low, high, mid, i;
    bool found;
    for (i = 0; i < size; i++)
    {
        cout << "enter value into an array at index" << i << "=>";
        cin >> list[i];
    }
    cout << "origional array is\n";
    for (i = 0; i < size; i++)
    {
        cout << list[i] << ",\t";
    }
    cout << "\n Enter a number you want to search";
    cin >> num;

    low = 0;
    high = size - 1;
    found = false;
    while ((low <= high) && !(found))
    {
        mid = (low + high) / 2;
        if (list[mid] == num)
        {
            found = true;
            ind = mid;
            break;
        }

        if (list[mid] < num)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (found == true)
        cout << "Number is found at index " << ind;
    else
        cout << "Number Not found";

    return 0;
}