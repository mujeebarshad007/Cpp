#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
void rev(char arr[])
{
    int st = 0;
    int end = strlen(arr) - 1;
    char reverse;
    while (st <= end)
    {
        swap(arr[st], arr[end]);
        st++;
        end--;
    }
}
int main()
{
    char str[100];
    cout << " Enter The String\n";
    cin.getline(str, 100);
    rev(str);
    system("color 7c");
    cout << " The reverse of the string is " << str << endl;
    return 0;
}