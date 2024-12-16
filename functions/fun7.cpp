#include <iostream>
using namespace std;
void oddC(int);
void oddC(int n1)
{
    if (n1 % 2 == 0)
    {
        cout << " The Number is Even\n";
    }
    else
    {
        cout << " The Number is Odd\n";
    }
}
int main()
{
    int num1;
    cout << " Enter The Number you want to search\n";
    cin >> num1;
    oddC(num1);
    return 0;
}