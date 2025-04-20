#include <iostream>
using namespace std;
int sum_d(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n % 10) + sum_d(n / 10);
    }
}
int main()
{
    int a = 123;
    cout << sum_d(a) << endl;
    return 0;
}h