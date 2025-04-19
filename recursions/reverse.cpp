#include <iostream>
using namespace std;
int reverse(int n, int rev = 0)
{
    if (n == 0)
    {
        return rev;
    }
    else
        return reverse(n / 10, rev * 10 + n % 10);
}
int main()
{
    int n1;
    int reverse1;
    cout << " Enter number " << endl;
    cin >> n1;
    ;
    reverse1 = reverse(n1);
    cout << " The Reverse of this Number is given as : " << reverse1 << "\n";
    if (reverse1 == n1)
    {
        cout << " Its is a Palindrome" << endl;
    }
    else
    {
        cout << " Nope" << endl;
    }
    return 0;
}