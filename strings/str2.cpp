#include <iostream>
using namespace std;
int main()
{
      char str[100];
      cout << " Enter yout Desired word = : ";
      cin.getline(str, 100);
      int len = 0;

      for (int i = 0; str[i] != '\0'; i++)
      {
            len++;
      }
      cout << len << endl;
      return 0;
}