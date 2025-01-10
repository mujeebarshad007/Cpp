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
    int semester;
    float gpa;
};

Students stu[50];
int n;
void Search(void);
void Search_by_id(Students, int, int);
void Search_by_gpa(Students, int, float);
void Search_by_rollnumber(Students, int, int);
void Search_by_name(Students stu);
void Display(Students, int);
void Sort(Students stu[]);
void Sortname(Students stu[]);
void SortId(Students stu[]);
void Modify(Students stu[]);

void Add()
{
    char ch;
    do
    {
        system("clear");
        cout << " Enter the ID of the  Student " << n + 1 << endl;
        cin >> stu[n].id;

        cout << " Enter the ROLL NUMBER of the  Student " << n + 1 << endl;
        cin >> stu[n].roll_number;

        cin.ignore(100, '\n');
        cout << " Enter the NAME of the  Student " << n + 1 << endl;
        cin.getline(stu[n].name, 100);

        cout << " Enter the Semester of the  Student " << n + 1 << endl;

        cin >> stu[n].semester;

        cout << " Enter the GPA of the  Student " << n + 1 << endl;
        cin >> stu[n].gpa;
        n++;
        cout << " Do You want to Add more Records or Not [y/n]" << endl;
        cin >> ch;
        cin.ignore();
        tolower(ch);
    } while (ch == 'y');
}
void Display(Students stu[])
{
    cout << " ============================================================" << endl;

    cout << " ID \t ROLL NUMBER \t Name \t SEMESTER \t GPA \n";
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].id << " \t " << stu[i].roll_number << "\t \t " << stu[i].name << "\t   " << stu[i].semester << "    \t " << stu[i].gpa << endl;
    }
    cout << " ============================================================" << endl;

    cout << " Double Press enter to go to main manu.....";
    cin.ignore();
    cin.get();
}

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
        cout << " ID \t ROLL NUMBER \t NAME \t \t SEMESTER   \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].semester << " \t\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record  Not Found\n";
        cout << " ============================================================" << endl;
    }
    cout << "  Press Enter to go to main manu.....";
    cin.ignore();
    cin.get();
    return;
}
void Search_by_rollnumber(Students stu[], int n, int target2)
{
    system("clear");

    bool found = false;
    int loc;
    for (int j = 0; j < n; j++)
    {

        if (stu[j].roll_number == target2)
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
        cout << " ID \t ROLL NUMBER \t NAME \t \t SEMESTER   \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].semester << " \t\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Not Found\n";
        cout << " ============================================================" << endl;
    }
    cout << "  Press Enter to go to main manu.....";
    cin.ignore();
    cin.get();
    return;
}

void Search_by_gpa(Students stu[], int n, float target3)
{
    system("clear");

    bool found = false;
    int loc;
    for (int k = 0; k < n; k++)
    {

        if (stu[k].gpa == target3)
        {
            found = true;
            loc = k;
        }
    }
    if (found == true)
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Found\n";
        cout << " ============================================================" << endl;
        cout << " ID \t ROLL NUMBER \t NAME \t \t SEMESTER   \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].semester << " \t\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Not Found\n";
        cout << " ============================================================" << endl;
    }
    cout << "  Press Enter to go to main manu.....";
    cin.ignore();
    cin.get();
    return;
}

void Search_by_name(Students stu[])
{
    bool found = false;
    int loc;
    char Sname[100];
    cout << " Enter The name you want to Search \n";
    cin.getline(Sname, 100);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(stu[i].name, Sname) == 0)
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
        cout << " ID \t ROLL NUMBER \t NAME \t \t SEMESTER   \t GPA \n";
        cout << stu[loc].id << " \t " << stu[loc].roll_number << " \t\t " << stu[loc].name << "\t\t  " << stu[loc].semester << " \t\t   " << stu[loc].gpa << endl;
        cout << " ============================================================" << endl;
    }
    else
    {
        cout << " ============================================================" << endl;
        cout << " \t\t Record Not Found\n";
        cout << " ============================================================" << endl;
    }
    cout << " Press Enter to go to main manu.....";
    cin.ignore();
    cin.get();
    return;
}

void Search(Students stu[])
{
    int ids;
    int roll_numbers;
    char names[100];
    char Fnames[100];
    float gpas;

    cout << " Enter the term You want to search\n";
    cout << endl;
    cout << endl;
    cout << endl;
    system("clear");
    cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |              Search STUDENT RECORD                |" << endl;
    cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
    cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
    cout << "\t\t\t\t\t\t\t |            Press ( I ) for  Search by ID          |" << endl;
    cout << "\t\t\t\t\t\t\t |            Press ( R ) for  Search by ROLL NUMBER |" << endl;
    cout << "\t\t\t\t\t\t\t |            Press ( N ) for Search by NAME         |" << endl;
    cout << "\t\t\t\t\t\t\t |            Press ( G ) for Search by GPA          |" << endl;
    cout << "\t\t\t\t\t\t\t |            Press ( Q ) to Return to Main Menu     |" << endl;
    cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
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
        cout << " Enter the Roll Number You want to Search\n";
        cin >> roll_numbers;
        Search_by_rollnumber(stu, n, roll_numbers);
        break;
    case 'g':
        cout << " Enter the GPA You want to Search\n";
        cin >> gpas;
        Search_by_gpa(stu, n, gpas);
    case 'n':
        Search_by_name(stu);
        break;
    case 'q':
        cout << " Returning to main menu \n";
        return;
    default:
        cout << " Invalid option! Returning to the main menu...\n";
    }
}

