#include <iostream>
using namespace std;
void Str(int);
void Str(int n1)
{
    int sum = 0;
    int digits;
    int fact;
    int orig = n1;
    while (n1 != 0)
    {
        int digits = n1 % 10;
        fact = 1;

        for (int i = 1; i <= digits; i++)
        {
            fact *= i;
        }
        sum += fact;
        n1 /= 10;
    }
    if (sum == orig)
    {
        cout << " It is a Strong Number\n";
    }
    else
    {
        cout << " It is not a Strong Number\n";
    }
}
int main()
{
    int num1;
    cout << " Enter The Number YOu want to check is strong or not : ";
    cin >> num1;
    Str(num1);
}