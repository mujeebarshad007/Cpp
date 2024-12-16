#include <iostream>
using namespace std;
int findMax(int n1, int n2)
{
    int maximum;
    if (n1 > n2)
    {
        maximum = n1;
    }
    else
    {
        maximum = n2;
    }
    return maximum;
}

int findMin(int n1, int n2)
{
    int minimum;
    if (n1 < n2)
    {
        minimum = n1;
    }
    else
    {
        minimum = n2;
    }
    return minimum;
}

int main()
{
    int num1, num2;
    cout << " Enter The Number 1 :";
    cin >> num1;
    cout << " Enter The Number 2 :";
    cin >> num2;
    cout << " the Maximum number is " << findMax(num1, num2) << endl;
    cout << " the Minimum number is " << findMin(num1, num2) << endl;
    return 0;
}