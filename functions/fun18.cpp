#include <iostream>
using namespace std;
void Print(int arr[], int size1)
{
    for (int i = 0; i < size1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the values of the arrays \n";
        cin >> arr[i];
    }

    Print(arr, size);
    return 0;
}