// Sorting in structure by Name
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
void Sort(students stu[], int n);
void Sort(students stu[], int n)
{

    students temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(stu[j].name, stu[j + 1].name) > 0)
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
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
    Sort(stu, size);
    Display(stu);

    return 0;
}