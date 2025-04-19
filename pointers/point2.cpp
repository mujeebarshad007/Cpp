// Program of swapping two numbers using pointers
#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    cout << " Enter the Number One => \n";
    cin >> num1;
    cout << " Enter the Number Two => \n";
    cin >> num2;
    swap(ptr1, ptr2);

    cout << " The first one is " << *ptr2 << endl;
    cout << " The Second one is " << *ptr1 << endl;
    return 0;
}