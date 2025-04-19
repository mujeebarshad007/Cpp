// Function of converting binary to Decimal and Decimal To Binary

#include <iostream>
using namespace std;
void binDec(int, int, int &, int &);
void binDec(int Dec1, int Bin1, int &num1, int &num2)
{

    int ans3 = 0;
    int pow1 = 1;
    int rem1;

    while (Dec1 != 0) /*Converting to Binary*/
    {
        rem1 = Dec1 % 2;
        Dec1 /= 2;
        ans3 += rem1 * pow1;
        pow1 = pow1 * 10;
    }
    num1 = ans3;
    int ans4 = 0;
    int pow2 = 1;
    int rem2;

    while (Bin1 != 0) /*Convertinng to Decimal*/
    {
        rem2 = Bin1 % 10;

        ans4 += rem2 * pow2;
        pow2 = pow2 * 2;
        Bin1 /= 10;
    }

    num2 = ans4;
}
int main()
{

    int Dec;
    int Bin;
    int ans1;
    int ans2;
    int result;
    cout << "Enter the Decimal Number you want to convert to Binary :";
    cin >> Dec;
    cout << "Enter the Binary Number you want to convert to Decimal :";
    cin >> Bin;
    binDec(Dec, Bin, ans1, ans2);
    cout << "The Binary of " << Dec << " is " << ans1 << endl;
    cout << "The Decimal of " << Bin << " is " << ans2 << endl;

    return 0;
}