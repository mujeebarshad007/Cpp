
#include <iostream>
using namespace std;
int cubeN(int n)
{
    int cube = 1;
    for (int i = 0; i < 3; i++)
    {
        cube *= n;
    }
    return cube;
}

int main()
{
    int n;
    cout << " Enter Any Numebr for cube \n";
    cin >> n;
    cout << " The Cube Of this NUmber is " << cubeN(n) << endl;
    return 0;
}
