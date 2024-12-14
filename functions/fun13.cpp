// Function of findind prime, armstrong and perfect numbers;
#include <iostream>
using namespace std;
void prime1(int);
void prime1(int n)
{
    bool isPrime = false;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = true;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "It is not a Prime Number \n";
    }
    else
    {
        cout << "It is  a Prime Number \n";
    }
}
void Arms(int);
void Arms(int n1)
{
    int digits = 0;
    int orig;
    orig = n1;

    while (n1 != 0)
    {
        n1 /= 10;
        digits++;
    }
    n1 = orig;
    int digit;
    int sum = 0;
    while (n1 != 0)
    {
        digit = n1 % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++)
        {
            power *= digit;
        }
        sum += power;
        n1 /= 10;
    }
    if (sum == orig)
    {
        cout << "The Number You Entered is an Armstrong\n";
    }
    else
    {
        cout << "The Number You Entered is not an Armstrong\n";
    }
}
void Perf(int);
void Perf(int n2)
{
    int sum = 0;
    int original = n2;
    for (int i = 1; i <= n2 / 2; i++)
    {
        if (n2 % i == 0)
        {
            sum += i;
        }
    }
    if (sum == original)
    {
        cout << "It is a Perfect Number \n";
    }
    else
    {
        cout << "It is not  a Perfect Number \n";
    }
}

int main()
{
    int num1, num2,
        num3;
    cout << "Enter the number you want to Check for Prime or not :";
    cin >> num1;
    prime1(num1);
    cout << endl;
    cout << endl;
    cout << "Enter the number you want to Check for Armstrong or not :";
    cin >> num2;
    Arms(num2);
    cout << endl;
    cout << endl;
    cout << "Enter the number you want to Check is Perfect or not :";
    cin >> num3;
    Perf(num3);
    return 0;
}