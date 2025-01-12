// Deleting elemnt in an array
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void del(int, int &, int);
void del(int list[], int &n, int n2)
{
    for (int i = n2; i < n - 1; i++)
    {
        list[i] = list[i + 1];
    }
    n--;
}
int main()
{
    int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the value for the array  at index " << i + 1 << endl;
        cin >> arr[i];
    }
    int target;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << " Enter the position index you want to delete \n";
    cin >> target;
    if (target >= 0 && target <= 4)
    {

        del(arr, size, target);
        cout << " The Position " << target << " deleted successffully " << endl;
        for (int i = 0; i < size; i++)
        {

            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
        cout << " Enter the poistion between [1-5]" << endl;

    return 0;
}