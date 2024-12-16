#include <iostream>
using namespace std;

int main()
{
    int num, power, result = 1;
    cout << " Enter The Number = ";
    cin >> num;
    cout << " Enter The power = ";
    cin >> power;

    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    cout << result;
    return 0;
}
