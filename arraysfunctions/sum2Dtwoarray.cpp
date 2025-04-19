// Gay J.Bronson Chapter 7.4 question 4

#include <iostream>
using namespace std;
void sum(int list1[][3], int list2[][3], int list3[][3])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            list3[i][j] = list1[i][j] + list2[i][j];
        }
    }
}
int main()
{
    int arr1[2][3] = {16, 12, 33, 54, 21, 32};
    int arr2[2][3] = {50, 21, 34, 78, 2, 28};
    int arr3[2][3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " "; /*Displaying arrays side by side*/
        }
        cout << "\t\t";
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << "--------------------------------" << endl;
    cout << endl;
    cout << "The Addition of these two arrays is \n";

    sum(arr1, arr2, arr3);
    for (int i = 0; i < 2; i++)
    {
        cout << "\t\t";
        for (int j = 0; j < 3; j++)
        {

            cout << arr3[i][j] << "    ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
