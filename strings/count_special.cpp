#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{

    int alph, num, spec;
    alph = num = spec = 0;
    char str[100];
    int a;
    cout << " ENter The First Name " << endl;
    cin.getline(str, 100);
    a = strlen(str);
    cout << a;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            alph++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            num++;
        }
        else
        {
            spec++;
        }
    }

    cout << endl;
    cout << " The Number of Alphabets are " << alph << endl;
    cout << " The Number of Numbers are " << num << endl;
    cout << " The Number of Special Characters are " << spec << endl;
    return 0;
}