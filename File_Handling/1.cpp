#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream f;
    f.open("/home/muhib009/Desktop/count");
    if (!f)
    {
        cout << "Error" << endl;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            f << i << endl;
        }
        cout << " Data Written Successfully \n";
        f.close();
    }
    return 0;
}