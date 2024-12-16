#include <iostream>
using namespace std;

int main()
{
    int num, num2, gcd, lcm;

    cout << " Enter The Number = ";
    cin >> num;
    cout << " Enter The Number = ";
    cin >> num2;
    for (int i = 1; i <= num && i <= num2; i++)
    {
        if (num % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    lcm = (num * num2) / gcd;
    cout << " L C M of " << num << " and " << num2 << " is = " << lcm << endl;
    return 0;
}