#include <iostream>
using namespace std;
int main()
{
    int num, reverse;
    reverse = 0;
    int original;
    cout << " Enter the Number you Want to check = ";
    cin >> num;
    original = num;

    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    if (original == reverse)
    {
        cout << " Your Entered Number is a Palindrome\n ";
    }
    else
    {
        cout << " Your Entered Number is not  a Palindrome\n ";
    }

    return 0;
}
