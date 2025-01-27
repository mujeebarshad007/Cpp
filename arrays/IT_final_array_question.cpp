#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{

    int comp[4][5];
    int sum[5] = {0};
    int avg[4] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << " Enter the value for company " << i + 1 << " and country " << j + 1 << endl;
            cin >> comp[i][j];
        }
    }
    cout << setw(10) << "Company " << setw(20) << " Pakistan " << setw(20) << " India " << setw(20) << " Germany " << setw(20) << " England " << setw(20) << " Spain " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << setw(10) << "Company" << i + 1;
        for (int j = 0; j < 5; j++)
        {

            cout << setw(20) << comp[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            avg[i] += comp[i][j];
        }
    }

    cout << endl;
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        avg[i] /= 5;
    }

    for (int i = 0; i < 4; i++)
    {
        cout << avg[i] << " ";
    }

    cout << endl;
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            sum[j] += comp[i][j];
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << sum[i] << " ";
    }
    return 0;
}