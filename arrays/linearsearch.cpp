// Linear searching in an array
#include <iostream>
using namespace std;
int main()
{
    const int size = 5;
    int list[size] = {20, 30, 40, 50, 60};
    bool found = false;
    int count = 0;
    int num, j;
    cout << " Enter The Number You Want to search = " << endl;
    cin >> num;

    while (count < size && (!found))
    {
        if (list[count] == num)
        {
            found = true;
            j = list[count];
        }
        count++;
    }
    if (found == true)
    {
        cout << " The Number Your searched is Found and is at index " << count - 1 << endl;
    }
    else
    {
        cout << " Not found \n";
    }

    return 0;
}