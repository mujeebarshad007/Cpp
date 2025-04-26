#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
// void add();
// void display();
// void modify();
// void remove();
// void sort();
int n;
class Student
{
    int age;
    string name;
    float sem;

    void add()
    {
        cout << " Enter Name " << endl;
        cin >> name;
        cout << " Enter Age " << endl;
        cin >> age;
        cout << " Enter Semester " << endl;
        cin >> sem;
    }
    void display()
    {
        cout << " Name \t Age \t Semester" << endl;
        cout << name << "\t" << age << "\t" << sem << endl;
    }
};
int main()
{
    return 0;
}