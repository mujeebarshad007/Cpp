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
int n;
void Add(student stu[]);
void Display(students stu);

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
        cout << " DO you want more studemts to add [y/n]\n";
        cin >> ch;

        ch = tolower(ch);
    } while (ch == 'y');
}
void Display(students stu);

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
        }
        getch();
    }
    return 0;
}