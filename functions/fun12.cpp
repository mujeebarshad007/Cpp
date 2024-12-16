#include <iostream>
using namespace std;
float totamt(float, float, float, float);
float totamt(float quarters, float dimes, float nickels, float pennies)
{
    float total;
    total = quarters * 0.25 + (dimes * 0.10) + (nickels * 0.05) + (pennies * 0.01);
    return total;
}
int main()
{
    int n1, n2, n3, n4;
    cout << " Enter the value of the quarters : ";
    cin >> n1;
    cout << " Enter the value of the dimes : ";
    cin >> n2;
    cout << " Enter the value of the nickels : ";
    cin >> n3;
    cout << " Enter the value of the pennies : ";
    cin >> n4;

    cout << " The Total value is : " << totamt(n1, n2, n3, n4) << endl;
}