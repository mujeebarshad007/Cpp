#include <iostream>
using namespace std;
int fact(int);
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int nCr(int, int);
int nCr(int n1, int n2)
{
    int nF, rF, nMr, nMrF, nCrR;
    nF = fact(n1); // n!
    rF = fact(n2); // r!
    nMr = n1 - n2;
    nMrF = fact(nMr);        //(n-r)!
    nCrR = nF / (rF * nMrF); // nCr
    return nCrR;
}
int main()
{
    int num1, num2;
    cout << " Enter The value of n (n>r) : ";
    cin >> num1;
    cout << " Enter The value of r (r<n) : ";
    cin >> num2;

    cout << " The Bionomial Coefficient nCr is : " << nCr(num1, num2) << endl;
}