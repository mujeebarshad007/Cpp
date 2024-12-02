#include <iostream>
using namespace std;

int main()
{
    double totalAverage = 0;
    for (int i = 0; i < 5; ++i)
    {
        double value1, value2, value3;
        cout << "Enter 3 test results for Generator " << i + 1 << ": ";
        cin >> value1;
        cout << "Second result = ";
        cin >> value2;
        cout << "Third result = ";
        cin >> value3;
        double sum = value1 + value2 + value3;
        double avg = sum / 3;
        cout << "Average for Generator " << i + 1 << ": " << avg << endl;
        totalAverage += avg;
    }
    cout << "Overall average voltage: " << totalAverage / 5 << endl;
    return 0;
}
