#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
int main()
{

    int rows;
    int cols;
    cout << " Enter the  number of rows " << endl;
    cin >> rows;
    cout << " Enter the  number of Columns " << endl;
    cin >> cols;

    int **list;             // used two stars for the fact that 2D array have to be created
    list = new int *[rows]; // this will make an array of rows number

    for (int i = 0; i < rows; i++)
    {
        list[i] = new int[cols]; // this will assign the arrays to the every row of list i in other words we give number of columns
    }

    // Taking Input

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> list[i][j];
        }
    }

    cout << endl;

    // Taking Output

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}