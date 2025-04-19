#include <iostream>
using namespace std;
int convertdays(int, int, int);
int convertdays(int day, int month, int year)
{
    int date;
    date = year * 10000 + month * 100 + day;
    return date;
}

int main()
{
    int num1, num2, num3;
    cout << " Enter the year : ";
    cin >> num1;
    cout << " Enter the month : ";
    cin >> num2;
    cout << " Enter the day : ";
    cin >> num3;
    cout << " The total number calculated in the form of integer is : " << convertdays(num1, num2, num3);
}