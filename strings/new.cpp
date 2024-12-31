#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << " Enter Your String .\n";
    cin >> str;
    string original = str;
    reverse(str.begin(), str.end());

    if (original == str)
    {
        cout << " Your string is a Valid Palindrome\n";
    }
    else
    {
        cout << " Your string is not a Valid Palindrome\n";
    }
    return 0;
}
