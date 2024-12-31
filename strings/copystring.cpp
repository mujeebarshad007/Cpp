
//  function of copying one string to other
#include <iostream>
using namespace std;
void copy(char str3[], char str4[])
{
    int i;
    for (i = 0; str3[i] != '\0'; i++)
    {
        str4[i] = str3[i];
    }
    str4[i] = '\0';
}
int main()
{
    char str1[25];
    char str2[25]; /*Both strings lengths should be same asf*/

    cout << " Enter your first string \n";
    cin.getline(str1, 25);
    copy(str1, str2);
    cout << " The First String is " << str1 << endl;
    cout << " The Copied string is also " << str2 << endl;
    return 0;
}