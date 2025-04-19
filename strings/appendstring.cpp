#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str1[100];
    char str2[100];
    cout << " Enter The First string" << endl;
    cin.getline(str1, 100);
    cout << " Enter The Second string" << endl;
    cin.getline(str2, 100);
    strcat(str1, " ");
    strcat(str1, str2);
    cout << " \nThe Both strings in joined form are " << str1 << endl;
    return 0;
}