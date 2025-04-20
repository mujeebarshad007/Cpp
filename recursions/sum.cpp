#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int a;
    a = 4;
    cout << sum(a) << endl;
    return 0;
}