// Basic concepts of pointers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << " Enter the Number 1 \n";
    cin >> num1;
    cout << " Enter the Number  2 \n";
    cin >> num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    char op;
    cout << " Enter the Operation you want to apply [+,-,*,/] => ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "  The result is " << *ptr1 + *ptr2 << endl;
        break;
    case '-':
        cout << "  The result is " << *ptr1 - *ptr2 << endl;
        break;
    case '*':
        cout << "  The result is " << *ptr1 * *ptr2 << endl;
        break;
    case '/':
        cout << "  The result is " << *ptr1 / *ptr2 << endl;
        break;
    default:
        cout << " Enter valid operator\n";
    }

    return 0;
}