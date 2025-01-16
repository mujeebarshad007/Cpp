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
// void Display(student stu[]);
// void Sort(student stu[]);
// void Sort_by_id(student stu[]);
// void Sort_by_name(student stu[]);
// void Search(student stu[]);
// void Search_by_id(student stu[]);
// void Search_by_name(student stu[]);
// void Modify(student stu[]);
// void Delete(student stu[]);

void Add(student stu[])
{
    char ch;

    do
    {

        cout << " Enter the id of the student " << n + 1 << endl;
        cin >> stu[n].id;
        cout << " Enter the Namae of the student " << n + 1 << endl;
        cin.ignore();
        cin.getline(stu[n].name, 100);
        cout << " Enter the gpa of the student " << n + 1 << endl;
        cin >> stu[n].gpa;
        n++;
        cout << " Do you want to add more records [y/n] \n";
        cin >> ch;

    } while (ch == 'y');
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
        // case 'd':
        //     Display(stu);
        //     break;
        // case 'o':
        //     Sort(stu);
        //     break;
        // case 's':
        //     Search(stu);
        //     break;
        // case 'm':
        //     Modify(stu);
        //     break;
        // case 't':
        //     Delete(stu);
        //     break;
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