#include <iostream>
using namespace std;

// Function to input a 3x3 matrix
void inp(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value at index [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

// Function to display two 3x3 matrices side by side
void Display(int arr1[][3], int arr2[][3])
{
    cout << "\nMatrix 1\t\tMatrix 2\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << "\t\t";
        for (int k = 0; k < 3; k++)
        {
            cout << arr2[i][k] << " ";
        }
        cout << endl;
    }
}

// Function to multiply two 3x3 matrices
void Multiply(int arr1[][3], int arr2[][3], int result[][3])
{
    // Initialize the result matrix to zero
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main()
{
    int list1[3][3]; // First matrix
    int list2[3][3]; // Second matrix
    int list3[3][3]; // Resultant matrix after multiplication

    // Input for the first matrix
    cout << "Enter values for the first 3x3 matrix:\n";
    inp(list1);

    // Input for the second matrix
    cout << "\n======================\n";
    cout << "Enter values for the second 3x3 matrix:\n";
    inp(list2);

    // Display the two matrices
    Display(list1, list2);

    // Multiply the matrices
    Multiply(list1, list2, list3);

    // Display the resultant matrix
    cout << "\nResultant Matrix after Multiplication:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << list3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
