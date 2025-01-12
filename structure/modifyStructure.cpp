// Sorting in structure by age
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
struct students
{
    int age;
    char name[100];
    int semester;
};

void modify(students stu[]);
void modify(students stu[])
{
    int mod_age;
    cout << " Enter the age to modify data \n";
    cin >> mod_age;

    for (int i = 0; i < 3; i++)
    {
        if (stu[i].age == mod_age)
        {
            cout << " Enter the age of the student of age " << mod_age << endl;
            cin >> stu[i].age;
            cin.ignore();
            cout << " Enter the Name of the student of age" << mod_age << endl;
            cin.getline(stu[i].name, 100);
            cout << " Enter the Semester of the student of age " << mod_age << endl;
            cin >> stu[i].semester;
        }
    }
}

void Display(students stu[]);
void Display(students stu[])
{
    cout << " Displayed the record as :" << endl;
    cout << " Age \t Name \t\t\t Semester \n";
    for (int i = 0; i < 3; i++)
    {
        cout << stu[i].age << " \t " << stu[i].name << " \t\t\t " << stu[i].semester << endl;
    }
}
int main()
{
    int size = 3;
    students stu[20];

    for (int i = 0; i < size; i++)
    {
        cout << " Enter the age of the student " << i + 1 << endl;
        cin >> stu[i].age;
        cin.ignore();
        cout << " Enter the Name of the student " << i + 1 << endl;
        cin.getline(stu[i].name, 100);
        cout << " Enter the Semester of the student " << i + 1 << endl;
        cin >> stu[i].semester;
    }
    Display(stu);

    cout << endl;
    cout << endl;

    modify(stu);
    cin.ignore();
    cout << endl;
    cout << endl;

    Display(stu);

    return 0;
}