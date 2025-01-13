#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
#include <cctype>
#include "conio.h"
#include <stdio.h>
#include <fstream>
#include <cstdlib>
using namespace std;
struct student
{
    int id;
    char name[100];
    float gpa;
};
student stu[10];
int n = 0;
void Add(student stu[]);
void Display(student stu[]);
void Sort(student stu[]);
void Sort_by_id(student stu[]);
void Sort_by_name(student stu[]);
void Search(student stu[]);
void Search_by_id(student stu[]);
void Search_by_name(student stu[]);
void Add(student stu[])
{
    char ch;
    do
    {
        system("clear");
        cout
            << " Enter the id of the student " << n + 1 << endl;
        cin >> stu[n].id;
        cin.ignore();
        cout << " Enter the Name of the student " << n + 1 << endl;
        cin.getline(stu[n].name, 100);
        cout << " Enter the GPA of the student " << n + 1 << endl;
        cin >> stu[n].gpa;
        n++;
        cout << " Do you want more students to add [y/n]\n";
        cin >> ch;

        ch = tolower(ch);
    } while (ch == 'y');
}
void Display(student stu[])
{

    cout << setw(10) << " ID:" << setw(20) << "Name:" << setw(20) << "GPA:" << endl;
    cout << setw(10) << "-------" << setw(20) << "----" << setw(20) << "----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << stu[i].id << setw(20) << stu[i].name << setw(20) << stu[i].gpa << endl;
    }

    cout << " ============================================================" << endl;

    cout << " Press Enter to go to main menu \n";
}

void Sort(student stu[])
{
    system("clear");
    cout << " Press I for sort by ID and N for Sort by Name " << endl;
    char sinp = getch();
    sinp = tolower(sinp);
    switch (sinp)
    {
    case 'i':
        Sort_by_id(stu);
        break;
    case 'n':
        Sort_by_name(stu);
        break;
    }
}

void Sort_by_id(student stu[])
{
    system("clear");

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (stu[j].id > stu[j + 1].id)
            {
                student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Data has been Sorted successfully \n";
    cout << " ============================================================" << endl;
    Display(stu);
    cout << endl;
    cout << " Press Enter to go to main menu \n";
}

void Sort_by_name(student stu[])
{
    system("clear");

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            char name1[100];
            char name2[100];
            strcpy(name1, stu[j].name);
            strcpy(name2, stu[j + 1].name);
            for (int k = 0; name1[k] != '\0'; k++)
            {
                name1[k] = tolower(name1[k]);
            }
            for (int k = 0; name2[k] != '\0'; k++)
            {
                name2[k] = tolower(name2[k]);
            }
            if (strcmp(name1, name2) > 0)
            {
                student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Data has been Sorted successfully by Name \n";
    cout << " ============================================================" << endl;
    Display(stu);
    cout << endl;
    cout << " Press Enter to go to main menu \n";
}
void Search(student stu[])
{
    system("clear");
    cout << " Press I for Search by ID and N for Search by Name " << endl;
    char seinp = getch();
    seinp = tolower(seinp);
    switch (seinp)
    {
    case 'i':
        Search_by_id(stu);
        break;
    case 'n':
        Search_by_name(stu);
        break;
    default:
        cout << " Enter the correcct key for Searching " << endl;
    }
}
void Search_by_id(student stu[])
{
    int id_num;
    cout << " Enter the ID number You Want to Search " << endl;
    cin >> id_num;
    bool found;
    int loc;
    for (int i = 0; i < n; i++)
    {
        if (stu[i].id == id_num)
        {
            found = true;
            loc = i;
            break;
        }
    }
    if (found == true)
    {
        cout << "=====================================================================" << endl;
        cout << " Yes The Record with the id " << id_num << "  has been Found" << endl;
        cout << setw(10) << " ID:" << setw(20) << "Name:" << setw(20) << "GPA:" << endl;
        cout << setw(10) << "-------" << setw(20) << "----" << setw(20) << "----" << endl;
        cout << setw(10) << stu[loc].id << setw(20) << stu[loc].name << setw(20) << stu[loc].gpa << endl;
        cout << "=====================================================================" << endl;
        cout << endl;
        cout << " Press Enter to go to main menu \n";
    }
    else
    {
        cout << "=====================================================================" << endl;
        cout << " Sorry The Record with the id " << id_num << "  has not been Found" << endl;
    }
}
void Search_by_name(student stu[])
{
    char s1name[100];
    char sname[100];

    bool found;
    int loc;
    cout << " Enter the Name You Want to Search " << endl;
    cin.getline(sname, 100);

    for (int i = 0; i < n; i++)
    {
        strcpy(s1name, stu[i].name);
        for (int k = 0; s1name[k] != '\0'; k++)
        {
            s1name[k] = tolower(s1name[k]);
        }
        for (int k = 0; sname[k] != '\0'; k++)
        {
            sname[k] = tolower(sname[k]);
        }
        if (strcmp(s1name, sname) == 0)
        {
            found = true;
            loc = i;
            break;
        }
    }
    if (found == true)
    {
        cout << "=====================================================================" << endl;
        cout << " Yes The Record with the id " << sname << "  has been Found" << endl;
        cout << setw(10) << " ID:" << setw(20) << "Name:" << setw(20) << "GPA:" << endl;
        cout << setw(10) << "-------" << setw(20) << "----" << setw(20) << "----" << endl;
        cout << setw(10) << stu[loc].id << setw(20) << stu[loc].name << setw(20) << stu[loc].gpa << endl;
        cout << "=====================================================================" << endl;
        cout << endl;
        cout << " Press Enter to go to main menu \n";
    }
    else
    {
        cout << "=====================================================================" << endl;
        cout << " Sorry The Record with the id " << sname << "  has not been Found" << endl;
    }
}

int main()
{
    while (1)
    {
        cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( A ) to Add the record         |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( D ) to Display  the record    |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( O ) to Sort the record        |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( S ) to Search the record      |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( M ) to Modify  the record     |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( T )  to Delete  the record    |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press ( Q ) to Exit  the record       |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
        char st = getch();
        st = tolower(st);
        switch (st)
        {
        case 'a':
            Add(stu);
            break;
        case 'd':
            Display(stu);
            break;
        case 'o':
            Sort(stu);
            break;
        case 's':
            Search(stu);
            break;
        // case 'm':
        //     Modify(stu);
        //     break;
        // case 't':
        //     Delete(stu);
        //     break;
        case 'q':
            exit(0);
            break;
        }
        getch();
    }
    return 0;
}