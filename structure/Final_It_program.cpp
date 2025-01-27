#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;

int n;
struct student
{
    char name[100];
    int regid;
    int semnum;
    char gender[10];
    int avgmarks;
};
student stu[100];
void Input(student stu[])
{
    char ch;
    do
    {

        cout << " Enter the Registration ID " << endl;
        cin >> stu[n].regid;
        cin.ignore();

        cout << " Enter the name of the student " << endl;
        cin.getline(stu[n].name, 100);
        cout << " ENter the semnum" << endl;
        cin >> stu[n].semnum;
        cin.ignore();
        cout << " Enter the Gender Type male or female " << endl;
        cin.getline(stu[n].gender, 10);

        cout << " Enter the Average marks [ if marks > 80 for A grade]" << endl;
        cin >> stu[n].avgmarks;

        n++;

        cout << " Do you want more records " << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

void Display(student stu[])
{
    system("clear");

    cout << setw(10) << " Name " << setw(20) << " Registration ID " << setw(20) << " Semester " << setw(20) << " Gender " << setw(20) << " Average Marks " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << stu[i].name << setw(20) << stu[i].regid << setw(20) << stu[i].semnum << setw(20) << stu[i].gender << setw(20) << stu[i].avgmarks << endl;
    }
}

void Check(student stu[])
{
    system("clear");
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(stu[i].gender, "female") == 0 && stu[i].avgmarks > 80)
        {
            cout << " The Student who got A grade and female is " << stu[i].name << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << " No  Female student With Grade A is Found \n";
    }
}
int main()
{
    Input(stu);
    Display(stu);
    Check(stu);
    return 0;
}