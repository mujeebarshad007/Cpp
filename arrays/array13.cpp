#include <iostream>
using namespace std;
void linS(int arr[], int sz, int targt)
{
    bool found = false;
    int j;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == targt)
        {
            found = true;
            j = i;
            break;
        }
    }
    if (found == true)
    {
        cout << " The value is searched and it is at the index " << j << endl;
    }
    else
    {
        cout << "  Not found at any index in the array\n";
    }
}
int main()
{
    int target;
    int arr[] = {
        4,
        3,
        41,
        232,
        12,
        54,
    };
    int size = 6;
    cout << " Enter The value of the target you want to search : ";
    cin >> target;
    linS(arr, size, target);
}