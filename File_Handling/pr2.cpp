#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    string line;
    ifstream st;
    st.open("/home/muhib009/Desktop/Practice");
    if (!st)
    {
        cout << "Error Opening File\n";
    }
    else
    {
        while (!st.eof())
        {
            getline(st, line);
            cout << line << endl;
        }
    }
    return 0;
}