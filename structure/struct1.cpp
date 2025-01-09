#include "conio.h"
#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
#include <cctype>
#include <cstdlib>

using namespace std;

struct student
{
    int id;
    char name[100];
    float gpa;
};

void input(student[], int);
void Display(student[], int);
void Search_by_id(student[], int, int);
void NameSearch(student[], int, char[]);
void Search_by_gpa(student[], int, float);

void input(student stu[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " Enter the student id " << i + 1 << endl;
        cin >> stu[i].id;
        cin.ignore();
        cout << " Enter the Name " << i + 1 << endl;
        cin.getline(stu[i].name, 100);
        cout << " Enter the gpa " << i + 1 << endl;
        cin >> stu[i].gpa;
        cin.ignore();
    }
}

int main()

{

    int id;
    float gpa1;
    char nametosearch[100];
    float gpa;
    student stu[3];

    cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |             Welcome  Guys How are You!            |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |           Welcome to Student Management System    |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |             Please Press  /S/ to Start            |" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
    char start = getch();
    start = tolower(start);
    system("clear");
    if (start == 's')
    {

        input(stu, 3);
        Display(stu, 3);
        system("clear");

        cout << " Enter the term you want to search \n";
        cout << " ==============================================================" << endl;
        cout << " N for Name \t  I for Id \t  G for Gpa \t \n";
        char c = getch();
        c = tolower(c);
        system("clear");

        if (c == 'n')
        {
            cout << " Enter the Name you want to search : ";
            cin.getline(nametosearch, 100);

            NameSearch(stu, 3, nametosearch);
        }
        else if (c == 'i')
        {
            cout << " Enter the id you want to search : ";
            cin >> id;

            Search_by_id(stu, 3, id);
        }
        else if (c == 'g')
        {
            cout << " Enter the GPA you want to search : ";
            cin >> gpa1;
            system("clear");

            Search_by_gpa(stu, 3, gpa1);
        }
    }

    return 0;
}

void Display(student stu[], int size)
{
    cout << " ID \t Name \t Gpa\n";
    cout << "==============================\n";
    for (int i = 0; i < size; i++)
    {
        cout << stu[i].id << "\t" << stu[i].name << "\t" << stu[i].gpa << endl;
    }
}

void Search_by_id(student stu[], int size, int id)
{
    bool flag = false;
    int loc;
    for (int i = 0; i < size; i++ && !(flag))
    {
        if (stu[i].id == id)
        {
            flag = true;
            loc = i;
        }
    }
    if (flag == true)
    {
        cout << "===================================" << endl;
        cout << " Yes the record found\n";
        cout << " =====================================" << endl;
        cout << " ID \t Name \t Gpa\n";
        cout << stu[loc].id << "\t" << stu[loc].name << "\t" << stu[loc].gpa << endl;
    }
    else
    {
        cout << "===================================" << endl;
        cout << " Sorry, The record didn't find\n";
    }
}

void NameSearch(student stu[], int size, char sname[])
{
    bool flag = false;
    int loc;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(stu[i].name, sname) == 0)
        {
            flag = true;
            loc = i;
            break;
        }
    }
    if (flag == true)
    {
        cout << "===================================" << endl;
        cout << " Yes the record found\n";
        cout << " =====================================" << endl;
        cout << " ID \t Name \t Gpa\n";
        cout << stu[loc].id << "\t" << stu[loc].name << "\t" << stu[loc].gpa << endl;
    }
    else
    {
        cout << "===================================" << endl;
        cout << " Sorry, The record didn't find\n";
    }
}

void Search_by_gpa(student stu[], int size, float Searchgpa)
{
    bool flag = false;
    int loc;
    for (int i = 0; i < size; i++)
    {
        if (stu[i].gpa == Searchgpa)
        {
            flag = true;
            loc = i;
            break;
        }
    }
    if (flag == true)
    {
        cout << "===================================" << endl;
        cout << " Yes the record found\n";
        cout << " =====================================" << endl;
        cout << " ID \t Name \t Gpa\n";
        cout << stu[loc].id << "\t" << stu[loc].name << "\t" << stu[loc].gpa << endl;
    }
    else
    {
        cout << "===================================" << endl;
        cout << " Sorry, The record didn't find\n";
    }
}
