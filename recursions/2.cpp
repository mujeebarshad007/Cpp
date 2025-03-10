#include <iostream>
using namespace std;
int sum1toN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum1toN(n - 1);
    }
}
int main()
{
    int n;
    int sum;
    cout << " Enter the Number " << endl;
    cin >> n;
    if (n > 1)
    {

        sum = sum1toN(n);
        cout << " The Sum from 1 to " << n << " is : " << sum << endl;
    }
    else
    {
        cout << " Number Should be Greater than 1 " << endl;
    }
    return 0;
}