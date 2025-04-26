#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    ofstream st;
    string name, age, disc;
    st.open("/home/muhib009/Desktop/Mujeeb");
    if (!st)
    {
        cout << " Error in Opening the file" << endl;
    }
    else
    {

        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter description: ";
        cin >> disc;

        cout << name << "\t" << age << "\t" << disc << endl;

        st.close();
    }
    return 0;
}
