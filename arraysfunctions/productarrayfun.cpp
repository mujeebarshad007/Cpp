//  Gary J. Bronson Chapter  7.3 Question 7
#include <iostream>
using namespace std;
void extend(double pr[], double qt[], double am[])
{
    for (int i = 0; i < 10; i++)
    {
        am[i] = pr[i] * qt[i];
    }
}
int main()
{
    double price[10] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quantity[10] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double amount[10];
    extend(price, quantity, amount);
    for (int i = 0; i < 10; i++)
    {
        cout << amount[i] << " ";
    }
    cout << return 0;
}