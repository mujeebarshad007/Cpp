#include <iostream>
using namespace std;
void primeP(int);
void primeP(int n2)
{
    int n1;
    for (int num = 2; num <= n2; num++)
    {
        bool isPrime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << num << " ";
        }
    }
}

int main()
{
    int num1;
    cout << "Enter your number: ";
    cin >> num1;
    primeP(num1);
    return 0;
}
