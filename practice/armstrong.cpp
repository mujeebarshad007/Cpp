#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>

using namespace std;
int main()
{
    int num;
    cout << " Enter Number You want to check for Armstrong " << endl;
    cin >> num;
    int a;
    int sum = 0;
    int digit = 0;
    int original = num;
    while (num != 0)
    {
        num = num / 10;
        digit++;
    }
    num = original;
    while (num != 0)
    {
        a = num % 10;
        sum += pow(a, digit);
        num /= 10;
    }
    cout << " Number was => " << original << endl;
    cout << " Sum of Digits is =>" << sum << endl;
    cout << endl;
    (sum == original) ? cout << " yes its an Armstrong " << endl : cout << " Not Armstrong " << endl;
    return 0;
}