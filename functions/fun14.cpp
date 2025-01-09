// Using pass by reference calculating time
#include <iostream>
using namespace std;
void time(float, float &, float &, float &);
void time(float seconds, float &minutes, float &hours, float &seconds2)
{
    minutes = seconds / 60;
    hours = seconds / 3600;
    seconds2 = seconds;
}
int main()
{
    float sec, min, hr, sec2;
    cout << " Enter the number of seconds : ";
    cin >> sec;
    time(sec, min, hr, sec2);
    cout
        << " The minutes in these seconds are : " << min << endl;
    cout << " The Hours in these seconds are : " << hr << endl;
    cout << " The Seconds in these seconds are : " << sec2 << endl;
    return 0;
}