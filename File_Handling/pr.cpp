#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;
int main()
{
    string name, line;
    ofstream st;
    st.open("/home/muhib009/Desktop/Practice");
    if (!st)
    {
        cout << " Error Opening the File" << endl;
    }
    else
    {
        cout << " Enter Name";
        cin >> name;
        cin.ignore();
        cout << " Enter the line" << endl;
        getline(cin, line);
        st << name << "\t" << line << endl;
    }
    return 0;
}