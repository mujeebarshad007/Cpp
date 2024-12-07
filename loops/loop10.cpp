#include <iostream>
using namespace std;
int main()
{
    int num, product = 1;

    cout << " Enter the number : ";
    cin >> num;
    while (num != 0)
    {
        product *= num % 10;
        num /= 10;
    }

    cout << " The Product of Digits is = " << product << endl;
    return 0;
}