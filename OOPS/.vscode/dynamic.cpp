#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
using namespace std;
void display();
void input(int *&arr, int size);
void output(int *&arr, int size);
void add(int *&arr, int &size);
void insert(int *&arr, int &size);
void remove(int *&arr, int &size);
void shrink(int *&arr, int &size);
void all_inOne_1D_array();

int main()
{
    all_inOne_1D_array();
    return 0;
}

void display()
{
    cout << " Enter 1 to add the element to the end of the array : " << endl;
    cout << "\t\t\t\t Enter 2 to insert the element at specific position the element :" << endl;
    cout << "\t\t\t\t Enter 3 to delete the element at specific position the element :" << endl;
    cout << "\t\t\t\t Enter 4 to display the elements in the array:" << endl;
    cout << "\t\t\t\t Enter 5 to shrink the size of the array:" << endl;
    cout << "\t\t\t\t Enter 0 to exit the program :" << endl;
}

void input(int *&arr, int size)
{
    cout << " Enter the elements of the array  " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void add(int *&arr, int &size){
    cout << " Enter the element you want to add at the end of the array"} void all_inOne_1D_array()
{
    // local varibles
    int size;
    int n;
    bool flag = false;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    // allocating the memory
    int *arr = new int[size];

    // input
    input(arr, size);

    // clearing the screen
    system("clear");

    // switch statements
    do
    {
        display();
        cin >> n;
        switch (n)
        {
        case 1:
        {
            add(arr, size);
            break;
        }
        case 2:
        {
            insert(arr, size);
            break;
        }
        case 3:
        {
            remove(arr, size);
            break;
        }
        case 4:
        {
            output(arr, size);
            break;
        }
        case 5:
        {
            shrink(arr, size);
            break;
        }
        case 0:
        {
            cout << "Quiting............" << endl;
            flag = true;
            break;
        }
        }
    } while (flag == false);
    delete[] arr;
    arr = NULL;
}