#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " Enter the Number :";
    cin >> num;
    int digits = 0;
    int original = num;
    while (num != 0)
    {
        num /= 10;
        digits++;
    }
    num = original;

    int sum = 0;
    int digit;
    while (num != 0)
    {
        digit = num % 10;
        int power = 1;

        for (int i = 1; i <= digits; i++)
        {
            power = power * digit;
        }
        sum = sum + power;
        num /= 10;
    }
    cout << " The sum is " << sum << endl;
    if (sum == original)
    {
        cout << " The Number is an Armstrong\n";
    }
    else
    {
        cout << " The Number is not an Armstrong\n";
    }
    return 0;
}