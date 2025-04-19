// Code of finding max colum sum in 2D array
#include <iostream>
#include <climits>
using namespace std;
int Sum(int arr1[][3], int n)
{
      int colSum = 0;
      for (int j = 0; j < 3; j++)
      {
            int maxsum = INT_MIN;
            for (int i = 0; i < 3; i++)
            {
                  colSum = arr1[i][j];
            }
            maxsum = max(maxsum, colSum);
            colSum += maxsum;
      }

      return colSum;
}
int main()
{
      int maximum[3];
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

      cout << "The sum of the col max is : " << Sum(arr, 3) << endl;
      return 0;
}