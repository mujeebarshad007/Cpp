// Comparing two strings of type char
#include <iostream>
using namespace std;
int main()
{
    bool found = true;
    char str1[20] = "Mujeeb";
    char str2[20] = "Mujeeb";
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            found = false;
            break;
        }
    }
    if (found)
    {
        cout << "  yes these two strings are equal to each other\n";
    }
    if (found == false)
    {
        cout << " not equal to each other :\n";
    }
    return 0;
}