// Bindary searching in array
#include <iostream>
using namespace std;

void Binary(int list[], int n, int targ, int &ind, bool &found1)
{
    found1 = false;
    int mid;
    int st;
    int end;
    st = 0;

    end = n - 1;

    while (st <= end && !(found1))
    {
        mid = (st + end) / 2;

        if (list[mid] == targ)
        {
            found1 = true,
            ind = mid;
            break;
        }
        if (targ > list[mid])
        {
            st = mid + 1;
        }
        else

            end = mid - 1;
    }
}

int main()
{
    bool found;
    int index;
    int arr[6];
    int target;
    int size = 6;
    cout << " Enter the values of the array in Sorted Form: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    cout << " Enter the target you want to search :";
    cin >> target;
    Binary(arr, size, target, index, found);
    if (found == true)
    {
        cout << " It is found at the index " << index << endl;
    }
    else
    {
        cout << " It is  not found " << endl;
    }

    return 0;
}