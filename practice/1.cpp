#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
#include "conio.h"
using namespace std;
struct student
{
    int id;
    int age;
    char name[100];
};

student stu[10];
int n;

void Add(student stu[])
{
    char ch;
    do
    {
        system("clear");
        cout << " Enter The Id " << endl;
        cin >> stu[n].id;
        cout << " Enter The Age " << endl;
        cin >> stu[n].age;
        cout << " Enter The NAme " << endl;
        cin.ignore();
        cin.getline(stu[n].name, 100);
        n++;
        cout << endl;
        cout << " You want more records [Y/N]" << endl;
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
}

void Display(student stu[])
{
    system("clear");
    if (n > 0)
    {

        cout << "===================================" << endl;
        cout << setw(10) << " ID" << setw(20) << " Age " << setw(20) << " Name " << setw(20) << endl;
        cout << setw(10) << " ----" << setw(20) << "----" << setw(20) << "----" << setw(20) << endl;

        for (int i = 0; i < n; i++)
        {
            cout << setw(10) << stu[i].id << setw(20) << stu[i].age << setw(20) << stu[i].name << setw(20) << endl;
        }

        cout << " Press Enter to go to main menu \n";
    }
    else
    {
        cout << " NO RECORD FOUND IN THE DATA \n";
    }
}

void sort_by_id(student stu[])
{
    system("clear");
    student temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (stu[j].id > stu[j + 1].id)
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Sorted Data is Given as \n ";
    Display(stu);
}

void sort_by_name(student stu[])
{
    system("clear");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(stu[j].name, stu[j + 1].name) > 0)
            {
                student temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Sorted Data is Given as \n ";
    Display(stu);
}

void Sort(student stu[])
{
    system("clear");
    cout << " You want to sort By ID [PRESS I ] or Name [ PRESS N ]" << endl;
    char ss = getch();
    ss = tolower(ss);
    switch (ss)
    {
    case 'i':
        sort_by_id(stu);
        break;
    case 'n':
        sort_by_name(stu);
        break;
    }
}

int main()
{

    while (1)
    {
        system("clear");
        cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Welcome  Guys How are You!            |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |           Welcome TO Student Management System    |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |             Please Press  /S/ to Start            |" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
        char start = getch();
        start = tolower(start);
        if (start == 's')
        {
            while (1)
            {
                system("clear");
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

                // case 's':
                //     Search(stu);
                //     break;

                // case 'm':
                //     Modify(stu);
                //     break;

                // case 't':
                //     Delete(stu);
                //     break;

                // case 'q':
                //     exit(0);
                //     break;
                default:
                    cout << "Select Only from the menu" << endl;
                    cout << "Press Enter \n";
                }
                getch();
            }
        }
        else
        {
            cout << " Oops You Didn't Press /S/" << endl;
            cout << " Press Enter to Start Again " << endl;
        }
        getch();
    }

    return 0;
}