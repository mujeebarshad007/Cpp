#include <iostream>
using namespace std;
int main()
{

      int list[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
      int multiplier;
      for (int i = 0; i < 4; i++)
      {
            for (innt j = 0; j < 4; j++)
            {
                  cout << list[i][j] << " ";
            }
            cout << endl;
      }

      cout << " Enter the multiplier : ";
      cin >> multiplier;

      for (int i = 0; i < 4; i++)
      {
            for (innt j = 0; j < 4; j++)
            {
                  list[i][j] = multiplier * list[i][j];
            }
      }

      cout << endl;
      cout << " The Updated matrice is givven as : ";
      cout << endl;
      for (int i = 0; i < 4; i++)
      {
            for (innt j = 0; j < 4; j++)
            {
                  cout << list[i][j] << " ";
            }
            cout << endl;
      }
      return 0;
}