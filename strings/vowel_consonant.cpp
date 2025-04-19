//  checking vowel and consonant string
#include <iostream>
#include <cstring>
#include "conio.h"
using namespace std;
int main()
{
      char str[100];
      cout << " Enter your word = ";
      cin.getline(str, 100);
      int cons, vow;
      cons = vow = 0;
      for (int i = 0; str[i] != '\0'; i++)
      {
            str[i] = tolower(str[i]);
      }

      for (int i = 0; str[i] != '\0'; i++)
      {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                  vow++;
            }
            else
                  cons++;
      }
      cout << " The Vowel are " << vow << endl;
      cout << " The Consonant are " << cons << endl;

      return 0;
}