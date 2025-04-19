#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void changeA(int *ptr)
{
    *ptr = 20;
}
int main()
{
    // int a = 10;
    // int *ptr = &a;
    // int **ptr2 = &ptr;
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;
    // cout << ptr << endl;
    // cout << &a << endl;
    // cout << *(ptr2) << endl;
    int a = 10;
    changeA(&a);
    cout << " The value is " << a << endl;
    return 0;
}