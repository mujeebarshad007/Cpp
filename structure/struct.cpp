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
struct Students
{
    int id;
    int roll_number;
    char name[100];
    char Fname[100];
    float gpa;
};

Students stu[3];
int n;
void Add()
{
    char ch;
    char id1[6];
    do
    {
        system("clear");
        cout << " Enter the ID of the  Student " << n + 1 << endl;
        cin >> stu[n].id;
        // stu[n].id = atoi(id1);

        cout << " Enter the ROLL NUMBER of the  Student " << n + 1 << endl;
        cin >> stu[n].roll_number;

        cin.ignore();
        cout << " Enter the NAME of the  Student " << n + 1 << endl;
        cin.getline(stu[n].name, 100);

        cout << " Enter the Father of the  Student " << n + 1 << endl;

        cin.getline(stu[n].Fname, 100);

        cout << " Enter the GPA of the  Student " << n + 1 << endl;
        cin >> stu[n].gpa;
        n++;
        cout << " Do You want to Add more Records or Not [y/n]" << endl;
        cin >> ch;
        cin.ignore();
        tolower(ch);
    } while (ch == 'y');
}
void Display(Students, int);
void Display(Students stu1[], int n1)
{
    system("clear");
    cout << " ============================================================" << endl;

    cout << " ID \t ROLL NUMBER \t Name \t FATHER NAME \t GPA \n";
    for (int i = 0; i < n1; i++)
    {
        cout << stu1[i].id << " \t " << stu1[i].roll_number << "\t \t " << stu1[i].name << "\t   " << stu1[i].Fname << "    \t " << stu1[i].gpa << endl;
    }
    cout << " ============================================================" << endl;

    cout << "Press enter to go to main manu.....";
    getch();
}

void Search_by_id(Students, int, int);
void Search_by_id(Students stu[], int n, int target1)
{
    system("clear");
    bool found = false;
    int loc;
    for (int i = 0; i < n; i++)
    {

        if (stu[i].id == target1)
        {
            found = true;
            loc = i;
        }
    }
    if (found == true)
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Found\n";
        cout << " ============================================================" << endl;
        cout << " ID \t ROLL NUMBER \t NAME \t \t FATHER NAME \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].Fname << "\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Found\n";
        cout << " ============================================================" << endl;
    }
    cout << "Press Enter to go to main manu.....";
    getch();
}
void Search_by_rollnumber(Students, int, int);
void Search_by_rollnumber(Students stu[], int n, int target2)
{
    system("clear");

    bool found = false;
    int loc;
    for (int j = 0; j < n; j++)
    {

        if (stu[j].id == target2)
        {
            found = true;
            loc = j;
        }
    }
    if (found == true)
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Found\n";
        cout << " ============================================================" << endl;
        cout << " ID \t ROLL NUMBER \t NAME \t \t FATHER NAME \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].Fname << "\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Found\n";
        cout << " ============================================================" << endl;
    }
    cout << "Press Enter to go to main manu.....";
    getch();
}
void Search(void);
void Search(void)
{
    int ids;
    int roll_numbers;
    char names[100];
    char Fnames[100];
    float gpas;

    cout << " Enter the tern You want to search\n";
    cout << " I for ID \t R for ROLL NUMBER \t N for NAME \t \t F for FATHER NAME \t G for GPA \n";
    char input = getch();
    input = tolower(input);
    switch (input)
    {
    case 'i':
        cout << " Enter the ID You want to Search\n";
        cin >> ids;
        Search_by_id(stu, n, ids);
        break;
    case 'r':
        cout << " Enter the ID You want to Search\n";
        cin >> roll_numbers;
        cin >> ids;
        Search_by_rollnumber(stu, n, roll_numbers);
        break;
    }

    // cin.ignore();
    // cin.getline(names, 100);
    // cin.ignore();
    // cin.getline(Fnames, 100);
    // cin >> gpa;
}
int main()
{

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
        while (1)
        {
            cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( A ) to Add the record         |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( O ) to Sort the record        |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( S ) to Search the record      |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |           Press ( D ) to Display  the record      |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |              Press ( T )  to Delete  the record   |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( M ) to Modify  the record     |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( Q ) to Exit  the record       |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;

            cout << " Enter the Option : ";
            char ent = getch();
            tolower(ent);

            switch (ent)
            {

                {
                case 'a':
                    Add();
                    break;
                // case 'o':
                //     Sort();
                //     break;
                case 's':
                    Search();
                    break;
                case 'd':
                    Display(stu, n);
                    break;
                // case 't':
                //     Delete();
                //     break;
                // case 'm':
                //     Modify();
                //     break;
                case 'q':
                    exit(0);
                    break;
                default:
                    cout << "\n Enter Only From Selected List \n";
                }
            }
        }
        getch();
        return 0;
    }
}
