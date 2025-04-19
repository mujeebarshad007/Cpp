#include <iostream>
using namespace std;

void yearCal(int n1, int &year, int &days, int &month)
{
    int year1;
    year1 = n1 / 365;
    year = 2000 + year1;

    days = n1 - (year1 * 365);

    month = days / 30;

    days = days % 30;
}
int main()
{
    int days1;
    int yr, mnth, dys;
    cout << " Enter the number of days passed since 1/1/2000 : ";
    cin >> days1;

    yearCal(days1, yr, dys, mnth);
    cout << " The Number of Year passed are : " << yr << endl;
    cout << " The Number of Days passed are : " << dys << endl;
    cout << " The Number of Months passed are : " << mnth << endl;
    cout << dys << "/" << mnth << "/" << yr << endl;
    return 0;
}