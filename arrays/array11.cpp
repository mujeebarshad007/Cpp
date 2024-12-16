// Program of sum and product of  elements of the array usinf functions
#include <iostream>
using namespace std;
int Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int Prod(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    const int size = 5;
    int arr[size] =
        {
            2,
            3,
            4,
            5,
            6,
        };

    cout << " The Sum is " << Sum(arr, size) << endl;
    cout << " The Product  is " << Prod(arr, size) << endl;
}