#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
class Student
{
    int age;
    string name;
    float sem;

public:
    Student() {}
    void getdat()
    {
        cout << " Enter the name " << endl;
        cin >> name;
        cout << " Enter the Age " << endl;
        cin >> age;
        cout << " Enter the Semester " << endl;
        cin >> sem;
    }

    void setdat()
    {
        cout << name << "\t" << age << "\t" << sem << endl;
    }
};
int main()
{
    Student s[2];
    fstream f;
    cout << "Data Written Successfully\n";
    f.open("/home/muhib009/Desktop/Binary1.bin", ios ::out | ios::binary | ios::trunc);
    for (int i = 0; i < 2; i++)
    {
        s[i].getdat();
        f.write((char *)&s[i], sizeof(s[i]));
    }

    f.close();

    f.open("/home/muhib009/Desktop/Binary1.bin", ios ::in | ios::binary | ios::trunc);

    for (int i = 0; i < 2; i++)
    {
        f.read((char *)&s[i], sizeof(s[i]));
        s[i].setdat();
    }
    cout << "Data Read Successfully\n";
    f.close();
    return 0;
}