#include <iostream>
int evensum(int n, int m)
{
    if (n > m)
        return 0;
    if (n % 2 != 0)
        n++;
    if (m % 2 != 0)
        m--;

    if (n > m)
        return 0;

    return n + evensum(n + 2, m);
}
using namespace std;
int main()
{
    int n, m;
    int sum;
    cout << " Enter the Number  1" << endl;
    cin >> n;
    cout << " Enter the Number  2" << endl;
    cin >> m;
    sum = evensum(n, m);
    cout << sum << endl;
    return 0;
}