#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{
    float cr, gpa, total;
    total = 0;
    int subject;
    cout << " Enter Number of Subjects you have" << endl;
    cin >> subject;
    for (int i = 0; i < subject; i++)
    {
        cout << " Enter the Gpa of the subject " << i + 1 << endl;
        cin >> gpa;
        cout << " Enter the Cr of the subject " << i + 1 << endl;
        cin >> cr;
        total += gpa * cr;
    }
    float CGPA;
    CGPA = total / 15;

    cout << " The Total CGPA is " << CGPA << endl;

    return 0;
}