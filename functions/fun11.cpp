#include <iostream>
using namespace std;
void Arm(int);
void Arm(int num)
{
    int original = num;

    int digits = 0;

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
        for (int i = 0; i < digits; i++)
        {

            power *= digit;
        }
        sum += power;
        num /= 10;
    }
    if (sum == original)
    {
        cout << " This Number is an Armstrong Number \n";
    }
    else
    {
        cout << " This Number is not an Armstrong Number \n";
    }
}

int main()
{
    int n1;
    cout << " Enter Your Number : ";
    cin >> n1;
    Arm(n1);
    return 0;
}