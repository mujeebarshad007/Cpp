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
void Modify(student stu[]);
void Delete(student stu[]);
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
    if (n > 0)
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
    else
    {
        cout << " No Records to Display Please Go to Main Menu and add records " << endl;
    }
}
void Displayf(student stu[])
{

    cout << setw(10) << " ID:" << setw(20) << "Name:" << setw(20) << "GPA:" << endl;
    cout << setw(10) << "-------" << setw(20) << "----" << setw(20) << "----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(10) << stu[i].id << setw(20) << stu[i].name << setw(20) << stu[i].gpa << endl;
    }
}

void Sort(student stu[])
{
    if (n > 0)
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
    else
    {
        cout << " Please Go to Main Menu and add records " << endl;
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
}
void Search(student stu[])
{
    if (n > 0)
    {

        system("clear");
        cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press I to Search by ID               |" << endl;
        cout << "\t\t\t\t\t\t\t |             Press N to Search by Name             |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;

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
    else
    {
        cout << " Please Go to Main Menu and add records " << endl;
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
        cout << endl;
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
        cout << endl;
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
void Modify(student stu[])
{
    if (n > 0)
    {
        bool found = false;
        int m_id;
        cout << " Enter the user ID to Modify his Record \n";
        cin >> m_id;

        for (int i = 0; i < n; i++)
        {
            if (m_id == stu[i].id)
            {
                found = true;
                system("clear");
                cout << " Press I to Modify ID and Press Enter" << endl;
                cout << " Press N to Modify Name and Press Enter " << endl;
                cout << " Press G to Modify Gpa and Press Enter" << endl;
                cout << " Press W to Modify WHole Student Record and Press Enter" << endl;
                char ch;
                cin >> ch;
                ch = tolower(ch);
                switch (ch)
                {
                case 'i':
                    cout << endl;
                    cout << " Enter the New Modifiying Id " << endl;
                    cin >> stu[i].id;
                    break;
                case 'n':
                    cout << endl;
                    cout << " Enter the New Modifiying Name " << endl;
                    cin.ignore();
                    cin.getline(stu[i].name, 100);
                    break;
                case 'g':
                    cout << endl;
                    cout << " Enter the New Modifiying Gpa " << endl;
                    cin >> stu[i].gpa;
                    break;
                case 'w':
                    cout << endl;
                    cout << endl;
                    cout << " Enter the New Modifiying Id " << endl;
                    cin >> stu[i].id;
                    cout << " Enter the New Modifiying Name " << endl;
                    cin.ignore();
                    cin.getline(stu[i].name, 100);
                    cout << " Enter the New Modifiying Gpa " << endl;
                    cin >> stu[i].gpa;
                    break;
                default:
                    cout << "Invalid Option . No Record is changed \n";
                }
                cout << " Record has been Modified Successfully. \n";
            }
        }
        if (found)
        {
            cout << " No Record for this ID has been Found " << endl;
        }
    }
    else
    {
        cout << " Please Go to Main Menu and add records " << endl;
    }
}
void Delete(student stu[])
{

    if (n > 0)
    {
        system("clear");
        Displayf(stu);

        int del_id;
        cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |   Enter the user Number ID to Delete its record   |" << endl;
        cout << "\t\t\t\t\t\t\t |         Id   Number from 1 to " << n << "                   |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
        cout << "\t\t\t\t\t\t\t                Enter the ID Number: ";

        cin >> del_id;

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (stu[i].id == del_id)
            {

                for (int j = i; j < n - 1; j++)
                {
                    stu[j] = stu[j + 1];
                }
                n--;
                found = true;
                cout << "\t\t\t\t\t\t                The Record  has been Deleted Successfully. \n";
                cout << "\t\t\t\t\t\t          Press Enter to go to main menu and use Display to Check\n ";
                break;
            }
        }
        if (!found)
        {
            cout << "No record found with ID " << del_id << "!\n";
        }

        cout << endl;
    }
    else
    {
        cout << " Please Go to Main Menu and add records " << endl;
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
        case 'm':
            Modify(stu);
            break;
        case 't':
            Delete(stu);
            break;
        case 'q':
            exit(0);
            break;
        default:
            cout << "Select Only from the menu" << endl;
            cout << "Press Enter \n";
        }
        getch();
    }
    return 0;
}