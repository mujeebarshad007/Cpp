// Searching in the structure
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
void Search(students stu[]);
void Search(students stu[])
{
    char sname[100];

    cout << " Enter the name you want to search \n";
    cin.ignore();
    cin.getline(sname, 100);
    bool found;
    int loc;
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(stu[i].name, sname) == 0)
        {
            found = true;
            loc = i;
            break;
        }
    }
    if (found == true)
    {
        cout << " ==============================================" << endl;
        cout << " Yes the Recors with this name has been found " << endl;
        cout << " Age \t Name \t\t\t Semester \n";

        cout << stu[loc].age << " \t " << stu[loc].name << " \t\t\t " << stu[loc].semester << endl;
    }
    else
    {
        cout << " No The record with this name is not FOund\n";
    }
}

int main()
{
    students stu[20];

    for (int i = 0; i < 3; i++)
    {
        cout << " ENter the age of the student " << i + 1 << endl;
        cin >> stu[i].age;
        cin.ignore();
        cout << " ENter the Name of the student " << i + 1 << endl;
        cin.getline(stu[i].name, 100);
        cout << " ENter the Semester of the student " << i + 1 << endl;
        cin >> stu[i].semester;
    }
    Display(stu);
    Search(stu);
    return 0;
}