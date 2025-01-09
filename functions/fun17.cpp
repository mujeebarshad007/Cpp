#include <iostream>
using namespace std;
void Reverse(int n1, int &reverse)
{
    reverse = 0;
    while (n1 != 0)
    {
        reverse = (reverse * 10) + (n1 % 10);
        n1 /= 10;
    }
}

int main()
{
    int num1;
    int Rev1;
    cout << " Enter the number you want to Check Palindrome \n";
    cin >> num1;
    int original = num1;
    Reverse(num1, Rev1);

    cout << " The Reverse of the number is " << Rev1 << endl;
    if (Rev1 == original)
    {
        cout << " It is a Palindrome \n";
    }
    else
    {
        cout << " It is not a Palindrome\n";
    }
    return 0;
}