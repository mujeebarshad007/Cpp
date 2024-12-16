#include <iostream>
using namespace std;
int main()
{
    int num, reverse;
    reverse = 0;
    cout << " Enter the Number you want to Print in words = ";
    cin >> num;
    // first reverse
    while (num != 0)
    {

        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    // now print words
    while (reverse != 0)
    {
        switch (reverse % 10)
        {

        case 0:
            cout << " zero \n";
            break;
        case 1:
            cout << " one \n";
            break;
        case 2:
            cout << " two \n";
            break;
        case 3:
            cout << " three \n";
            break;
        case 4:
            cout << " four \n";
            break;
        case 5:
            cout << " five \n";
            break;
        case 6:
            cout << " six \n";
            break;
        case 7:
            cout << " seven \n";
            break;
        case 8:
            cout << " eight \n";
            break;
        case 9:
            cout << " nine \n";
            break;
        }
        reverse /= 10;
    }

    return 0;
}