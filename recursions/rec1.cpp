#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n1;
    cout << " ENter number " << endl;
    cin >> n1;
    print(n1);
    return 0;
}