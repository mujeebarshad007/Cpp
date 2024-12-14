#include <iostream>
using namespace std;
void primeC(int);
void primeC(int n)
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
        cout << " The Number you Entered is not a Prime Number\n";
    }
    else
        cout << " The Number you Entered is a Prime Number \n";
}
int main()
{
    int n1;
    cout << " Enter The NUmber : ";
    cin >> n1;
    primeC(n1);
    return 0;
}