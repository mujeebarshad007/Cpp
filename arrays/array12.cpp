// Assignment Project
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    const int std = 3;
    const int sub = 5;

    float marks[std][sub];

    int sum;
    int i, j, k, l;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    float avg[std];

    // Entering marks of Subjects

    for (i = 0; i < std; i++)
    {
        cout << " Enter The Marks of the Student " << i + 1 << endl;
        for (j = 0; j < sub; j++)
        {

            cout << " Enter marks of the Subject " << j + 1 << " = ";
            cin >> marks[i][j];
        }
    }

    // Displaying marks of Subjects of Students

    cout << "\nStudent\t";
    for (int j = 0; j < sub; j++)
    {
        cout << " Subject " << j + 1 << "\t";
    }
    cout << endl;

    for (int i = 0; i < std; i++)
    {
        cout << i + 1 << "\t";
        for (int j = 0; j < sub; j++)
        {
            cout << marks[i][j] << "\t\t";
        }
        cout << endl;
    }

    // Calculating Average of Students

    for (i = 0; i < std; i++)

    {
        float sum = 0;
        for (j = 0; j < sub; j++)
        {
            sum += marks[i][j];
        }
        avg[i] = sum / j;
    }

    // Displaying Average of student

    cout << "\nStudent\t\tAverage" << endl;
    cout << "==========================" << endl;
    for (i = 0; i < std; i++)
    {
        cout << "Student " << i + 1 << "\t" << (avg[i]) << endl;
    }
    //    Displaying highest

    cout << endl;
    for (i = 0; i < std; i++)
    {
        if (avg[i] > largest)
        {
            largest = avg[i];
            k = i;
        }
    }
    cout << "The Highest Average is of the Student " << k + 1 << " and it is " << largest << endl;

    cout << "\n";

    // Displaying lowest average

    smallest = INT_MAX;
    for (i = 0; i < std; i++)
    {
        if (avg[i] < smallest)
        {
            smallest = avg[i];
            k = i;
        }
    }
    cout << "The Smallest Average is of the Student " << k + 1 << " and it is " << smallest << endl;
    cout << "\n";

    // Displaying who have highest marks in all subjects
    int highest = INT_MIN;
    for (j = 0; j < sub; j++)
    {
        for (i = 0; i < std; i++)
        {
            if (marks[i][j] > highest)
            {
                highest = marks[i][j];
                k = i;
                l = j;
            }
        }
    }
    cout << "The Highest Marks is of the student " << k + 1 << " and is in Subject " << l + 1 << " and is " << highest << endl;
    cout << "\n";

    // Displaying who have lowest marks in Subject 4

    smallest = INT_MAX;
    j = 3;
    for (i = 0; i < std; i++)
    {
        if (marks[i][j] < smallest)
        {
            smallest = marks[i][j];
            k = i;
        }
    }
    cout << "The Student which got lowest marks in Subject 4 is " << k + 1 << " his marks are " << smallest << endl;
    cout << "\n";

    // Displaying how many students fail in Subject 2

    j = 1;
    k = 0;
    for (i = 0; i < std; i++)
    {
        if (marks[i][j] < 50)
        {

            k++;
        }
    }
    cout << "\nThe Students Who Fail in Subject 2 are " << k << endl;
    cout << "\n";

    // Displaying How many got A in Subject 4

    j = 3;
    char grade;
    k = 0;
    for (i = 0; i < std; i++)
    {
        if (marks[i][j] >= 80)
        {
            grade = 'A';
            k++;
        }
    }
    cout << "The students who got grade A in Subject 4 are " << k << endl;
    return 0;
}