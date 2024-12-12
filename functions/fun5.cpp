#include <iostream>
using namespace std;
int main()
{
    int num1;
    int sum = 0;
    cout << " Enter The Number = ";
    cin >> num1;
    while (num1 != 0)
    {
        sum += num1 % 10;
        num1 /= 10;
    }
    cout << sum;
    return 0;
}