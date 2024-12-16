#include <iostream>
using namespace std;
int sumD(int);
int sumD(int n1)
{
    int sum = 0;
    while (n1 != 0)
    {
        sum += n1 % 10;
        n1 /= 10;
    }
    return sum;
}
int main()
{
    int num1;
    cout << " Enter The Number = ";
    cin >> num1;
    cout << " The Sum of Its Digits is : " << sumD(num1) << endl;
    return 0;
}