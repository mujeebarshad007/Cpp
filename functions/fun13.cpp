// Using pass by refernce
#include <iostream>
using namespace std;

void fcPow(int n1, int expo, int &fact, int &pow)
{
    fact = 1;
    pow = 1;
    for (int i = 1; i <= n1; i++)
    {

        fact = fact * i;
    }
    for (int i = 0; i < expo; i++)
    {
        pow = pow * n1;
    }
}
int main()
{
    int num1, exponent, factorial, power;
    cout << " Enter the number : ";
    cin >> num1;
    cout << " Enter the Exponent : ";
    cin >> exponent;
    fcPow(num1, exponent, factorial, power);
    cout << " The Factorial of this number is : " << factorial << endl;
    cout << " The Power of this number is : " << power << endl;

    return 0;
}