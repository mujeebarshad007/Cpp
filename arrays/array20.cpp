// Sum of the dioganl elements in a 2D array
#include <iostream>
using namespace std;
int Sum(int arr1[][3], int size)
{
      int sum = 0;
      for (int i = 0; i < size; i++)
      {
            for (int j = 0; j < size; j++)
            {
                  if (i == j) /*For Primary Diogonals*/
                  {
                        sum += arr1[i][j];
                  }
                  else if (j == size - i - 1) /*For Secomdary Diogonals*/
                  {
                        sum += arr1[i][j];
                  }
            }
      }
      return sum;
}
int main()
{
      int arr[3][3] = {{1, 2, 3},
                       {
                           4,
                           5,
                           6,
                       },
                       {7, 8, 9}};

      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      cout << "The sum of the Primmary and Secondary Dioganls is : " << Sum(arr, 3) << endl;
      return 0;
}