void Sort(Students stu[])
{
    system("clear");

    cout << " You Want to Sort by Id or Name \n ";
    cout << endl;
    cout << endl;
    cout << "===========================================" << endl;
    cout << " Press I for Id and N for name \n";
    char sinp = getch();
    sinp = tolower(sinp);
    switch (sinp)
    {
    case 'i':
        SortId(stu);
        break;
    case 'n':
        Sortname(stu);
        break;
    }
}

void SortId(Students stu[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (stu[j].id > stu[j + 1].id)
            {
                Students temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Sorted Data is Given as :\n";
    Display(stu);
}

void Sortname(Students stu[])
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(stu[j].name, stu[j + 1].name) > 0)
            {
                Students temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
        }
    }
    cout << " The Sorted Data is Given as :\n";
    Display(stu);
}

void Modify(Students stu[])
{
    if (n > 0)

    {
        int user_num;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << " Enter the user number you want to modify (1 to " << n << ")";
        cin >> user_num;
        if (user_num < 1 || user_num > n)
        {
            cout << " Invalid user number! Press Enter to return to the main menu...";
            cin.ignore();
            cin.get();
            return;
        }
        user_num--;
        cin.ignore();

        cout << "\nEnter the term you want to Modify\n";
        system("clear");
        cout << "\t\t\t\t\t\t\t  ___________________________________________________" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |              MODIFY STUDENT RECORD                |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
        cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( I ) for ID                     |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( R ) for ROLL NUMBER            |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( N ) for NAME                   |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( S ) for SEMESTER               |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( G ) for GPA                    |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( W ) for WHOLE STUDENT          |" << endl;
        cout << "\t\t\t\t\t\t\t |            Press ( Q ) to Return to Main Menu     |" << endl;
        cout << "\t\t\t\t\t\t\t |___________________________________________________|" << endl;
        cout << "\t\t\t\t\t\t\t                Enter the Option: ";
        char ch;
        cin >> ch;
        ch = tolower(ch);
        switch (ch)
        {
        case 'i':
            cout << " Enter the Modifiying ID \n";
            cin >> stu[user_num].id;
            cout << " Modified the Id Successfully \n";
            cout << " To check go to main menu and select Display Function \n";

            break;
        case 'r':
            cout << " Enter the Modifiying Roll Number \n";
            cin >> stu[user_num].roll_number;
            cout << " Modified the Roll Number Successfully \n";
            cout << " To check go to main menu and select Display Function \n";

            break;
        case 'n':
            cout << " Enter the Modifiying Name \n";
            cin.getline(stu[user_num].name, 100);
            cin.ignore();
            cout << " Modified the Name Successfully \n";
            cout << " To check go to main menu and select Display Function \n";

            break;
        case 's':
            cout << " Enter the Modifiying Semester \n";
            cin >> stu[user_num].semester;
            cout << " Modified the Semester Successfully \n";
            cout << " To check go to main menu and select Display Function \n";

            break;
        case 'g':
            cout << " Enter the Modifiying GPA \n";
            cin >> stu[user_num].gpa;
            cout << " Modified the GPA Successfully \n";
            cout << " To check go to main menu and select Display Function \n";

            break;
        case 'w':
            cout << " Enter the New ID \n";
            cin >> stu[user_num].id;

            cout << " Enter the New Roll Number \n";
            cin >> stu[user_num].roll_number;

            cout << " Enter the New Name \n";
            cin.ignore();
            cin.getline(stu[user_num].name, 100);

            cout << " Enter the New Semester \n";
            cin >> stu[user_num].semester;

            cout << " Enter the New Gpa \n";
            cin >> stu[user_num].gpa;
            cout << " All fields Modified Successfully \n";
            break;
        case 'q':
            cout << " Returning to main menu \n";
            return;
        default:
            cout << " Invalid option! Returning to the main menu...\n";
        }
        cout << " Press Enter to return to the main menu...";
        cin.ignore();
        cin.get();
    }
    else
    {
        cout << " There are no Records to Modify . Please go to main menu and Add Records \n";
        cin.ignore();
        cin.get();
    }
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
            cout << "\t\t\t\t\t\t\t |             Press ( D ) to Display  the record    |" << endl;
            cout << "\t\t\t\t\t\t\t |                                                   |" << endl;
            cout << "\t\t\t\t\t\t\t |             Press ( T )  to Delete  the record    |" << endl;
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
                case 'o':
                    Sort(stu);
                    break;
                case 's':
                    Search(stu);
                    break;
                case 'd':
                    Display(stu);
                    break;
                // case 't':
                //     Delete();
                //     break;
                case 'm':
                    Modify(stu);
                    break;
                case 'q':
                    exit(0);
                    break;
                default:
                    cout << "\n Enter Only From Selected List \n";
                    cin.ignore();
                    getch();
                }
            }
        }

        return 0;
    }
}
