// Modifying in structure by age and name
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
void Display(students stu[], int n);
void Display(students stu[], int n)
{
    cout << " Displayed the record as :" << endl;
    cout << " Age \t Name \t\t\t Semester \n";
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].age << " \t " << stu[i].name << " \t\t\t " << stu[i].semester << endl;
    }
}

void deleteRecord(students stu[], int &n);
void deleteRecord(students stu[], int &n)
{
    char sname[100];
    cout << " Enter the user name to delete its data " << endl;
    cin.ignore();
    cin.getline(sname, 100);
    for (int i = 0; i < n; i++)
    {
        bool found = false;

        if (strcmp(stu[i].name, sname) == 0)
        {
            for (int j = i; j < n - 1; j++)
            {
                stu[j] = stu[j + 1];
            }
            n--;
            found = true;
            cout << " The Data has been Deleted Successfully\n";
            break;
        }
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
    Display(stu, size);

    cout << endl;
    cout << endl;
    deleteRecord(stu, size);
    cout << endl;
    Display(stu, size);
    return 0;
}